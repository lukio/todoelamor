<?php

/**
 * Implementation of hook_strongarm().
 */
function amor_page_site_default_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_site_template_enabled';
  $strongarm->value = 1;

  $export['panels_everywhere_site_template_enabled'] = $strongarm;
  return $export;
}
