<?php
/**
 * @file
 * jbw2_panel_fresh_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jbw2_panel_fresh_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
