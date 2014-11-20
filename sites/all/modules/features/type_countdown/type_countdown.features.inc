<?php
/**
 * @file
 * type_countdown.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function type_countdown_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function type_countdown_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function type_countdown_node_info() {
  $items = array(
    'countdown' => array(
      'name' => t('Countdown'),
      'base' => 'node_content',
      'description' => t('Display content base on a set time'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
