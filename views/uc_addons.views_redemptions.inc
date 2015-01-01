<?php

$view = new view();
$view->name = 'redemptions';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'uc_orders';
$view->human_name = 'Redemptions';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Redemptions';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'view own orders';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'order_id' => 'order_id',
  'order_product_id' => 'order_product_id',
  'title' => 'title',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'order_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'order_product_id' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: Order: Products */
$handler->display->display_options['relationships']['products']['id'] = 'products';
$handler->display->display_options['relationships']['products']['table'] = 'uc_orders';
$handler->display->display_options['relationships']['products']['field'] = 'products';
/* Field: Order: Order ID */
$handler->display->display_options['fields']['order_id']['id'] = 'order_id';
$handler->display->display_options['fields']['order_id']['table'] = 'uc_orders';
$handler->display->display_options['fields']['order_id']['field'] = 'order_id';
/* Field: Ordered product: Order product ID */
$handler->display->display_options['fields']['order_product_id']['id'] = 'order_product_id';
$handler->display->display_options['fields']['order_product_id']['table'] = 'uc_order_products';
$handler->display->display_options['fields']['order_product_id']['field'] = 'order_product_id';
$handler->display->display_options['fields']['order_product_id']['relationship'] = 'products';
$handler->display->display_options['fields']['order_product_id']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['order_product_id']['alter']['path'] = 'ordered-products/[order_product_id]';
/* Field: Ordered product: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'uc_order_products';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'products';
/* Field: Ordered product: Quantity */
$handler->display->display_options['fields']['qty']['id'] = 'qty';
$handler->display->display_options['fields']['qty']['table'] = 'uc_order_products';
$handler->display->display_options['fields']['qty']['field'] = 'qty';
$handler->display->display_options['fields']['qty']['relationship'] = 'products';
/* Field: Ordered product: Price */
$handler->display->display_options['fields']['price']['id'] = 'price';
$handler->display->display_options['fields']['price']['table'] = 'uc_order_products';
$handler->display->display_options['fields']['price']['field'] = 'price';
$handler->display->display_options['fields']['price']['relationship'] = 'products';
/* Field: Ordered product: Total price */
$handler->display->display_options['fields']['total_price']['id'] = 'total_price';
$handler->display->display_options['fields']['total_price']['table'] = 'uc_order_products';
$handler->display->display_options['fields']['total_price']['field'] = 'total_price';
$handler->display->display_options['fields']['total_price']['relationship'] = 'products';
$handler->display->display_options['fields']['total_price']['precision'] = '0';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'redemptions';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Redemptions';
$handler->display->display_options['menu']['weight'] = '1';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

$views[$view->name] = $view;
