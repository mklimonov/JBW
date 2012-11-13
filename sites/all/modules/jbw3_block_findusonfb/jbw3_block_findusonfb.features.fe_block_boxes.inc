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
  $fe_block_boxes->body = '<p><iframe allowtransparency="true" frameborder="0" scrolling="no" src="//www.facebook.com/plugins/likebox.php?href=http%3A%2F%2Fwww.facebook.com%2Fpages%2FJewish-Book-Week%2F127800803904100&amp;width=380&amp;height=427&amp;colorscheme=light&amp;show_faces=false&amp;border_color&amp;stream=true&amp;header=true" style="border:none; overflow:hidden; width:370px; height:427px;"></iframe></p>
';

  $export['find_us_fb'] = $fe_block_boxes;

  return $export;
}
