<?php
/**
 * @file
 * ck_paragraph_pack.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ck_paragraph_pack_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ck_paragraph_pack_image_default_styles() {
  $styles = array();

  // Exported image style: full_width_image.
  $styles['full_width_image'] = array(
    'label' => 'Full Width Image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 575,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: responsive_custom_user_large_1x.
  $styles['responsive_custom_user_large_1x'] = array(
    'label' => 'responsive_custom_user_large_1x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 575,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: responsive_custom_user_medium_1x.
  $styles['responsive_custom_user_medium_1x'] = array(
    'label' => 'responsive_custom_user_medium_1x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1440,
          'height' => 517,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: responsive_custom_user_small_1x.
  $styles['responsive_custom_user_small_1x'] = array(
    'label' => 'responsive_custom_user_small_1x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1024,
          'height' => 367,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: responsive_custom_user_smallest_1x.
  $styles['responsive_custom_user_smallest_1x'] = array(
    'label' => 'responsive_custom_user_smallest_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 230,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_paragraphs_info().
 */
function ck_paragraph_pack_paragraphs_info() {
  $items = array(
    'cards_with_hover' => array(
      'name' => 'Cards With Hover',
      'bundle' => 'cards_with_hover',
      'locked' => '1',
    ),
    'cols_three' => array(
      'name' => 'Three Columns',
      'bundle' => 'cols_three',
      'locked' => '1',
    ),
    'cols_two' => array(
      'name' => 'Two Columns',
      'bundle' => 'cols_two',
      'locked' => '1',
    ),
    'full_page_slider' => array(
      'name' => 'Full Page Slider',
      'bundle' => 'full_page_slider',
      'locked' => '1',
    ),
    'full_width_content' => array(
      'name' => 'Full Width Content',
      'bundle' => 'full_width_content',
      'locked' => '1',
    ),
    'full_width_dynamic' => array(
      'name' => 'Full Width Dynamic',
      'bundle' => 'full_width_dynamic',
      'locked' => '1',
    ),
    'full_width_existing' => array(
      'name' => 'Full Width Existing',
      'bundle' => 'full_width_existing',
      'locked' => '1',
    ),
    'full_width_image' => array(
      'name' => 'Full Width Image',
      'bundle' => 'full_width_image',
      'locked' => '1',
    ),
    'full_width_new_content' => array(
      'name' => 'Full Width New Content',
      'bundle' => 'full_width_new_content',
      'locked' => '1',
    ),
  );
  return $items;
}
