<?php

$view = new view();
$view->name = 'ordered_products';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'uc_order_products';
$view->human_name = 'Ordered products';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Ordered products';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'view own orders';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['style_plugin'] = 'table';
/* Field: Ordered product: Order product ID */
$handler->display->display_options['fields']['order_product_id']['id'] = 'order_product_id';
$handler->display->display_options['fields']['order_product_id']['table'] = 'uc_order_products';
$handler->display->display_options['fields']['order_product_id']['field'] = 'order_product_id';
/* Field: Ordered product: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'uc_order_products';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: Ordered product: Quantity */
$handler->display->display_options['fields']['qty']['id'] = 'qty';
$handler->display->display_options['fields']['qty']['table'] = 'uc_order_products';
$handler->display->display_options['fields']['qty']['field'] = 'qty';
/* Field: Ordered product: Price */
$handler->display->display_options['fields']['price']['id'] = 'price';
$handler->display->display_options['fields']['price']['table'] = 'uc_order_products';
$handler->display->display_options['fields']['price']['field'] = 'price';
$handler->display->display_options['fields']['price']['precision'] = '0';
/* Field: Ordered product: Total price */
$handler->display->display_options['fields']['total_price']['id'] = 'total_price';
$handler->display->display_options['fields']['total_price']['table'] = 'uc_order_products';
$handler->display->display_options['fields']['total_price']['field'] = 'total_price';
$handler->display->display_options['fields']['total_price']['precision'] = '0';
/* Contextual filter: Ordered product: Order product ID */
$handler->display->display_options['arguments']['order_product_id']['id'] = 'order_product_id';
$handler->display->display_options['arguments']['order_product_id']['table'] = 'uc_order_products';
$handler->display->display_options['arguments']['order_product_id']['field'] = 'order_product_id';
$handler->display->display_options['arguments']['order_product_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['order_product_id']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['order_product_id']['default_argument_options']['index'] = '0';
$handler->display->display_options['arguments']['order_product_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['order_product_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['order_product_id']['summary_options']['items_per_page'] = '25';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'ordered-products';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Ordered products';
$handler->display->display_options['menu']['name'] = 'main-menu';

$views[$view->name] = $view;
