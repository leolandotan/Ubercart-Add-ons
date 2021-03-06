<?php

$view = new view();
$view->name = 'order_userpoints_transaction';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'uc_orders';
$view->human_name = 'Order userpoints transaction';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Order userpoints transaction';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'view own orders';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['style_plugin'] = 'table';
/* Relationship: Order: Products */
$handler->display->display_options['relationships']['products']['id'] = 'products';
$handler->display->display_options['relationships']['products']['table'] = 'uc_orders';
$handler->display->display_options['relationships']['products']['field'] = 'products';
/* Field: Order: Order ID */
$handler->display->display_options['fields']['order_id']['id'] = 'order_id';
$handler->display->display_options['fields']['order_id']['table'] = 'uc_orders';
$handler->display->display_options['fields']['order_id']['field'] = 'order_id';
/* Field: Userpoints Transactions: Entity ID */
$handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
$handler->display->display_options['fields']['entity_id']['table'] = 'userpoints_txn';
$handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
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
/* Field: Userpoints Transactions: Description */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'userpoints_txn';
$handler->display->display_options['fields']['description']['field'] = 'description';
/* Field: Userpoints Transactions: Points */
$handler->display->display_options['fields']['points']['id'] = 'points';
$handler->display->display_options['fields']['points']['table'] = 'userpoints_txn';
$handler->display->display_options['fields']['points']['field'] = 'points';
/* Field: Userpoints Transactions: Entity type */
$handler->display->display_options['fields']['entity_type']['id'] = 'entity_type';
$handler->display->display_options['fields']['entity_type']['table'] = 'userpoints_txn';
$handler->display->display_options['fields']['entity_type']['field'] = 'entity_type';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'order-userpoints-transaction';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Order userpoints transaction';
$handler->display->display_options['menu']['name'] = 'main-menu';

$views[$view->name] = $view;
