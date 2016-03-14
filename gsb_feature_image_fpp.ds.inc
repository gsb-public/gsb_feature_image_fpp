<?php
/**
 * @file
 * gsb_feature_image_fpp.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_image_fpp_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'fieldable_panels_pane|image|default';
  $ds_fieldsetting->entity_type = 'fieldable_panels_pane';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'text_equivalent_link_image_fpp' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
        'conditions' => array(
          0 => array(
            'condition' => 'hide_if_empty',
            'configuration' => array(
              'target' => 'field_text_equivalent',
            ),
          ),
        ),
      ),
    ),
    'field_image_single_public' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
    'field_body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'figcaption',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['fieldable_panels_pane|image|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function gsb_feature_image_fpp_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'text_equivalent_link_image_fpp';
  $ds_field->label = 'Text equivalent link image fpp';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'fieldable_panels_pane' => 'fieldable_panels_pane',
  );
  $ds_field->ui_limit = 'image|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<div class="image-text-equivalent"><a target="_blank" href="/text-equivalent/fieldable_panels_pane/[fieldable_panels_pane:fpid]">See Text Equivalent</a></div>',
      'format' => 'gsb_html_text',
    ),
    'use_token' => 1,
  );
  $export['text_equivalent_link_image_fpp'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_image_fpp_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|image|default';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'image';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'text_equivalent_link_image_fpp',
        1 => 'title',
        2 => 'field_image_single_public',
        3 => 'field_body',
        4 => 'field_text_equivalent',
      ),
    ),
    'fields' => array(
      'text_equivalent_link_image_fpp' => 'ds_content',
      'title' => 'ds_content',
      'field_image_single_public' => 'ds_content',
      'field_body' => 'ds_content',
      'field_text_equivalent' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'figure',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['fieldable_panels_pane|image|default'] = $ds_layout;

  return $export;
}
