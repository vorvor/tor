<?php

/**
 * @file
 * tor_base.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function tor_base_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: vet.
  $roles['vet'] = array(
    'name' => 'vet',
    'weight' => 3,
  );

  return $roles;
}
