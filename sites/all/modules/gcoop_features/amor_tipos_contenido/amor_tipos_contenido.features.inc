<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function amor_tipos_contenido_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function amor_tipos_contenido_node_info() {
  $items = array(
    'destacado' => array(
      'name' => t('Destacado Inicio'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'pagina' => array(
      'name' => t('Pagina'),
      'module' => 'features',
      'description' => t('Pagina estática'),
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'has_body' => '1',
      'body_label' => t('Cuerpo'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'producto' => array(
      'name' => t('Producto'),
      'module' => 'features',
      'description' => t('Producto de todoelamor'),
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
