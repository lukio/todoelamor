<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function amor_destacado_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "taxonomy_export" && $api == "default_taxonomy_exports") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function amor_destacado_views_api() {
  return array(
    'api' => '2',
  );
}
