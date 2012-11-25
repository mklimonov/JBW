<?php
/**
 * @file
 * jbw3_headersettings.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function jbw3_headersettings_taxonomy_default_vocabularies() {
  return array(
    'sildertypes' => array(
      'name' => 'SilderTypes',
      'machine_name' => 'sildertypes',
      'description' => 'Taxonomy for slider types to show certain slider in header',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
