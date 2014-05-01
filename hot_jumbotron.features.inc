<?php
/**
 * @file
 * hot_jumbotron.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hot_jumbotron_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function hot_jumbotron_image_default_styles() {
  $styles = array();

  // Exported image style: hot_jumbotron.
  $styles['hot_jumbotron'] = array(
    'name' => 'hot_jumbotron',
    'label' => 'Jumbotron',
    'effects' => array(),
  );

  // Exported image style: hot_jumbotron_breakpoints_screen-lg_1x.
  $styles['hot_jumbotron_breakpoints_screen-lg_1x'] = array(
    'name' => 'hot_jumbotron_breakpoints_screen-lg_1x',
    'label' => 'hot_jumbotron_breakpoints_screen-lg_1x',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1399,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_jumbotron_breakpoints_screen-lg_2x.
  $styles['hot_jumbotron_breakpoints_screen-lg_2x'] = array(
    'name' => 'hot_jumbotron_breakpoints_screen-lg_2x',
    'label' => 'hot_jumbotron_breakpoints_screen-lg_2x',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 2798,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_jumbotron_breakpoints_screen-md_1x.
  $styles['hot_jumbotron_breakpoints_screen-md_1x'] = array(
    'name' => 'hot_jumbotron_breakpoints_screen-md_1x',
    'label' => 'hot_jumbotron_breakpoints_screen-md_1x',
    'effects' => array(
      5 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1199,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_jumbotron_breakpoints_screen-md_2x.
  $styles['hot_jumbotron_breakpoints_screen-md_2x'] = array(
    'name' => 'hot_jumbotron_breakpoints_screen-md_2x',
    'label' => 'hot_jumbotron_breakpoints_screen-md_2x',
    'effects' => array(
      6 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 2398,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_jumbotron_breakpoints_screen-sm_1x.
  $styles['hot_jumbotron_breakpoints_screen-sm_1x'] = array(
    'name' => 'hot_jumbotron_breakpoints_screen-sm_1x',
    'label' => 'hot_jumbotron_breakpoints_screen-sm_1x',
    'effects' => array(
      7 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 991,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_jumbotron_breakpoints_screen-sm_2x.
  $styles['hot_jumbotron_breakpoints_screen-sm_2x'] = array(
    'name' => 'hot_jumbotron_breakpoints_screen-sm_2x',
    'label' => 'hot_jumbotron_breakpoints_screen-sm_2x',
    'effects' => array(
      8 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1982,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_jumbotron_breakpoints_screen-xl_1x.
  $styles['hot_jumbotron_breakpoints_screen-xl_1x'] = array(
    'name' => 'hot_jumbotron_breakpoints_screen-xl_1x',
    'label' => 'hot_jumbotron_breakpoints_screen-xl_1x',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1800,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_jumbotron_breakpoints_screen-xl_2x.
  $styles['hot_jumbotron_breakpoints_screen-xl_2x'] = array(
    'name' => 'hot_jumbotron_breakpoints_screen-xl_2x',
    'label' => 'hot_jumbotron_breakpoints_screen-xl_2x',
    'effects' => array(
      4 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 3600,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_jumbotron_breakpoints_screen-xs_1x.
  $styles['hot_jumbotron_breakpoints_screen-xs_1x'] = array(
    'name' => 'hot_jumbotron_breakpoints_screen-xs_1x',
    'label' => 'hot_jumbotron_breakpoints_screen-xs_1x',
    'effects' => array(
      9 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 767,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_jumbotron_breakpoints_screen-xs_2x.
  $styles['hot_jumbotron_breakpoints_screen-xs_2x'] = array(
    'name' => 'hot_jumbotron_breakpoints_screen-xs_2x',
    'label' => 'hot_jumbotron_breakpoints_screen-xs_2x',
    'effects' => array(
      10 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1534,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_jumbotron_breakpoints_screen-xxs_1x.
  $styles['hot_jumbotron_breakpoints_screen-xxs_1x'] = array(
    'name' => 'hot_jumbotron_breakpoints_screen-xxs_1x',
    'label' => 'hot_jumbotron_breakpoints_screen-xxs_1x',
    'effects' => array(
      11 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 479,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hot_jumbotron_breakpoints_screen-xxs_2x.
  $styles['hot_jumbotron_breakpoints_screen-xxs_2x'] = array(
    'name' => 'hot_jumbotron_breakpoints_screen-xxs_2x',
    'label' => 'hot_jumbotron_breakpoints_screen-xxs_2x',
    'effects' => array(
      12 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 958,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
