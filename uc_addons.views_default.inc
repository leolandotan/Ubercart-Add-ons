<?php

/**
 * Implements hook_views_default_views().
 */
function uc_addons_views_default_views() {
  $path = './' . drupal_get_path('module', 'uc_addons') . '/views/uc_addons.views*.inc';
  $views = array();
  foreach(glob($path) as $views_filename) {
    require_once($views_filename);
  }
  return  $views;
}
