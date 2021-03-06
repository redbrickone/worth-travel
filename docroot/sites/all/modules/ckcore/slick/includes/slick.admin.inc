<?php

/**
 * @file
 * Contains optional functions called only if needed by admin pages.
 */

/**
 * Defines a list of options available for the responsive Slick.
 *
 * @param int $count
 *   The number of breakpoints.
 *
 * @return array
 *   A copy of the main options with the removal of problematic options.
 */
function slick_get_responsive_options($count = 0) {
  $options = array();
  $breakpoints = drupal_map_assoc(range(0, ($count - 1)));
  $defaults = slick_get_options();

  foreach ($breakpoints as $key => $breakpoint) {
    $options[$key] = array(
      'breakpoint' => 0,
      'unslick'    => FALSE,
      'settings'   => array(),
    );

    foreach (slick_clean_options($defaults) as $name => $value) {
      $options[$key]['settings'][$name] = $value;
    }
  }

  return $options;
}

/**
 * Removes problematic options for the responsive Slick.
 *
 * They should exist once for a given Slick, or not easy to deal with, or make
 *   no sense in the responsive context. JS takes care of their relevant copy.
 *
 * @param array $options
 *   An array of all available options, can be form elements, or basic ones.
 *
 * @return array
 *   An array of cleaned out options for the responsive displays.
 */
function slick_clean_options(array $options) {
  $excludes = drupal_map_assoc(array(
    'mobileFirst',
    'asNavFor',
    'mousewheel',
    'slide',
    'lazyLoad',
    'prevArrow',
    'nextArrow',
    'dotsClass',
    'appendDots',
    'respondTo',
    'rtl',
  ));

  drupal_alter('slick_clean_options_info', $excludes);
  return array_diff_key($options, $excludes);
}

/**
 * Returns overridable options to re-use one optionset, only accepts boolean.
 *
 * @return array
 *   An array of overridable boolean options.
 */
function slick_get_overridable_options() {
  $overridables = array(
    'arrows'    => t('Arrows'),
    'autoplay'  => t('Autoplay'),
    'dots'      => t('Dots'),
    'draggable' => t('Draggable'),
  );

  drupal_alter('slick_overridable_options_info', $overridables);
  return $overridables;
}

/**
 * Gets default layout options for the core Image, or Views.
 *
 * @return array
 *   An array of available basic layouts.
 */
function slick_layouts() {
  $layouts = &drupal_static(__FUNCTION__, NULL);

  if (!isset($layouts)) {
    $layouts = array(
      'bottom'      => t('Caption bottom'),
      'top'         => t('Caption top'),
      'right'       => t('Caption right'),
      'left'        => t('Caption left'),
      'center'      => t('Caption center'),
      'center-top'  => t('Caption center top'),
      'below'       => t('Caption below the slide'),
      'stage-right' => t('Caption left, stage right'),
      'stage-left'  => t('Caption right, stage left'),
      'split-right' => t('Caption left, stage right, split half'),
      'split-left'  => t('Caption right, stage left, split half'),
      'stage-zebra' => t('Stage zebra'),
      'split-zebra' => t('Split half zebra'),
    );
  }

  return $layouts;
}

/**
 * Load all slick optionsets as select options.
 *
 * @return array
 *   An array containing slick optionsets indexed by their names.
 */
function slick_optionset_options() {
  $optionsets = &drupal_static(__FUNCTION__, NULL);

  if (!isset($optionsets)) {
    $optionsets = array();
    $slicks = slick_optionset_load_all();
    foreach ($slicks as $key => $optionset) {
      $optionsets[$key] = check_plain($optionset->label);
    }
    asort($optionsets);
  }

  return $optionsets;
}

/**
 * Checks whether an optionset with the given name already exists.
 *
 * @param string $optionset_name
 *   The Optionset machine name.
 *
 * @return bool
 *   Returns TRUE if exists, FALSE otherwise.
 */
function slick_optionset_exists($optionset_name) {
  ctools_include('export');
  $optionset = ctools_export_crud_load('slick_optionset', $optionset_name);
  return isset($optionset->name);
}

/**
 * Fetches all optionsets from the storage.
 *
 * @param bool $reset
 *   If TRUE, the static cache of all objects will be flushed prior to
 *   loading all. This can be important on listing pages where items
 *   might have changed on the page load.
 *
 * @return array
 *   The associative array of all optionsets.
 */
function slick_optionset_load_all($reset = FALSE) {
  ctools_include('export');
  $optionsets = ctools_export_crud_load_all('slick_optionset', $reset);
  foreach ($optionsets as $optionset) {
    // Ensure the optionset is typecast after being loaded from storage.
    $breakpoints = isset($optionset->breakpoints) ? $optionset->breakpoints : NULL;
    _slick_typecast_optionset($optionset->options, $breakpoints);
  }

  return $optionsets;
}

/**
 * Saves the given option set to the database.
 *
 * Set the $new flag if this set has not been written before.
 *
 * @param object $optionset
 *   The Optionset object.
 * @param bool $new
 *   The Optionset machine name.
 *
 * @return object
 *   Returns the newly saved object, FALSE otherwise.
 */
function slick_optionset_save($optionset, $new = FALSE) {
  // If the machine name is missing or already in use, return an error.
  if (empty($optionset->name) or (FALSE != slick_optionset_exists($optionset->name) and $new)) {
    return FALSE;
  }

  // Check for an invalid list of options.
  if (isset($optionset->options) and !is_array($optionset->options)) {
    return FALSE;
  }

  if (empty($optionset->label)) {
    $optionset->label = $optionset->name;
  }

  // Merge default settings with any given settings.
  $breakpoints = 0;
  if (isset($optionset->breakpoints)) {
    $breakpoints = $optionset->breakpoints;
  }

  $defaults['general']  = array('goodies' => array());
  $defaults['settings'] = slick_get_options();
  $optionset->options   = $optionset->options + $defaults;
  _slick_typecast_optionset($optionset->options, $breakpoints);

  // Prepare the database values.
  $db_values = array(
    'name'        => $optionset->name,
    'label'       => $optionset->label,
    'breakpoints' => $breakpoints,
    'options'     => $optionset->options,
  );

  if ($new) {
    $result = drupal_write_record('slick_optionset', $db_values);
  }
  else {
    $result = drupal_write_record('slick_optionset', $db_values, 'name');
  }

  // Return the object if the values were saved successfully.
  if (($new and SAVED_NEW == $result) or (!$new and SAVED_UPDATED == $result)) {
    return $optionset;
  }

  // Otherwise, an error occured.
  return FALSE;
}

/**
 * Deletes the given option set from the database.
 *
 * @param string|object $optionset
 *   Optionset object, or string machine name.
 */
function slick_optionset_delete($optionset) {
  ctools_include('export');
  $object = is_object($optionset) ? $optionset : slick_optionset_load($optionset);

  // This only deletes from the database, which means that if an item is in
  // code, then this is actually a revert.
  ctools_export_crud_delete('slick_optionset', $object);
}

/**
 * Returns the typecast values, so that JSON object has the right values.
 *
 * @param array $options
 *   An array of Optionset options.
 * @param int $breakpoints
 *   The number of breakpoints if specified.
 */
function _slick_typecast_optionset(&$options = array(), $breakpoints = 0) {
  if (empty($options)) {
    return;
  }

  $slick_options = slick_get_options();
  foreach ($slick_options as $name => $value) {
    if (isset($options['settings'][$name])) {
      $cast = gettype($slick_options[$name]);
      settype($options['settings'][$name], $cast);
    }
  }

  if (isset($options['responsives']['responsive']) && $breakpoints) {
    $slick_responsive_options = slick_get_responsive_options($breakpoints);
    foreach ($slick_responsive_options as $i => $items) {
      foreach ($items as $name => $item) {
        switch ($name) {
          case 'breakpoint':
            settype($options['responsives']['responsive'][$i][$name], 'int');
            break;

          case 'unslick':
            settype($options['responsives']['responsive'][$i][$name], 'bool');
            break;

          case 'settings':
            foreach ($item as $key => $setting) {
              if (isset($options['responsives']['responsive'][$i][$name][$key])) {
                $cast = gettype($item[$key]);
                settype($options['responsives']['responsive'][$i][$name][$key], $cast);
              }
            }
            break;

          default:
            break;
        }
      }
    }
  }

  drupal_alter('slick_typecast_optionset_info', $options, $breakpoints);
}

/**
 * A helper function to return view modes for a form.
 *
 * @param string $entity_type
 *   The entity type to use with entity_get_info($entity_type) or
 *   entity_get_info($field['settings']['target_type']).
 * @param bool $exclude
 *   If TRUE, then exclude some view modes, such as: 'rss', 'search_index',
 *   'search_result', 'print', 'token'.
 *
 * @return array
 *   An array of available view modes, excluding some.
 */
function slick_get_view_modes($entity_type, $exclude = TRUE) {
  $view_mode_options = &drupal_static(__FUNCTION__);

  if (!isset($view_mode_options)) {
    $view_mode_options = array('default' => t('Default'));
    $view_mode_excludes = array(
      'rss',
      'search_index',
      'search_result',
      'print',
      'token',
      'preview',
      'wysiwyg',
    );

    $entity_info = entity_get_info($entity_type);
    if (!empty($entity_info['view modes'])) {
      foreach ($entity_info['view modes'] as $view_mode => $view_mode_settings) {
        if ($exclude && in_array($view_mode, $view_mode_excludes)) {
          continue;
        }
        $view_mode_options[$view_mode] = $view_mode_settings['label'];
      }
    }
  }

  return $view_mode_options;
}

/**
 * Gets a list of fields in the Field collection item.
 */
function slick_get_fc_fields($instance, $field_types) {
  $fc_options = array();
  $fields = field_info_fields();
  $bundle = 'field_collection_item';
  $bundle_instance = $instance['field_name'];

  foreach ($fields as $name => $field) {
    $infos = field_info_instance($bundle, $name, $bundle_instance);
    if ($field_types == '_all') {
      $fc_options[$name] = $infos['label'];
    }
    else {
      if (in_array($bundle, array_keys($field['bundles']))
          && in_array($bundle_instance, $field['bundles'][$bundle])
          && in_array($field['type'], $field_types)) {
        $fc_options[$name] = $infos['label'];
      }
    }
  }

  return $fc_options;
}

/**
 * Gets a list of fields in the Media file field.
 */
function slick_get_media_fields($instance, $widget_types = NULL) {
  $media_options = array();
  $types = drupal_map_assoc(array('audio', 'image', 'video'));

  // Expose all media sub-fields, and merge them as available options.
  foreach ($types as $media_type) {
    $fields = field_info_instances('file', $media_type);
    foreach ($fields as $key => $media_field) {
      $type = $media_field['widget']['type'];
      if ($widget_types && in_array($type, $widget_types)) {
        $media_options[$key] = $media_field['label'];
      }
      else {
        $media_options[$key] = $media_field['label'];
      }
    }
  }

  return $media_options;
}

/**
 * Returns shared starting form elements across Slick field formatter and Views.
 */
function slick_get_top_elements(array &$elements, $settings, &$form_state) {
  $slick_path = drupal_get_path('module', 'slick');
  $optionsets = slick_optionset_options();
  $readme     = url($slick_path . '/README.txt');

  $elements['optionset'] = array(
    '#title'       => t('Optionset main'),
    '#type'        => 'select',
    '#options'     => $optionsets,
    '#description' => t('Manage optionsets at <a href="@link" target="_blank">Slick carousel admin page</a>.', array('@link' => url('admin/config/media/slick'))),
  );

  $elements['skin'] = array(
    '#type'        => 'select',
    '#title'       => t('Skin main'),
    '#options'     => slick_get_skins_by_group('main', TRUE),
    '#description' => t('Skins allow swappable layouts like next/prev links, split image and caption, etc. with just CSS. However a combination of skins and options may lead to unpredictable layouts, get yourself dirty. See <a href="@url" target="_blank">SKINS section at README.txt</a> for details on Skins. Leave empty to DIY, or use hook_slick_skins_info() to register ones.', array('@url' => $readme)),
  );

  $elements['optionset_thumbnail'] = array(
    '#title'       => t('Optionset thumbnail'),
    '#type'        => 'select',
    '#options'     => $optionsets,
    '#description' => t('If provided, asNavFor aka thumbnail navigation applies. Leave empty to not use thumbnail navigation.'),
  );

  $elements['skin_thumbnail'] = array(
    '#type'        => 'select',
    '#title'       => t('Skin thumbnail'),
    '#options'     => slick_get_skins_by_group('thumbnail', TRUE),
    '#description' => t('Thumbnail navigation skin. See main <a href="@url" target="_blank">README</a> for details on Skins. Leave empty to not use thumbnail navigation.', array('@url' => $readme)),
  );

  $elements['skin_arrows'] = array(
    '#type'        => 'select',
    '#title'       => t('Skin arrows'),
    '#options'     => array(),
    '#description' => t('Use hook_slick_skins_info() with group propery arrows to add your own arrows skins.'),
    '#access'      => FALSE,
  );

  if ($arrows = slick_get_skins_by_group('arrows', TRUE)) {
    $elements['skin_arrows']['#options'] = $arrows;
    $elements['skin_arrows']['#access'] = TRUE;
  }

  $elements['skin_dots'] = array(
    '#type'        => 'select',
    '#title'       => t('Skin dots'),
    '#options'     => array(),
    '#description' => t('Use hook_slick_skins_info() with group propery dots to add your own dots skins.'),
    '#access'      => FALSE,
  );

  if ($dots = slick_get_skins_by_group('dots', TRUE)) {
    $elements['skin_dots']['#options'] = $dots;
    $elements['skin_dots']['#access'] = TRUE;
  }

  $weight = -99;
  foreach (element_children($elements) as $key) {
    if (!isset($elements[$key]['#weight'])) {
      $elements[$key]['#weight'] = ++$weight;
    }
  }

  drupal_alter('slick_top_elements_info', $elements, $settings, $form_state);
  return $elements;
}

/**
 * Returns shared ending form elements across Slick field formatter and Views.
 */
function slick_get_elements(array &$elements, $settings, &$form_state) {
  $a = array(300, 600, 900, 1800, 2700, 3600, 10800, 21600, 32400, 43200, 86400);
  $period = drupal_map_assoc($a, 'format_interval');
  $elements['cache'] = array(
    '#type'        => 'select',
    '#title'       => t('Cache'),
    '#options'     => $period + array('persistent' => t('Persistent')),
    '#weight'      => 97,
    '#description' => t('Ditch all slick logic to cached bare HTML. <ol><li><strong>Persistent</strong>: cached contents will persist (be displayed) till the next cron runs.</li><li><strong>Any number</strong>: expired by the selected expiration time, and fresh contents are fetched till the next cache rebuilt.</li></ol>A working cron job is required to clear stale cache. At any rate, cached contents will be refreshed regardless of the expiration time after the cron hits.<br /><strong>Warning!</strong> Be sure no useless/ sensitive data such as Edit links as they are rendered as is regardless permissions. No permissions are changed, just ugly. Note: Slick is already faster, lighter and less memory than <a href="@similar" target="_blank">similar</a> <a href="@url" target="_blank">solutions</a> for anonymous users with just Drupal cache. This is more useful for authenticated traffic, best with Authcache. Only enable it when all is done, otherwise cached options will be displayed while changing them. Leave empty to disable caching, or if traffics are mostly anonymous.', array('@similar' => 'https://www.drupal.org/node/2313461#comment-10817842', '@url' => 'https://www.drupal.org/node/2463305#comment-10850288')),
  );

  // Re-uses one optionset for various displays.
  $elements['override'] = array(
    '#title'       => t('Override main optionset'),
    '#type'        => 'checkbox',
    '#description' => t('If checked, the following options will override the main optionset. Useful to re-use one optionset for several different displays.'),
    '#weight'      => 98,
  );

  $overridable_options = slick_get_overridable_options();
  $overridable_values = is_array($settings['overridables']) ? array_values($settings['overridables']) : $settings['overridables'];
  $elements['overridables'] = array(
    '#type'          => 'checkboxes',
    '#title'         => t('Overridable options'),
    '#description'   => t("Override the main optionset to re-use one. Anything dictated here will override the current main optionset. Unchecked means FALSE"),
    '#options'       => $overridable_options,
    '#default_value' => $overridable_values,
    '#weight'      => 99,
    '#states' => array(
      'visible' => array(
        ':input[name$="[override]"]' => array('checked' => TRUE),
      ),
    ),
  );

  drupal_alter('slick_elements_info', $elements, $settings, $form_state);
  return $elements;
}

/**
 * Returns reusable grid elements across Slick field formatter and Views.
 */
function slick_get_grid_elements(array &$elements, $settings, &$form_state) {
  $grid_options = drupal_map_assoc(range(1, 12));
  $elements['grid'] = array(
    '#type'        => 'select',
    '#title'       => t('Grid large'),
    '#options'     => $grid_options,
    '#description' => t('The amount of block grid columns for large monitors 64.063em - 90em. <br /><strong>Requires</strong>:<ol><li>Visible slides,</li><li>Skin Grid for starter,</li><li>A reasonable amount of contents,</li><li>Optionset with Rows and slidesPerRow = 1.</li></ol>This is module feature, older than core Rows, and offers more flexibility. Leave empty to DIY, or to not build grids.'),
    '#prefix'      => '<h3 class="form--slick__title">' . t('Group individual slide as block grid?<small>An older alternative to core <strong>Rows</strong> option. Only works if the total items &gt; <strong>Visible slides</strong>. <br />block grid != slidesToShow option, yet both can work in tandem.<br />block grid = Rows option, yet the first is module feature, the later core.</small>') . '</h3>',
  );

  $elements['grid_medium'] = array(
    '#type'        => 'select',
    '#title'       => t('Grid medium'),
    '#options'     => $grid_options,
    '#description' => t('The amount of block grid columns for medium devices 40.063em - 64em.'),
  );

  $elements['grid_small'] = array(
    '#type'        => 'select',
    '#title'       => t('Grid small'),
    '#options'     => $grid_options,
    '#description' => t('The amount of block grid columns for small devices 0 - 40em.'),
  );

  $elements['visible_slides'] = array(
    '#type'        => 'select',
    '#title'       => t('Visible slides'),
    '#options'     => drupal_map_assoc(range(1, 32)),
    '#description' => t('How many items per slide displayed at a time. Required if Grid provided. Grid will not work if Views rows count &lt; <strong>Visible slides</strong>.'),
  );

  $elements['preserve_keys'] = array(
    '#title'       => t('Preserve keys'),
    '#type'        => 'checkbox',
    '#description' => t('If checked, keys will be preserved. Default is FALSE which will reindex the grid chunk numerically.'),
  );

  drupal_alter('slick_grid_elements_info', $elements, $settings, $form_state);
  return $elements;
}

/**
 * Returns reusable logic, styling and assets across Slick fields and Views.
 */
function slick_get_admin_assets(array &$elements, $settings = array()) {
  $excludes = array('container', 'fieldset', 'item', 'hidden');
  $admin_css = variable_get('slick_admin_css', TRUE);
  foreach (element_children($elements) as $key) {
    if (isset($elements[$key]['#type']) && !in_array($elements[$key]['#type'], $excludes)) {
      if (!isset($elements[$key]['#default_value']) && isset($settings[$key])) {
        $elements[$key]['#default_value'] = $settings[$key];
      }
      if (!isset($elements[$key]['#attributes']) && isset($elements[$key]['#description'])) {
        $elements[$key]['#attributes'] = array('class' => array('is-tooltip'));
      }
      if ($admin_css) {
        if ($elements[$key]['#type'] == 'checkbox' && $elements[$key]['#type'] != 'checkboxes') {
          $elements[$key]['#field_suffix'] = '';
          $elements[$key]['#title_display'] = 'before';
        }
        elseif ($elements[$key]['#type'] == 'checkboxes' && !empty($elements[$key]['#options'])) {
          foreach ($elements[$key]['#options'] as $i => $option) {
            $elements[$key][$i]['#field_suffix'] = '';
            $elements[$key][$i]['#title_display'] = 'before';
          }
        }
      }
      if ($elements[$key]['#type'] == 'select' && $key != 'optionset') {
        if (!isset($elements[$key]['#empty_option']) && !isset($elements[$key]['#required'])) {
          $elements[$key]['#empty_option'] = t('- None -');
        }
      }
    }
  }

  if ($admin_css) {
    if (module_exists('slick_ui')) {
      $elements['#attached']['library'][] = array('slick_ui', 'slick.ui');
    }
    else {
      $slick_path = drupal_get_path('module', 'slick');
      $elements['#attached']['css'] = array(
        $slick_path . '/css/admin/slick.admin--ui.css' => array('group' => CSS_THEME + 1),
        $slick_path . '/css/admin/slick.admin--ui--field.css' => array('group' => CSS_THEME + 1),
      );
      $elements['#attached']['js'][]  = $slick_path . '/js/slick.admin.ui.min.js';
    }
  }

  drupal_alter('slick_admin_assets_info', $elements, $settings);
  return $elements;
}

/**
 * Returns reusable summaries across Slick field formatters.
 */
function slick_get_admin_summary($field, $instance, $view_mode, $module) {
  $display  = $instance['display'][$view_mode];
  $settings = $display['settings'];
  $summary  = $form = $form_state = array();
  $function = $module . '_field_formatter_settings_form';
  $elements = $function($field, $instance, $view_mode, $form, $form_state);

  foreach ($settings as $key => $setting) {
    $title = isset($elements[$key]['#title']) ? $elements[$key]['#title'] : '';
    if (is_array($setting) || empty($title)) {
      continue;
    }

    if (is_numeric($setting) || is_bool($setting)) {
      $setting = empty($setting) ? t('No') : t('Yes');
    }
    elseif (empty($setting)) {
      continue;
    }
    if (isset($settings[$key])) {
      $summary[] = t('@title: <strong>@setting</strong>', array(
        '@title' => $title,
        '@setting' => $setting,
      ));
    }
  }
  return $summary;
}
