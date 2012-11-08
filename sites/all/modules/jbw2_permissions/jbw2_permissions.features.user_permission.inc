<?php
/**
 * @file
 * jbw2_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function jbw2_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: subscribe to newsletters.
  $permissions['subscribe to newsletters'] = array(
    'name' => 'subscribe to newsletters',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'simplenews',
  );

  return $permissions;
}
