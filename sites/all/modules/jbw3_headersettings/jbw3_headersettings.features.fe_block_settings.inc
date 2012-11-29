<?php
/**
 * @file
 * jbw3_headersettings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function jbw3_headersettings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'menu_festival_link-custom_pager_filter' => array(
      'delta' => 'custom_pager_filter',
      'module' => 'menu_festival_link',
    ),
    'views-slider-block_1' => array(
      'delta' => 'slider-block_1',
      'module' => 'views',
    ),
    'views-slider-block_2' => array(
      'delta' => 'slider-block_2',
      'module' => 'views',
      'node_type' => array(
        'blog' => TRUE,
      ),
    ),
    'views-slider-block_3' => array(
      'delta' => 'slider-block_3',
      'module' => 'views',
    ),
    'views-slider-block_4' => array(
      'delta' => 'slider-block_4',
      'module' => 'views',
      'node_type' => array(
        'festival' => TRUE,
      ),
    ),
    'views-slider-block_5' => array(
      'delta' => 'slider-block_5',
      'module' => 'views',
    ),
    'views-slider-block_6' => array(
      'delta' => 'slider-block_6',
      'module' => 'views',
      'node_type' => array(
        'event' => TRUE,
      ),
    ),
    'views-slider-block_7' => array(
      'delta' => 'slider-block_7',
      'module' => 'views',
    ),
    'views-slider-block_8' => array(
      'delta' => 'slider-block_8',
      'module' => 'views',
      'node_type' => array(
        'news' => TRUE,
      ),
    ),
    'views-slider-block_9' => array(
      'delta' => 'slider-block_9',
      'module' => 'views',
      'node_type' => array(
        'page' => TRUE,
      ),
    ),
    'views-slider-slider' => array(
      'delta' => 'slider-slider',
      'module' => 'views',
    ),
  );

  // bartik
  $theme = array();

  $theme['menu_festival_link-custom_pager_filter'] = array(
    'module' => 'menu_festival_link',
    'delta' => 'custom_pager_filter',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['views-slider-block_1'] = array(
    'module' => 'views',
    'delta' => 'slider-block_1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'blog
blog/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-slider-block_2'] = array(
    'module' => 'views',
    'delta' => 'slider-block_2',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'node/*',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-slider-block_3'] = array(
    'module' => 'views',
    'delta' => 'slider-block_3',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'festival/*
festival/*/programme
festivals',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-slider-block_4'] = array(
    'module' => 'views',
    'delta' => 'slider-block_4',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'node/*',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-slider-block_5'] = array(
    'module' => 'views',
    'delta' => 'slider-block_5',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'events/*
events',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-slider-block_6'] = array(
    'module' => 'views',
    'delta' => 'slider-block_6',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'node/*',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-slider-block_7'] = array(
    'module' => 'views',
    'delta' => 'slider-block_7',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'news/*
news',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-slider-block_8'] = array(
    'module' => 'views',
    'delta' => 'slider-block_8',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'node/*',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-slider-block_9'] = array(
    'module' => 'views',
    'delta' => 'slider-block_9',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'node/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-slider-slider'] = array(
    'module' => 'views',
    'delta' => 'slider-slider',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '<none>',
    'cache' => -1,
  );

  $export['theme']['bartik'] = $theme;

  // JBW
  $theme = array();

  $theme['menu_festival_link-custom_pager_filter'] = array(
    'module' => 'menu_festival_link',
    'delta' => 'custom_pager_filter',
    'theme' => 'JBW',
    'status' => '1',
    'weight' => '-22',
    'region' => 'header',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['views-slider-block_1'] = array(
    'module' => 'views',
    'delta' => 'slider-block_1',
    'theme' => 'JBW',
    'status' => '1',
    'weight' => '-32',
    'region' => 'header',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'blog
blog/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-slider-block_2'] = array(
    'module' => 'views',
    'delta' => 'slider-block_2',
    'theme' => 'JBW',
    'status' => '1',
    'weight' => '-31',
    'region' => 'header',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'node/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-slider-block_3'] = array(
    'module' => 'views',
    'delta' => 'slider-block_3',
    'theme' => 'JBW',
    'status' => '1',
    'weight' => '-28',
    'region' => 'header',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'festival/*
festival/*/programme
festivals',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-slider-block_4'] = array(
    'module' => 'views',
    'delta' => 'slider-block_4',
    'theme' => 'JBW',
    'status' => '1',
    'weight' => '-27',
    'region' => 'header',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'node/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-slider-block_5'] = array(
    'module' => 'views',
    'delta' => 'slider-block_5',
    'theme' => 'JBW',
    'status' => '1',
    'weight' => '-30',
    'region' => 'header',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'events/*
events',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-slider-block_6'] = array(
    'module' => 'views',
    'delta' => 'slider-block_6',
    'theme' => 'JBW',
    'status' => '1',
    'weight' => '-29',
    'region' => 'header',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'node/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-slider-block_7'] = array(
    'module' => 'views',
    'delta' => 'slider-block_7',
    'theme' => 'JBW',
    'status' => '1',
    'weight' => '-26',
    'region' => 'header',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'news/*
news',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-slider-block_8'] = array(
    'module' => 'views',
    'delta' => 'slider-block_8',
    'theme' => 'JBW',
    'status' => '1',
    'weight' => '-25',
    'region' => 'header',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'node/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-slider-block_9'] = array(
    'module' => 'views',
    'delta' => 'slider-block_9',
    'theme' => 'JBW',
    'status' => '1',
    'weight' => '-23',
    'region' => 'header',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'node/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-slider-slider'] = array(
    'module' => 'views',
    'delta' => 'slider-slider',
    'theme' => 'JBW',
    'status' => '1',
    'weight' => '-24',
    'region' => 'header',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>
home',
    'title' => '<none>',
    'cache' => -1,
  );

  $export['theme']['JBW'] = $theme;

  // seven
  $theme = array();

  $theme['menu_festival_link-custom_pager_filter'] = array(
    'module' => 'menu_festival_link',
    'delta' => 'custom_pager_filter',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '1',
  );

  $theme['views-slider-block_1'] = array(
    'module' => 'views',
    'delta' => 'slider-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'blog
blog/*',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-slider-block_2'] = array(
    'module' => 'views',
    'delta' => 'slider-block_2',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'node/*',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-slider-block_3'] = array(
    'module' => 'views',
    'delta' => 'slider-block_3',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'festival/*
festival/*/programme
festivals',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-slider-block_4'] = array(
    'module' => 'views',
    'delta' => 'slider-block_4',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'node/*',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-slider-block_5'] = array(
    'module' => 'views',
    'delta' => 'slider-block_5',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'events/*
events',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-slider-block_6'] = array(
    'module' => 'views',
    'delta' => 'slider-block_6',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'node/*',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-slider-block_7'] = array(
    'module' => 'views',
    'delta' => 'slider-block_7',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => 'news/*
news',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['views-slider-block_8'] = array(
    'module' => 'views',
    'delta' => 'slider-block_8',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => 'node/*',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-slider-block_9'] = array(
    'module' => 'views',
    'delta' => 'slider-block_9',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-slider-slider'] = array(
    'module' => 'views',
    'delta' => 'slider-slider',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '1',
    'pages' => '<front>
home',
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
