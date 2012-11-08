<?php
/**
 * @file
 * jbw2_panels_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jbw2_panels_slider_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
