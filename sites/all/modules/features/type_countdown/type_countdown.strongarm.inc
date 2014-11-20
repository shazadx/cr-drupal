<?php
/**
 * @file
 * type_countdown.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function type_countdown_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__countdown';
  $strongarm->value = array(
    'view_modes' => array(
      'countdown' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__countdown'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_countdown';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_countdown'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_countdown';
  $strongarm->value = '1';
  $export['node_preview_countdown'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_countdown';
  $strongarm->value = 0;
  $export['node_submitted_countdown'] = $strongarm;

  return $export;
}
