<?php
/**
 * @file
 * jbw3_ct.features.inc
 */

/**
 * Implements hook_node_info().
 */
function jbw3_ct_node_info() {
  $items = array(
    'donation' => array(
      'name' => t('Donation'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'festival' => array(
      'name' => t('Festival'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('News for website'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slider_image' => array(
      'name' => t('Header images'),
      'base' => 'node_content',
      'description' => t('Slider images with short description text.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
