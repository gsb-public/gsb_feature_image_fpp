<?php
/**
 * @file
 * gsb_feature_image_fpp.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gsb_feature_image_fpp_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'fieldable_panels_pane-image-field_file_single_public'
  $field_instances['fieldable_panels_pane-image-field_file_single_public'] = array(
    'bundle' => 'image',
    'deleted' => 0,
    'description' => 'Narrow image width is 270, wide image width is 570, double wide image width is 870.  Proceed with caution and limit the use of double wide images as responsive performance is negatively impacted by images of this size.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'conditions' => array(),
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_file_single_public',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'media-center',
      'file_extensions' => 'txt',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 'private',
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'gsb_media_browser--files_and_docs' => 0,
          'gsb_media_browser--images' => 0,
          'gsb_media_browser--videos' => 0,
          'gsb_media_center_document' => 0,
          'gsb_media_center_image' => 'gsb_media_center_image',
          'gsb_media_center_video' => 0,
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 0,
          'upload' => 0,
          'youtube' => 0,
        ),
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => -3,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');
  t('Narrow image width is 270, wide image width is 570, double wide image width is 870.  Proceed with caution and limit the use of double wide images as responsive performance is negatively impacted by images of this size.');

  return $field_instances;
}
