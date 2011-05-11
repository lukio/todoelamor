<?php
// $Id$

/**
 * @file
 * Admin functions for fblikebutton.
 */

/**
 * Configure which node types can be "liked" by users.
 */
function fblikebutton_admin_settings() {
  $fblikebutton_node_options = node_get_types('names');
  $form['fblikebutton_node_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Display the Like button on these content types'),
    '#options' => $fblikebutton_node_options,
    '#default_value' => variable_get('fblikebutton_node_types', array('page')),
    '#description' => t('Each of these content types will have the "like" button automatically added to them.'),
  );
  $form['fblikebutton_api'] = array(
    '#type' => 'fieldset',
    '#title' => t('FB Like Button settings'),
    '#collapsible' => true,
    '#collapsed' => true,
  );
  $form['fblikebutton_api']['fblikebutton_layout'] = array(
    '#type' => 'select',
    '#title' => t('Layout style'),
    '#options' => array('standard' => t('Standard'), 'box_count' => t('Box Count'), 'button_count' => t('Button Count')),
    '#default_value' => variable_get('fblikebutton_layout', 'standard'),
    '#description' => t('Determines the size and amount of social context next to the button'),
  );
  $form['fblikebutton_api']['fblikebutton_show_faces'] = array(
    '#type' => 'select',
    '#title' => t('Display faces in the box'),
    '#options' => array('show' => t('Show faces'), 'hide' => t('Do not show faces')),
    '#default_value' => variable_get('fblikebutton_show_faces', 'show'),
    '#description' => t('Show profile pictures below the button. Only work on Standard layout'),
  );
  $form['fblikebutton_api']['fblikebutton_action'] = array(
    '#type' => 'select',
    '#title' => t('Verb to display'),
    '#options' => array('like' => t('Like'), 'recommend' => t('Recommend')),
    '#default_value' => variable_get('fblikebutton_action', 'like'),
    '#description' => t('The verb to display in the button.'),
  );
  $form['fblikebutton_api']['fblikebutton_font'] = array(
	'#type' => 'select',
	'#title' => t('Font'),
	'#options' => array('arial' => 'Arial',
	              'lucida+grande' => 'Lucida Grande',
	              'segoe+ui' => 'Segoe UI',
	              'tahoma' => 'Tahoma',
	              'trebuchet+ms' => 'Trebuchet MS',
	              'verdana' => 'Verdana'),
	'#default_value' => variable_get('fblikebutton_font', 'arial'),
	'#description' => t('The font to display in the button'),
  );
  $form['fblikebutton_api']['fblikebutton_color_scheme'] = array(
	'#type' => 'select',
	'#title' => t('Color scheme'),
	'#options' => array('light' => t('Light'), 'dark' => t('Dark')),
	'#default_value' => variable_get('fblikebutton_color_scheme', 'light'),
	'#description' => t('The color scheme of box environtment'),
  );
  return system_settings_form($form);
}

/**
 * Configure form block configuration
 */
function fblikebutton_block_settings() {
  global $base_url;
  $form['fblikebutton_block_url'] = array(
    '#type' => 'textfield',
    '#default_value' => variable_get('fblikebutton_block_url', $base_url),
    '#description' => t('URL of your homepage to like')
  );
  $form['fblikebutton_block'] = array(
    '#type' => 'fieldset',
    '#title' => 'Block configuration',
    '#collapsible' => false,
  );
  $form['fblikebutton_block']['fblikebutton_bl_layout'] = array(
    '#type' => 'select',
    '#title' => t('Layout style'),
    '#options' => array('standard' => t('Standard'), 'box_count' => t('Box Count'), 'button_count' => t('Button Count')),
    '#default_value' => variable_get('fblikebutton_bl_layout', 'standard'),
    '#description' => t('Determines the size and amount of social context next to the button'),
  );
  $form['fblikebutton_block']['fblikebutton_bl_show_faces'] = array(
    '#type' => 'select',
    '#title' => t('Display faces in the box'),
    '#options' => array('show' => t('Show faces'), 'hide' => t('Do not show faces')),
    '#default_value' => variable_get('fblikebutton_bl_show_faces', 'show'),
    '#description' => t('Show profile pictures below the button. Only work on Standard layout'),
  );
  $form['fblikebutton_block']['fblikebutton_bl_action'] = array(
    '#type' => 'select',
    '#title' => t('Verb to display'),
    '#options' => array('like' => t('Like'), 'recommend' => t('Recommend')),
    '#default_value' => variable_get('fblikebutton_bl_action', 'like'),
    '#description' => t('The verb to display in the button.'),
  );
  $form['fblikebutton_block']['fblikebutton_bl_font'] = array(
	'#type' => 'select',
	'#title' => t('Font'),
	'#options' => array('arial' => 'Arial',
	              'lucida+grande' => 'Lucida Grande',
	              'segoe+ui' => 'Segoe UI',
	              'tahoma' => 'Tahoma',
	              'trebuchet+ms' => 'Trebuchet MS',
	              'verdana' => 'Verdana'),
	'#default_value' => variable_get('fblikebutton_bl_font', 'arial'),
	'#description' => t('The font to display in the button'),
  );
  $form['fblikebutton_block']['fblikebutton_bl_color_scheme'] = array(
	'#type' => 'select',
	'#title' => t('Color scheme'),
	'#options' => array('light' => t('Light'), 'dark' => t('Dark')),
	'#default_value' => variable_get('fblikebutton_bl_color_scheme', 'light'),
	'#description' => t('The color scheme of box environtment'),
  );
   return system_settings_form($form);
 }
 