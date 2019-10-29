<?php

/**
 * @file
 * tor_base.features.inc
 */

/**
 * Implements hook_views_api().
 */
function tor_base_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tor_base_node_info() {
  $items = array(
    'drug' => array(
      'name' => t('Drug'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'drug_supply' => array(
      'name' => t('Gyógyszer beszerzés'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event_treatment' => array(
      'name' => t('Event treatment'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event_vaccinate' => array(
      'name' => t('Event vaccinate'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'owner' => array(
      'name' => t('Owner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pet' => array(
      'name' => t('Háziállat'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function tor_base_paragraphs_info() {
  $items = array(
    'drugs_used' => array(
      'name' => 'Drugs used',
      'bundle' => 'drugs_used',
      'locked' => '1',
    ),
    'recipe' => array(
      'name' => 'Recipe',
      'bundle' => 'recipe',
      'locked' => '1',
    ),
  );
  return $items;
}
