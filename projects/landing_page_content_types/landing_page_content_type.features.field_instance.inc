<?php
/**
 * @file
 * landing_page_content_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function landing_page_content_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-landing_page-field_content'
  $field_instances['node-landing_page-field_content'] = array(
    'bundle' => 'landing_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_content',
    'label' => 'Content',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'cols_three' => 'cols_three',
        'cols_two' => 'cols_two',
        'full_page_slider' => 'full_page_slider',
        'full_width_content' => 'full_width_content',
      ),
      'bundle_weights' => array(
        'cols_three' => -10,
        'cols_two' => -10,
        'full_page_slider' => 2,
        'full_width_content' => 9,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');

  return $field_instances;
}
