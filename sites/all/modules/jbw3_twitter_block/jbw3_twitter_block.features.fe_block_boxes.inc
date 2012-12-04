<?php
/**
 * @file
 * jbw3_twitter_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function jbw3_twitter_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Twitter JBW';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'twitter2';
  $fe_block_boxes->body = '<p><label id="demo-twitter">Jewish Book Week</label></p>';

  $export['twitter2'] = $fe_block_boxes;

  return $export;
}
