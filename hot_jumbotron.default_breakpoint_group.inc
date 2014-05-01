<?php
/**
 * @file
 * hot_jumbotron.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function hot_jumbotron_default_breakpoint_group() {
  $export = array();

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'breakpoints.hot_jumbotron.screen-xs';
  $breakpoints[] = 'breakpoints.hot_jumbotron.screen-xxs';
  $breakpoints[] = 'breakpoints.hot_jumbotron.screen-sm';
  $breakpoints[] = 'breakpoints.hot_jumbotron.screen-md';
  $breakpoints[] = 'breakpoints.hot_jumbotron.screen-lg';
  $breakpoints[] = 'breakpoints.hot_jumbotron.screen-xl';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'hot_jumbotron';
  $breakpoint_group->name = 'Jumbotron';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['hot_jumbotron'] = $breakpoint_group;

  return $export;
}
