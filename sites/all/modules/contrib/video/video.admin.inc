<?php

// $Id: video.admin.inc,v 1.1.2.29.2.15 2010/11/30 23:50:31 heshanmw Exp $

/**
 * @file
 * Provides the administration settings for the Video Drupal module.
 */

/**
 * Video transcoder admin settings
 * @return <type>
 */
function video_transcoder_admin_settings() {
  module_load_include('inc', 'video', '/includes/transcoder');
  $transcoder = new video_transcoder;
  $form = $transcoder->admin_settings();
  return system_settings_form($form);
}

/**
 * Form API callback to validate the upload settings form.
 */
function video_transcoder_admin_settings_validate($form, &$form_state) {
  // check ffmpeg_wrapper module installed or not
  if ($form_state['values']['vid_convertor'] == 'video_ffmpeg_wrapper' && !module_exists('ffmpeg_wrapper')) {
    form_set_error('vid_convertor', t('You need to download and install the !ffmpeg_wrapper module to enable this option.', array('!ffmpeg_wrapper' => l(t('FFMPEG Wrapper'), 'http://drupal.org/project/ffmpeg_wrapper'))));
  }

  // add vallidations by trnacoder interface
  $transcoder = $form_state['values']['vid_convertor'];
  module_load_include('inc', 'video', '/includes/transcoder');
  $transcoder = new video_transcoder($transcoder);
  $transcoder->admin_settings_validate($form, $form_state);
}

/**
 * Video transcoder admin settings
 * @return <type>
 */
function video_preset_admin_settings() {
  module_load_include('inc', 'video', '/includes/preset');
  $preset = new video_preset();
  $form = $preset->admin_settings();
  return system_settings_form($form);
}

/**
 * Video general admin settings
 * @return <type>
 */
function video_general_admin_settings() {
  $form = array();
  $form['video_autoplay'] = array(
    '#type' => 'checkbox',
    '#title' => t('Automatically start video on page load'),
    '#default_value' => variable_get('video_autoplay', FALSE),
    '#description' => t('Start the video when the page and video loads')
  );
  $form['video_autobuffering'] = array(
    '#type' => 'checkbox',
    '#title' => t('Automatically start video buffering'),
    '#default_value' => variable_get('video_autobuffering', TRUE),
    '#description' => t('Start buffering video when the page and video loads')
  );
  $form['video_bypass_conversion'] = array(
    '#type' => 'checkbox',
    '#title' => t('Bypass Video Conversion'),
    '#default_value' => variable_get('video_bypass_conversion', FALSE),
    '#description' => t('Bypass video conversion when creating videos.')
  );
  $form['video_convert_on_save'] = array(
    '#type' => 'checkbox',
    '#title' => t('Video Convert on Node Submit'),
    '#default_value' => variable_get('video_convert_on_save', FALSE),
    '#description' => t('Convert videos on node submit.')
  );
  $form['video_use_default_thumb'] = array(
    '#type' => 'checkbox',
    '#title' => t('Override Auto Thumbnails with Default'),
    '#default_value' => variable_get('video_use_default_thumb', FALSE),
    '#description' => t('Override auto thumbnails with default thumbnail.')
  );
  return system_settings_form($form);
}

/**
 * Video player admin settings
 * @return <type>
 */
function video_players_admin_settings() {
  $form = array();
  $form['extensions'] = array(
    '#type' => 'fieldset',
    '#title' => t('Video Extensions'),
    '#description' => t('Here you can map specific players to each video extension type.'),
  );
  //lets get all our supported extensions and players.
  $extensions = video_video_extensions();
  $players = video_video_players();
  $flv_players = video_video_flv_players();

  foreach ($extensions as $ext => $player) {
    $form['extensions']['video_extension_' . $ext] = array(
      '#type' => 'select',
      '#title' => t('Extension:') . '  ' . $ext,
      '#default_value' => variable_get('video_extension_' . $ext, $player),
      '#options' => $players,
      '#prefix' => '<div class="video_select" rel="' . $ext . '">',
      '#suffix' => '</div>',
    );

    $form['extensions']['video_extension_' . $ext . '_flash_player'] = array(
      '#type' => !empty($flv_players) ? 'radios' : 'markup',
      '#title' => t('Flash Player for') . ' ' . $ext,
      '#value' => !empty($flv_players) ? '' : t('No flash players detected.<br />You need to install !swf_tools or !flowplayer.', array('!swf_tools' => l(t('SWF Tools'), 'http://www.drupal.org/project/swftools'), '!flowplayer' => l(t('Flowplayer'), 'http://www.drupal.org/project/flowplayer'))),
      '#options' => $flv_players,
      '#default_value' => variable_get('video_extension_' . $ext . '_flash_player', ''),
      '#prefix' => '<div class="admin_flv_player_wrapper" id="flv_player_' . $ext . '">',
      '#suffix' => '</div>',
    );
  }
  return system_settings_form($form);
}

/**
 * Video Metadata admin settings
 * @return <type>
 */
function video_metadata_admin_settings() {
  module_load_include('inc', 'video', '/includes/metadata');
  $metadata = new video_metadata;
  $form = $metadata->admin_settings();
  return system_settings_form($form);
}

function video_metadata_admin_settings_validate($form, &$form_state) {
  // add vallidations by metadata interface
  $metadata = $form_state['values']['vid_metadata'];
  module_load_include('inc', 'video', '/includes/metadata');
  $metadata = new video_metadata($metadata);
  $metadata->admin_settings_validate($form, $form_state);
}

/**
 * Video cron admin settings
 * @return <type>
 */
function video_cron_admin_settings() {
  $form = array();
  $form['video_cron'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use Drupals built in cron.'),
    '#default_value' => variable_get('video_cron', TRUE),
    '#description' => t('If you would like to use Drupals built in cron hook, check this box.  Please be warned that transcoding videos is very resource intensive.  If you use poor mans cron, I highly discourage this option.  I also suggest you setup your cron to call this function through CLI instead of WGET.'),
  );
  $form['video_ffmpeg_instances'] = array(
    '#type' => 'textfield',
    '#title' => t('Total videos to convert during each cron process.'),
    '#default_value' => variable_get('video_ffmpeg_instances', 5),
    '#description' => t('How many videos do you want to process on each cron run?  Either through hook_cron or the video_scheduler.php.'),
  );
  return system_settings_form($form);
}

/**
 * File system admin settings
 * @return <type>
 */
function video_filesystem_admin_settings() {
  module_load_include('inc', 'video', '/includes/filesystem');
  $filesystem = new video_filesystem;
  $form = $filesystem->admin_settings();
  return system_settings_form($form);
}

function video_filesystem_admin_settings_validate($form, &$form_state) {
  // add vallidations by metadata interface
  $filesystem = $form_state['values']['vid_filesystem'];
  module_load_include('inc', 'video', '/includes/filesystem');
  $filesystem = new video_filesystem($filesystem);
  $filesystem->admin_settings_validate($form, $form_state);
}