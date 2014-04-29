<?php
/**
 * @file
 * hot_jumbotron.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hot_jumbotron_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-hot_jumbotron_full-field_hot_jumbotron_caption'
  $field_instances['fieldable_panels_pane-hot_jumbotron_full-field_hot_jumbotron_caption'] = array(
    'bundle' => 'hot_jumbotron_full',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_hot_jumbotron_caption',
    'label' => 'Caption',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'fieldable_panels_pane-hot_jumbotron_full-field_hot_jumbotron_image'
  $field_instances['fieldable_panels_pane-hot_jumbotron_full-field_hot_jumbotron_image'] = array(
    'bundle' => 'hot_jumbotron_full',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'picture',
        'settings' => array(
          'colorbox' => 'hot_jumbotron',
          'fallback_image_style' => 'hot_jumbotron',
          'image_link' => '',
          'picture_group' => 'hot_jumbotron',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_hot_jumbotron_image',
    'label' => 'Jumbotron Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Jumbotron Image');
  t('Caption');

  return $field_instances;
}
