<?php
/**
 * @file
 * hot_jumbotron.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function hot_jumbotron_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.hot_jumbotron.screen-lg';
  $breakpoint->name = 'screen-lg';
  $breakpoint->breakpoint = '(min-width: 1200px)';
  $breakpoint->source = 'hot_jumbotron';
  $breakpoint->source_type = 'module';
  $breakpoint->status = 1;
  $breakpoint->weight = 3;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '2x' => '2x',
  );
  $export['breakpoints.hot_jumbotron.screen-lg'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.hot_jumbotron.screen-md';
  $breakpoint->name = 'screen-md';
  $breakpoint->breakpoint = '(min-width: 992px)and (max-width: 1199px)';
  $breakpoint->source = 'hot_jumbotron';
  $breakpoint->source_type = 'module';
  $breakpoint->status = 1;
  $breakpoint->weight = 2;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '2x' => '2x',
  );
  $export['breakpoints.hot_jumbotron.screen-md'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.hot_jumbotron.screen-sm';
  $breakpoint->name = 'screen-sm';
  $breakpoint->breakpoint = '(min-wdith: 768px) and (max-width: 991px)';
  $breakpoint->source = 'hot_jumbotron';
  $breakpoint->source_type = 'module';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '2x' => '2x',
  );
  $export['breakpoints.hot_jumbotron.screen-sm'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.hot_jumbotron.screen-xl';
  $breakpoint->name = 'screen-xl';
  $breakpoint->breakpoint = '(min-width: 1400px)';
  $breakpoint->source = 'hot_jumbotron';
  $breakpoint->source_type = 'module';
  $breakpoint->status = 1;
  $breakpoint->weight = 4;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '2x' => '2x',
  );
  $export['breakpoints.hot_jumbotron.screen-xl'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.hot_jumbotron.screen-xs';
  $breakpoint->name = 'screen-xs';
  $breakpoint->breakpoint = '(min-width: 480px)and (max-width: 767px)';
  $breakpoint->source = 'hot_jumbotron';
  $breakpoint->source_type = 'module';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '2x' => '2x',
  );
  $export['breakpoints.hot_jumbotron.screen-xs'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.hot_jumbotron.screen-xxs';
  $breakpoint->name = 'screen-xxs';
  $breakpoint->breakpoint = '(max-width: 479px)';
  $breakpoint->source = 'hot_jumbotron';
  $breakpoint->source_type = 'module';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '2x' => '2x',
  );
  $export['breakpoints.hot_jumbotron.screen-xxs'] = $breakpoint;

  return $export;
}
