<?php
/**
 * @file
 * type_countdown.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function type_countdown_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'countdown';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Countdown';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Countdown Timers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p><a href="/node/add/countdown">+ Add a Countdown Timer</a></p>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: End Time */
  $handler->display->display_options['fields']['field_countdown_endtime']['id'] = 'field_countdown_endtime';
  $handler->display->display_options['fields']['field_countdown_endtime']['table'] = 'field_data_field_countdown_endtime';
  $handler->display->display_options['fields']['field_countdown_endtime']['field'] = 'field_countdown_endtime';
  $handler->display->display_options['fields']['field_countdown_endtime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_countdown_endtime']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Granularity */
  $handler->display->display_options['fields']['field_countdown_granularity']['id'] = 'field_countdown_granularity';
  $handler->display->display_options['fields']['field_countdown_granularity']['table'] = 'field_data_field_countdown_granularity';
  $handler->display->display_options['fields']['field_countdown_granularity']['field'] = 'field_countdown_granularity';
  $handler->display->display_options['fields']['field_countdown_granularity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_countdown_granularity']['empty'] = 'Default';
  /* Field: Content: Message */
  $handler->display->display_options['fields']['field_countdown_message']['id'] = 'field_countdown_message';
  $handler->display->display_options['fields']['field_countdown_message']['table'] = 'field_data_field_countdown_message';
  $handler->display->display_options['fields']['field_countdown_message']['field'] = 'field_countdown_message';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'countdown' => 'countdown',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/countdown';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Countdown Timers';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['countdown'] = $view;

  $view = new view();
  $view->name = 'countdown_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Countdown Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Countdown Block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'countdown';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Message */
  $handler->display->display_options['fields']['field_countdown_message']['id'] = 'field_countdown_message';
  $handler->display->display_options['fields']['field_countdown_message']['table'] = 'field_data_field_countdown_message';
  $handler->display->display_options['fields']['field_countdown_message']['field'] = 'field_countdown_message';
  $handler->display->display_options['fields']['field_countdown_message']['label'] = '';
  $handler->display->display_options['fields']['field_countdown_message']['element_label_colon'] = FALSE;
  /* Field: Content: End Time */
  $handler->display->display_options['fields']['field_countdown_endtime']['id'] = 'field_countdown_endtime';
  $handler->display->display_options['fields']['field_countdown_endtime']['table'] = 'field_data_field_countdown_endtime';
  $handler->display->display_options['fields']['field_countdown_endtime']['field'] = 'field_countdown_endtime';
  $handler->display->display_options['fields']['field_countdown_endtime']['label'] = '';
  $handler->display->display_options['fields']['field_countdown_endtime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_countdown_endtime']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_countdown_endtime']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'raw time hence',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Node reference (field_countdown_reference) */
  $handler->display->display_options['arguments']['field_countdown_reference_target_id']['id'] = 'field_countdown_reference_target_id';
  $handler->display->display_options['arguments']['field_countdown_reference_target_id']['table'] = 'field_data_field_countdown_reference';
  $handler->display->display_options['arguments']['field_countdown_reference_target_id']['field'] = 'field_countdown_reference_target_id';
  $handler->display->display_options['arguments']['field_countdown_reference_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_countdown_reference_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_countdown_reference_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_countdown_reference_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_countdown_reference_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['countdown_block'] = $view;

  return $export;
}
