<?php

/**
 * Implementation of hook_strongarm().
 */
function amor_secciones_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_pattern';
  $strongarm->value = '[vocab-raw]/[catpath-raw]';

  $export['pathauto_taxonomy_pattern'] = $strongarm;
  return $export;
}
