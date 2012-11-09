<?php
/**
 * @file
 * jbw2_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function jbw2_image_styles_image_default_styles() {
  $styles = array();

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
          'width' => '950',
          'height' => '200',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
