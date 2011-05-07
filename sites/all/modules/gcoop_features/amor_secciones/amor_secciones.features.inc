<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function amor_secciones_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
  elseif ($module == "taxonomy_export" && $api == "default_taxonomy_exports") {
    return array("version" => 1);
  }
}
