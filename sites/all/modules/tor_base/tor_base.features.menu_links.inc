<?php

/**
 * @file
 * tor_base.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function tor_base_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_dashboard:dashboard.
  $menu_links['main-menu_dashboard:dashboard'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'dashboard',
    'router_path' => 'dashboard',
    'link_title' => 'Dashboard',
    'options' => array(
      'identifier' => 'main-menu_dashboard:dashboard',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_drug-supply:node/add/drug-supply.
  $menu_links['main-menu_drug-supply:node/add/drug-supply'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/drug-supply',
    'router_path' => 'node/add/drug-supply',
    'link_title' => 'Drug supply',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_drug-supply:node/add/drug-supply',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_drugs:drugs.
  $menu_links['main-menu_drugs:drugs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'drugs',
    'router_path' => 'drugs',
    'link_title' => 'Drugs',
    'options' => array(
      'identifier' => 'main-menu_drugs:drugs',
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_gygyszer-beszerzs:node/add/drug-supply.
  $menu_links['main-menu_gygyszer-beszerzs:node/add/drug-supply'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/drug-supply',
    'router_path' => 'node/add/drug-supply',
    'link_title' => 'Gyógyszer beszerzés',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_gygyszer-beszerzs:node/add/drug-supply',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'hu',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_j-gazdi:node/add/owner.
  $menu_links['main-menu_j-gazdi:node/add/owner'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/owner',
    'router_path' => 'node/add/owner',
    'link_title' => 'Új gazdi',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_j-gazdi:node/add/owner',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_j-llat:node/add/pet.
  $menu_links['main-menu_j-llat:node/add/pet'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/pet',
    'router_path' => 'node/add/pet',
    'link_title' => 'Új állat',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_j-llat:node/add/pet',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_owners:owners.
  $menu_links['main-menu_owners:owners'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'owners',
    'router_path' => 'owners',
    'link_title' => 'Owners',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_owners:owners',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Dashboard');
  t('Drug supply');
  t('Drugs');
  t('Gyógyszer beszerzés');
  t('Home');
  t('Owners');
  t('Új gazdi');
  t('Új állat');

  return $menu_links;
}
