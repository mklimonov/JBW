<?php
/**
 * @file
 * jbw3_page_festivalprogramme.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jbw3_page_festivalprogramme_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
