<?php

/**
 * Implements hook_views_data_alter().
 */
function uc_addons_views_data_alter(&$data) {
  /**
   * Fixes a bug during Order and Ordered Product Relationship is used.
   * Error causes Ordered Product ID to be 0.
   */ 
  $data['uc_order_products']['order_product_id']['field'] = array(
    'handler' => 'views_handler_field_numeric',
  );

  // Group of code adds Contextual Filter, Sort and Filter functionality
  $data['uc_order_products']['order_product_id']['sort'] = array(
    'handler' => 'views_handler_sort',
  );
  $data['uc_order_products']['order_product_id']['filter'] = array(
    'handler' => 'views_handler_filter_numeric',
  );
  $data['uc_order_products']['order_product_id']['argument'] = array(
    'handler' => 'views_handler_argument_numeric',
    'name field' => 'title',
    'numeric' => TRUE,
    'validate type' => 'order_product_id',
  );

  /**
   * Adds the userpoints_txn table relationship by default when
   * uc_order is the base table.
   * 
   * Useful for an "order userpoints transaction" table to display all the 
   * user's orders and it's related userpoint transactions.
   */ 
  $data['userpoints_txn']['table']['join']['uc_orders'] = array(  
    'left_field' => 'order_id',
    'field' => 'entity_id',
  );

  /**
   * Adds the uc_order table relationship by default when
   * userpoints_txn is the base table.
   *
   * Useful for a "points transaction" table to display all the user's 
   * transactions and its related orders.
   */ 
  $data['uc_orders']['table']['join']['userpoints_txn'] = array(  
    'left_field' => 'entity_id',
    'field' => 'order_id',
  );
}
