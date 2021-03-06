<?php
/**
 * @file
 * devshop_organizations.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function devshop_organizations_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer group'.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      'Drupal Administrator' => 'Drupal Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'og',
  );

  // Exported permission: 'create organization content'.
  $permissions['create organization content'] = array(
    'name' => 'create organization content',
    'roles' => array(
      'Drupal Administrator' => 'Drupal Administrator',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'devshop user' => 'devshop user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any organization content'.
  $permissions['delete any organization content'] = array(
    'name' => 'delete any organization content',
    'roles' => array(
      'Drupal Administrator' => 'Drupal Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own organization content'.
  $permissions['delete own organization content'] = array(
    'name' => 'delete own organization content',
    'roles' => array(
      'Drupal Administrator' => 'Drupal Administrator',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'devshop user' => 'devshop user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any organization content'.
  $permissions['edit any organization content'] = array(
    'name' => 'edit any organization content',
    'roles' => array(
      'Drupal Administrator' => 'Drupal Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own organization content'.
  $permissions['edit own organization content'] = array(
    'name' => 'edit own organization content',
    'roles' => array(
      'Drupal Administrator' => 'Drupal Administrator',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'devshop user' => 'devshop user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
