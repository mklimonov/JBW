<?php
/**
 * @file
 * jbw2_block_find_us_on_fb.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function jbw2_block_find_us_on_fb_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'block-find_us_fb' => array(
      'machine_name' => 'find_us_fb',
      'module' => 'block',
    ),
  );

  // bartik
  $theme = array();

  $theme['block-find_us_fb'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'find_us_fb',
  );

  $export['theme']['bartik'] = $theme;

  // JBW
  $theme = array();

  $theme['block-find_us_fb'] = array(
    'module' => 'block',
    'theme' => 'JBW',
    'status' => '1',
    'weight' => '0',
    'region' => 'sidebar',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'find_us_fb',
  );

  $export['theme']['JBW'] = $theme;

  // seven
  $theme = array();

  $theme['block-find_us_fb'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
    'machine_name' => 'find_us_fb',
  );

  $export['theme']['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
