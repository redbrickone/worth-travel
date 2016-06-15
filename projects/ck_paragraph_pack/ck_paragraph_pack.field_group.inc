<?php
/**
 * @file
 * ck_paragraph_pack.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ck_paragraph_pack_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_columns|paragraphs_item|cols_three|form';
  $field_group->group_name = 'group_columns';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'cols_three';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Column Groups',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'group_left_column',
      2 => 'group_middle_column',
      3 => 'group_right_column',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-columns field-group-htabs',
      ),
    ),
  );
  $field_groups['group_columns|paragraphs_item|cols_three|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_columns|paragraphs_item|cols_two|form';
  $field_group->group_name = 'group_columns';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'cols_two';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Column Groups',
    'weight' => '0',
    'children' => array(
      0 => 'field_additional_styling',
      1 => 'field_image',
      2 => 'group_left_column',
      3 => 'group_right_column',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-columns field-group-htabs',
      ),
    ),
  );
  $field_groups['group_columns|paragraphs_item|cols_two|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_column_fieldset|paragraphs_item|cols_two|form';
  $field_group->group_name = 'group_left_column_fieldset';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'cols_two';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_left_column';
  $field_group->data = array(
    'label' => 'Left Column',
    'weight' => '4',
    'children' => array(
      0 => 'field_new_content',
      1 => 'field_dynamic_content',
      2 => 'field_existing_content',
      3 => 'field_existing_content_or_new_',
      4 => 'field_existing_content_layout',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Left Column',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-left-column-fieldset field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_left_column_fieldset|paragraphs_item|cols_two|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_column|paragraphs_item|cols_three|form';
  $field_group->group_name = 'group_left_column';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'cols_three';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_columns';
  $field_group->data = array(
    'label' => 'Left Column',
    'weight' => '7',
    'children' => array(
      0 => 'field_existing_content',
      1 => 'field_existing_content_layout',
      2 => 'field_existing_content_or_new_',
      3 => 'field_new_content',
      4 => 'field_dynamic_content',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-left-column field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_left_column|paragraphs_item|cols_three|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_column|paragraphs_item|cols_two|form';
  $field_group->group_name = 'group_left_column';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'cols_two';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_columns';
  $field_group->data = array(
    'label' => 'Left Column',
    'weight' => '3',
    'children' => array(
      0 => 'group_left_column_fieldset',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-left-column field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_left_column|paragraphs_item|cols_two|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_middle_column|paragraphs_item|cols_three|form';
  $field_group->group_name = 'group_middle_column';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'cols_three';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_columns';
  $field_group->data = array(
    'label' => 'Middle Column',
    'weight' => '8',
    'children' => array(
      0 => 'field_exist_new_middle',
      1 => 'field_existing_content_mid',
      2 => 'field_existing_layout_mid',
      3 => 'field_new_content_mid',
      4 => 'field_dynamic_content_mid',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-middle-column field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_middle_column|paragraphs_item|cols_three|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column_fieldset|paragraphs_item|cols_two|form';
  $field_group->group_name = 'group_right_column_fieldset';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'cols_two';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_right_column';
  $field_group->data = array(
    'label' => 'Right Column',
    'weight' => '19',
    'children' => array(
      0 => 'field_new_content_right',
      1 => 'field_existing_content_right',
      2 => 'field_dynamic_content_right',
      3 => 'field_exist_new_right',
      4 => 'field_existing_layout_right',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Right Column',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-right-column-fieldset field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_right_column_fieldset|paragraphs_item|cols_two|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column|paragraphs_item|cols_three|form';
  $field_group->group_name = 'group_right_column';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'cols_three';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_columns';
  $field_group->data = array(
    'label' => 'Right Column',
    'weight' => '9',
    'children' => array(
      0 => 'field_exist_new_right',
      1 => 'field_existing_content_right',
      2 => 'field_existing_layout_right',
      3 => 'field_new_content_right',
      4 => 'field_dynamic_content_right',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-right-column field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_right_column|paragraphs_item|cols_three|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column|paragraphs_item|cols_two|form';
  $field_group->group_name = 'group_right_column';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'cols_two';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_columns';
  $field_group->data = array(
    'label' => 'Right Column',
    'weight' => '5',
    'children' => array(
      0 => 'group_right_column_fieldset',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-right-column field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_right_column|paragraphs_item|cols_two|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slide_wrapper|field_collection_item|field_slide|default';
  $field_group->group_name = 'group_slide_wrapper';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_slide';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slide Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'field_slider_image',
      1 => 'field_heading_1',
      2 => 'field_heading_2',
      3 => 'field_button',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Slide Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-slide-wrapper field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_slide_wrapper|field_collection_item|field_slide|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Column Groups');
  t('Left Column');
  t('Middle Column');
  t('Right Column');
  t('Slide Wrapper');

  return $field_groups;
}
