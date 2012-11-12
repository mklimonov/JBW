<?php
/**
 * @file
 * jbw2_page_festival.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jbw2_page_festival_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
