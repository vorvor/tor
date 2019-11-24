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
  // Exported menu link: main-menu_fajok-fajtk:admin/structure/taxonomy/species.
  $menu_links['main-menu_fajok-fajtk:admin/structure/taxonomy/species'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy/species',
    'router_path' => 'admin/structure/taxonomy/%',
    'link_title' => 'Fajok, fajták',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_fajok-fajtk:admin/structure/taxonomy/species',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
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
  // Exported menu link: main-menu_last-treatment:last-treatment.
  $menu_links['main-menu_last-treatment:last-treatment'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'last-treatment',
    'router_path' => 'last-treatment',
    'link_title' => 'Last treatment',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => 'menu-item-last-treatment',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_last-treatment:last-treatment',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -36,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_narcotic-tracking-list:narcotic-tracking-list.
  $menu_links['main-menu_narcotic-tracking-list:narcotic-tracking-list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'narcotic-tracking-list',
    'router_path' => 'narcotic-tracking-list',
    'link_title' => 'Narcotic tracking list',
    'options' => array(
      'identifier' => 'main-menu_narcotic-tracking-list:narcotic-tracking-list',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
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
  // Exported menu link: main-menu_sszes-gazdi:owners-all.
  $menu_links['main-menu_sszes-gazdi:owners-all'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'owners-all',
    'router_path' => 'owners-all',
    'link_title' => 'Összes gazdi',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_sszes-gazdi:owners-all',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_statistics:statistics.
  $menu_links['main-menu_statistics:statistics'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'statistics',
    'router_path' => 'statistics',
    'link_title' => 'Statistics',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_statistics:statistics',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_treatments:treatments.
  $menu_links['main-menu_treatments:treatments'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'treatments',
    'router_path' => 'treatments',
    'link_title' => 'Treatments',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_treatments:treatments',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_vaccinates:vaccinates.
  $menu_links['main-menu_vaccinates:vaccinates'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'vaccinates',
    'router_path' => 'vaccinates',
    'link_title' => 'Vaccinates',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_vaccinates:vaccinates',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Dashboard');
  t('Drug supply');
  t('Drugs');
  t('Fajok, fajták');
  t('Gyógyszer beszerzés');
  t('Home');
  t('Last treatment');
  t('Narcotic tracking list');
  t('Owners');
  t('Statistics');
  t('Treatments');
  t('Vaccinates');
  t('Összes gazdi');
  t('Új gazdi');
  t('Új állat');

  return $menu_links;
}
