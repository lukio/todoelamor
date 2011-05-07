<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function amor_secciones_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "taxonomy_export" && $api == "default_taxonomy_exports") {
    return array("version" => 1);
  }
}
