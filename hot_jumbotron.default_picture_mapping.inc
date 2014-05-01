<?php
/**
 * @file
 * hot_jumbotron.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function hot_jumbotron_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'hot_jumbotron';
  $picture_mapping->breakpoint_group = 'hot_jumbotron';
  $picture_mapping->mapping = array(
    'breakpoints.hot_jumbotron.screen-xxs' => array(
      '1x' => 'hot_jumbotron_breakpoints_screen-xxs_1x',
      '2x' => 'hot_jumbotron_breakpoints_screen-xxs_2x',
    ),
    'breakpoints.hot_jumbotron.screen-xs' => array(
      '1x' => 'hot_jumbotron_breakpoints_screen-xs_1x',
      '2x' => 'hot_jumbotron_breakpoints_screen-xs_2x',
    ),
    'breakpoints.hot_jumbotron.screen-sm' => array(
      '1x' => 'hot_jumbotron_breakpoints_screen-sm_1x',
      '2x' => 'hot_jumbotron_breakpoints_screen-sm_2x',
    ),
    'breakpoints.hot_jumbotron.screen-md' => array(
      '1x' => 'hot_jumbotron_breakpoints_screen-md_1x',
      '2x' => 'hot_jumbotron_breakpoints_screen-md_2x',
    ),
    'breakpoints.hot_jumbotron.screen-lg' => array(
      '1x' => 'hot_jumbotron_breakpoints_screen-lg_1x',
      '2x' => 'hot_jumbotron_breakpoints_screen-lg_2x',
    ),
    'breakpoints.hot_jumbotron.screen-xl' => array(
      '1x' => 'hot_jumbotron_breakpoints_screen-xl_1x',
      '2x' => 'hot_jumbotron_breakpoints_screen-xl_2x',
    ),
  );
  $export['hot_jumbotron'] = $picture_mapping;

  return $export;
}
