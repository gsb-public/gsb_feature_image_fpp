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

  // Exported field_instance: 'fieldable_panels_pane-image-field_body'.
  $field_instances['fieldable_panels_pane-image-field_body'] = array(
    'bundle' => 'image',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_body',
    'label' => 'Caption',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 0,
          'gsb_html_text' => 0,
          'gsb_wysiwyg_text' => 0,
          'image_resource_caption' => 'image_resource_caption',
          'markdown' => 0,
          'plain_text' => 0,
          'slideshow' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 1,
            ),
            'gsb_html_text' => array(
              'weight' => -9,
            ),
            'gsb_wysiwyg_text' => array(
              'weight' => -10,
            ),
            'image_resource_caption' => array(
              'weight' => 0,
            ),
            'markdown' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'slideshow' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-image-field_click_to_expand'.
  $field_instances['fieldable_panels_pane-image-field_click_to_expand'] = array(
    'bundle' => 'image',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_click_to_expand',
    'label' => 'Click to expand',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 34,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-image-field_image_single_public'.
  $field_instances['fieldable_panels_pane-image-field_image_single_public'] = array(
    'bundle' => 'image',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '<ul>
<li>Double Wide: 1740 x 516 px (recommended height)</li>
<li>Wide: 1140 x 550 px (recommended height)</li>
<li>Narrow: 540 x 316 px</li></ul>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'gsb_feature_image_fpp',
        'settings' => array(
          'conditions' => array(),
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image_fpp_enlarge',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_image_single_public',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'file_directory' => 'image-fpp',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'replace_existing_files' => 0,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 0,
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
      'weight' => 2,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'fieldable_panels_pane-image-field_text_equivalent'.
  $field_instances['fieldable_panels_pane-image-field_text_equivalent'] = array(
    'bundle' => 'image',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(
            0 => array(
              'condition' => 'hide_on_pages',
              'configuration' => array(
                'pages' => 'text-equivalent/*',
                'visibility' => 0,
              ),
            ),
          ),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'fieldable_panels_pane',
    'field_name' => 'field_text_equivalent',
    'label' => 'Text Equivalent',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'act' => 0,
          'full_html' => 0,
          'gsb_html_text' => 0,
          'gsb_wysiwyg_text' => 0,
          'image_resource_caption' => 0,
          'image_text_equivalent' => 'image_text_equivalent',
          'markdown' => 0,
          'markdown_lite_minus_resources' => 0,
          'paragraphed_plain_text' => 0,
          'plain_text' => 0,
          'sidebar' => 0,
          'slideshow' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'act' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'gsb_html_text' => array(
              'weight' => -9,
            ),
            'gsb_wysiwyg_text' => array(
              'weight' => -10,
            ),
            'image_resource_caption' => array(
              'weight' => 0,
            ),
            'image_text_equivalent' => array(
              'weight' => 0,
            ),
            'markdown' => array(
              'weight' => 0,
            ),
            'markdown_lite_minus_resources' => array(
              'weight' => 0,
            ),
            'paragraphed_plain_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'sidebar' => array(
              'weight' => 0,
            ),
            'slideshow' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 32,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<ul>
<li>Double Wide: 1740 x 516 px (recommended height)</li>
<li>Wide: 1140 x 550 px (recommended height)</li>
<li>Narrow: 540 x 316 px</li></ul>');
  t('Caption');
  t('Click to expand');
  t('Image');
  t('Text Equivalent');

  return $field_instances;
}
