<?php

$view = new view();
$view->name = 'point_transactions';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'userpoints_txn';
$view->human_name = 'Point transactions';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Point transactions';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['style_plugin'] = 'table';
/* Relationship: Userpoints Transactions: User */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'userpoints_txn';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
/* Relationship: Order: Products */
$handler->display->display_options['relationships']['products']['id'] = 'products';
$handler->display->display_options['relationships']['products']['table'] = 'uc_orders';
$handler->display->display_options['relationships']['products']['field'] = 'products';
/* Field: Userpoints Transactions: Points */
$handler->display->display_options['fields']['points']['id'] = 'points';
$handler->display->display_options['fields']['points']['table'] = 'userpoints_txn';
$handler->display->display_options['fields']['points']['field'] = 'points';
/* Field: Userpoints Transactions: Description */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'userpoints_txn';
$handler->display->display_options['fields']['description']['field'] = 'description';
/* Field: Order: Order ID */
$handler->display->display_options['fields']['order_id']['id'] = 'order_id';
$handler->display->display_options['fields']['order_id']['table'] = 'uc_orders';
$handler->display->display_options['fields']['order_id']['field'] = 'order_id';
$handler->display->display_options['fields']['order_id']['link_to_order'] = 0;
/* Field: Ordered product: Order product ID */
$handler->display->display_options['fields']['order_product_id']['id'] = 'order_product_id';
$handler->display->display_options['fields']['order_product_id']['table'] = 'uc_order_products';
$handler->display->display_options['fields']['order_product_id']['field'] = 'order_product_id';
$handler->display->display_options['fields']['order_product_id']['relationship'] = 'products';
/* Field: Ordered product: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'uc_order_products';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'products';
/* Contextual filter: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'point-transactions';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Point transactions';
$handler->display->display_options['menu']['name'] = 'main-menu';

$views[$view->name] = $view;
