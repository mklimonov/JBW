<?php
/**
 * @file
 * jbw3_page_login.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jbw3_page_login_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
