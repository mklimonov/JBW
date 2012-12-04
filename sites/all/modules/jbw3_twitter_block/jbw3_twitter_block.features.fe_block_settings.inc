<?php
/**
 * @file
 * jbw3_twitter_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function jbw3_twitter_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'block-twitter2' => array(
      'machine_name' => 'twitter2',
      'module' => 'block',
    ),
  );

  // bartik
  $theme = array();

  $theme['block-twitter2'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'twitter2',
  );

  $export['theme']['bartik'] = $theme;

  // JBW
  $theme = array();

  $theme['block-twitter2'] = array(
    'module' => 'block',
    'theme' => 'JBW',
    'status' => '1',
    'weight' => '-29',
    'region' => 'sidebar',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'twitter2',
  );

  $export['theme']['JBW'] = $theme;

  // seven
  $theme = array();

  $theme['block-twitter2'] = array(
    'module' => 'block',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
    'machine_name' => 'twitter2',
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
