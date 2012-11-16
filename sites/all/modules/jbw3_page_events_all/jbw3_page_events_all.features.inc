<?php
/**
 * @file
 * jbw3_page_events_all.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jbw3_page_events_all_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
