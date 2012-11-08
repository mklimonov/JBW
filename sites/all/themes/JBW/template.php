<?php

function JBW_form_alter(&$form, &$form_state, $form_id) {
/*
  $form_ids = array(
    'node_form',
    'system_site_information_settings',
    'user_profile_form',
  );

  if (isset($form['#form_id']) && !in_array($form['#form_id'], $form_ids) && !isset($form['#node_edit_form'])) {
    $form['actions']['#theme_wrappers'] = array();
  }
 */
  if($form_id == 'search_block_form') {
    $form['search_block_form']['#title'] = t('Search');
    $form['search_block_form']['#title_display'] = 'invisible';
    $form['search_block_form']['#size'] = 30; 
    $form['actions']['submit']['#value'] = t('GO!');
    $form['search_block_form']['#class'] = 'search-form';
    //$form['actions']['submit'] = array('#type' => 'image_button', '#src' => base_path() . path_to_theme() . '/images/searchbutton.png');
	$form['actions']['submit'] = array('#type' => 'submit');
    $form['search_block_form']['#attributes']['onblur'] = "if (this.value == '') {this.value = 'Search';}";
    $form['search_block_form']['#attributes']['onfocus'] = "if (this.value == 'Search') {this.value = '';}";
    $form['#attributes']['onsubmit'] = "if(this.search_block_form.value=='Search'){ alert('Please enter a search'); return false; }";
  }   
}

?>
