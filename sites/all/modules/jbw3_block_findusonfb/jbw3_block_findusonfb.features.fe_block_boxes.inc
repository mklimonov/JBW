<?php
/**
 * @file
 * jbw3_block_findusonfb.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function jbw3_block_findusonfb_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Find us on facebook block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'find_us_fb';
  $fe_block_boxes->body = '<iframe src="//www.facebook.com/plugins/likebox.php?href=http%3A%2F%2Fwww.facebook.com%2Fpages%2FJewish-Book-Week%2F127800803904100%3Fref%3Dstream&amp;width=390&amp;height=427&amp;colorscheme=light&amp;show_faces=false&amp;border_color=black&amp;stream=true&amp;header=true" scrolling="no" frameborder="0" style="border:none; overflow:hidden; width:390px; height:427px;" allowTransparency="true"></iframe>';

  $export['find_us_fb'] = $fe_block_boxes;

  return $export;
}
