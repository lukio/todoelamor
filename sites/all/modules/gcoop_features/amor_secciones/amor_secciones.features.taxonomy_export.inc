<?php

/**
 * Implementation of hook_default_taxonomy_export().
 */
function amor_secciones_default_taxonomy_export() {
  $taxonomy_exports = array();

  // Exported vocabulary: Secciones
  $taxonomy_export = new stdClass;
  $taxonomy_export->disabled = FALSE; /* Edit this to true to make a default taxonomy_export disabled initially */
  $taxonomy_export->api_version = 1;
  $taxonomy_export->machine_name = 'secciones';
  $taxonomy_export->vocabulary = (object) array(
  'vid' => '1',
  'name' => 'Secciones',
  'description' => '',
  'help' => '',
  'relations' => '1',
  'hierarchy' => '1',
  'multiple' => '0',
  'required' => '1',
  'tags' => '0',
  'module' => 'features_secciones',
  'weight' => '0',
  'type' => NULL,
  'nodes' => array(),
  'machine_name' => 'secciones',
);
  $taxonomy_export->terms = array(
    0 => (object) array(
  'tid' => '1',
  'vid' => '1',
  'name' => 'bufandas',
  'description' => '',
  'weight' => '0',
  'depth' => 0,
  'parents' => array(
    0 => '0',
  ),
),
    1 => (object) array(
  'tid' => '2',
  'vid' => '1',
  'name' => 'chalecos',
  'description' => '',
  'weight' => '0',
  'depth' => 0,
  'parents' => array(
    0 => '0',
  ),
),
    2 => (object) array(
  'tid' => '3',
  'vid' => '1',
  'name' => 'ponchos',
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
