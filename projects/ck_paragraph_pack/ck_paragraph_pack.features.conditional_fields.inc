<?php
/**
 * @file
 * ck_paragraph_pack.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function ck_paragraph_pack_conditional_fields_default_fields() {
  $items = array();

//  $items["paragraphs_item:cols_three:0"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_three',
//    'dependent' => 'field_dynamic_content',
//    'dependee' => 'field_existing_content_or_new_',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 2,
//      'value' => array(
//        0 => array(
//          'value' => 2,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:cols_three:1"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_three',
//    'dependent' => 'field_dynamic_content_mid',
//    'dependee' => 'field_exist_new_middle',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 2,
//      'value' => array(
//        0 => array(
//          'value' => 2,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:cols_three:2"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_three',
//    'dependent' => 'field_dynamic_content_right',
//    'dependee' => 'field_exist_new_right',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 2,
//      'value' => array(
//        0 => array(
//          'value' => 2,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:cols_three:3"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_three',
//    'dependent' => 'field_existing_content',
//    'dependee' => 'field_existing_content_or_new_',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 0,
//      'value' => array(
//        0 => array(
//          'value' => 0,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:cols_three:4"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_three',
//    'dependent' => 'field_existing_content_layout',
//    'dependee' => 'field_existing_content_or_new_',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 0,
//      'value' => array(
//        0 => array(
//          'value' => 0,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:cols_three:5"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_three',
//    'dependent' => 'field_existing_content_mid',
//    'dependee' => 'field_exist_new_middle',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 0,
//      'value' => array(
//        0 => array(
//          'value' => 0,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:cols_three:6"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_three',
//    'dependent' => 'field_existing_content_right',
//    'dependee' => 'field_exist_new_right',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 0,
//      'value' => array(
//        0 => array(
//          'value' => 0,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:cols_three:7"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_three',
//    'dependent' => 'field_existing_layout_mid',
//    'dependee' => 'field_exist_new_middle',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 0,
//      'value' => array(
//        0 => array(
//          'value' => 0,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:cols_three:8"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_three',
//    'dependent' => 'field_existing_layout_right',
//    'dependee' => 'field_exist_new_right',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 0,
//      'value' => array(
//        0 => array(
//          'value' => 0,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:cols_three:9"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_three',
//    'dependent' => 'field_new_content',
//    'dependee' => 'field_existing_content_or_new_',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 1,
//      'value' => array(
//        0 => array(
//          'value' => 1,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:cols_three:10"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_three',
//    'dependent' => 'field_new_content_mid',
//    'dependee' => 'field_exist_new_middle',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 1,
//      'value' => array(
//        0 => array(
//          'value' => 1,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:cols_three:11"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_three',
//    'dependent' => 'field_new_content_right',
//    'dependee' => 'field_exist_new_right',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 1,
//      'value' => array(
//        0 => array(
//          'value' => 1,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:cols_two:0"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_two',
//    'dependent' => 'field_dynamic_content',
//    'dependee' => 'field_existing_content_or_new_',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 2,
//      'value' => array(
//        0 => array(
//          'value' => 2,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:cols_two:1"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_two',
//    'dependent' => 'field_dynamic_content_right',
//    'dependee' => 'field_exist_new_right',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 2,
//      'value' => array(
//        0 => array(
//          'value' => 2,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:cols_two:2"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_two',
//    'dependent' => 'field_existing_content',
//    'dependee' => 'field_existing_content_or_new_',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 0,
//      'value' => array(
//        0 => array(
//          'value' => 0,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:cols_two:3"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_two',
//    'dependent' => 'field_existing_content_layout',
//    'dependee' => 'field_existing_content_or_new_',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 0,
//      'value' => array(
//        0 => array(
//          'value' => 0,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:cols_two:4"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_two',
//    'dependent' => 'field_existing_content_right',
//    'dependee' => 'field_exist_new_right',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 0,
//      'value' => array(
//        0 => array(
//          'value' => 0,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:cols_two:5"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_two',
//    'dependent' => 'field_existing_layout_right',
//    'dependee' => 'field_exist_new_right',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 0,
//      'value' => array(
//        0 => array(
//          'value' => 0,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:cols_two:6"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_two',
//    'dependent' => 'field_new_content',
//    'dependee' => 'field_existing_content_or_new_',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 1,
//      'value' => array(
//        0 => array(
//          'value' => 1,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:cols_two:7"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'cols_two',
//    'dependent' => 'field_new_content_right',
//    'dependee' => 'field_exist_new_right',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 1,
//      'value' => array(
//        0 => array(
//          'value' => 1,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:full_width_content:0"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'full_width_content',
//    'dependent' => 'field_dynamic_content',
//    'dependee' => 'field_existing_content_or_new_',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 2,
//      'value' => array(
//        0 => array(
//          'value' => 2,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:full_width_content:1"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'full_width_content',
//    'dependent' => 'field_existing_content',
//    'dependee' => 'field_existing_content_or_new_',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 0,
//      'value' => array(
//        0 => array(
//          'value' => 0,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:full_width_content:2"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'full_width_content',
//    'dependent' => 'field_existing_content_layout',
//    'dependee' => 'field_existing_content_or_new_',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 0,
//      'value' => array(
//        0 => array(
//          'value' => 0,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );
//
//  $items["paragraphs_item:full_width_content:3"] = array(
//    'entity' => 'paragraphs_item',
//    'bundle' => 'full_width_content',
//    'dependent' => 'field_new_content',
//    'dependee' => 'field_existing_content_or_new_',
//    'options' => array(
//      'state' => 'visible',
//      'condition' => 'value',
//      'grouping' => 'AND',
//      'effect' => 'show',
//      'effect_options' => array(),
//      'element_view' => array(
//        1 => 1,
//        2 => 2,
//        5 => 0,
//        3 => 0,
//        4 => 0,
//      ),
//      'element_view_per_role' => 0,
//      'element_view_roles' => array(
//        1 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          2 => 2,
//          5 => 0,
//          3 => 0,
//          4 => 0,
//        ),
//      ),
//      'element_edit' => array(
//        1 => 1,
//        3 => 0,
//      ),
//      'element_edit_per_role' => 0,
//      'element_edit_roles' => array(
//        1 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        2 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        4 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        3 => array(
//          1 => 1,
//          3 => 0,
//        ),
//        5 => array(
//          1 => 1,
//          3 => 0,
//        ),
//      ),
//      'selector' => '',
//      'values_set' => 1,
//      'value_form' => 1,
//      'value' => array(
//        0 => array(
//          'value' => 1,
//        ),
//      ),
//      'values' => array(),
//    ),
//  );

  return $items;
}
