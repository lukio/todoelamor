<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function amor_imagecache_presets_imagecache_default_presets() {
  $items = array(
    'nodo' => array(
      'presetname' => 'nodo',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '550',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'thumbnail' => array(
      'presetname' => 'thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '200',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}
