<?php
/**
 * @file
 * type_countdown.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function type_countdown_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inline|node|countdown|form';
  $field_group->group_name = 'group_inline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'countdown';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inline Fields',
    'weight' => '0',
    'children' => array(
      0 => 'field_countdown_granularity',
      1 => 'title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Inline Fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'form-inline-field',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_inline|node|countdown|form'] = $field_group;

  return $export;
}
