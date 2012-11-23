<?php
/**
 * @file
 * jbw3_menu_footer.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function jbw3_menu_footer_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'nice_menus-2' => array(
      'delta' => '2',
      'module' => 'nice_menus',
    ),
  );

  // bartik
  $theme = array();

  $theme['nice_menus-2'] = array(
    'module' => 'nice_menus',
    'delta' => '2',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $export['theme']['bartik'] = $theme;

  // JBW
  $theme = array();

  $theme['nice_menus-2'] = array(
    'module' => 'nice_menus',
    'delta' => '2',
    'theme' => 'JBW',
    'status' => '1',
    'weight' => '-16',
    'region' => 'footer',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $export['theme']['JBW'] = $theme;

  // seven
  $theme = array();

  $theme['nice_menus-2'] = array(
    'module' => 'nice_menus',
    'delta' => '2',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
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
