<?php
/**
 * @file
 * jbw3_imagestyles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function jbw3_imagestyles_image_default_styles() {
  $styles = array();

  // Exported image style: event_image_list.
  $styles['event_image_list'] = array(
    'name' => 'event_image_list',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '135',
          'height' => '150',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: festival_homepage.
  $styles['festival_homepage'] = array(
    'name' => 'festival_homepage',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '365',
          'height' => '265',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: festival_node.
  $styles['festival_node'] = array(
    'name' => 'festival_node',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '135',
          'height' => '165',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: slider_image.
  $styles['slider_image'] = array(
    'name' => 'slider_image',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '930',
          'height' => '235',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
