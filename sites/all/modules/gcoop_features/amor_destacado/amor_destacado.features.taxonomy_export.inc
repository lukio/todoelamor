<?php

/**
 * Implementation of hook_default_taxonomy_export().
 */
function amor_destacado_default_taxonomy_export() {
  $taxonomy_exports = array();

  // Exported vocabulary: Tipo Destacado
  $taxonomy_export = new stdClass;
  $taxonomy_export->disabled = FALSE; /* Edit this to true to make a default taxonomy_export disabled initially */
  $taxonomy_export->api_version = 1;
  $taxonomy_export->machine_name = 'tipo_destacado';
  $taxonomy_export->vocabulary = (object) array(
  'vid' => '2',
  'name' => 'Tipo Destacado',
  'description' => '',
  'help' => '',
  'relations' => '1',
  'hierarchy' => '1',
  'multiple' => '0',
  'required' => '0',
  'tags' => '0',
  'module' => 'features_destacado',
  'weight' => '0',
  'type' => NULL,
  'nodes' => array(),
  'machine_name' => 'tipo_destacado',
);
  $taxonomy_export->terms = array(
    0 => (object) array(
  'tid' => '5',
  'vid' => '2',
  'name' => 'slideshow',
  'description' => '',
  'weight' => '0',
  'depth' => 0,
  'parents' => array(
    0 => '0',
  ),
),
  );
  $taxonomy_exports[$taxonomy_export->machine_name] = $taxonomy_export;

  return $taxonomy_exports;
}
