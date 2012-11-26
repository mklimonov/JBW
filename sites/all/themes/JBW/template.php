<?php

function JBW_preprocess_page(&$variables) {
    if(arg(0) == 'blog'){
        //print_r($variables);
    }
}

/*function JBW_breadcrumb($variables){
    print_r($variables);
    return 'asd';
}*/

function JBW_preprocess_breadcrumb(&$variables) {
    if(arg(0) == 'node'){
        $nid = (int)arg(1);
        $node = node_load($nid);
        $variables['breadcrumb'][0] = l('Home', variable_get('site_frontpage', 'node'));
        if($node->type == 'event'){
            $menu_item = menu_get_item('events_all');
            $variables['breadcrumb'][] = '<a href="'. url($menu_item['href']). '">'. $menu_item['title']. '</a>';
            $variables['breadcrumb'][] = $node->title;
        }
        if($node->type == 'news'){
            $variables['breadcrumb'][] = '<a href="'. url('news'). '">News</a>';
            $variables['breadcrumb'][] = $node->title;
        }
        if($node->type == 'blog'){
            $menu_item = menu_get_item('blog');
            $variables['breadcrumb'][] = '<a href="'. url($menu_item['href']). '">Blog</a>';
            $variables['breadcrumb'][] = $node->title;
        } 
        if($node->type == 'festival'){
            $menu_item = menu_get_item('festival');
            $variables['breadcrumb'][] = $menu_item['title'];
        }
        if($node->type == 'page'){
            $variables['breadcrumb'][] = drupal_get_title();
        }
        
    }else if(arg(0) != 'blog'){
        $i = 0;
        while(isset($variables[$i])){
            $variables['breadcrumb'][] = $variables[$i];
            $i++;
        }
        $variables['breadcrumb'][] = drupal_get_title();
   }
    ob_start();
        $handle = fopen("a.txt", 'w');
                print_r($variables);//get_plugin('pager'));
        fwrite($handle, ob_get_contents());
        ob_end_clean();
   // print_r($variables);
}

function JBW_form_alter(&$form, &$form_state, $form_id) {
    if($form['#id'] == 'views-exposed-form-events-all-block-3'
                || $form['#id'] == 'views-exposed-form-events-all-block-5') {
        $form['submit']['#value'] = '';
    }
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
    $form['search_block_form']['#attributes']['placeholder'] = t('Search');
    $form['#attributes']['onsubmit'] = "if(this.search_block_form.value=='Search'){ alert('Please enter a search'); return false; }";
  }   
}

/*******************************************************************************
 * Implementation of theme_pager()
 * Pager themization
 */
//****************** PAGER THEMIZATION START ***********************************

function JBW_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil ($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = theme('pager_first', array('text' => (isset($tags[0]) ? $tags[0] : t('� first')), 'element' => $element, 'parameters' => $parameters));
  $li_previous = '';//theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('� previous')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_next = '';//theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('next �')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_last = theme('pager_last', array('text' => (isset($tags[4]) ? $tags[4] : t('last �')), 'element' => $element, 'parameters' => $parameters));

  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => array('pager-first'), 
        'data' => $li_first,
      );
    }
    if ($li_previous) {
      $items[] = array(
        'class' => array('pager-previous'), 
        'data' => $li_previous,
      );
    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis'), 
          'data' => '�',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => array('pager-item'), 
            'data' => theme('pager_previous', array('text' => $i, 'element' => $element, 'interval' => ($pager_current - $i), 'parameters' => $parameters)),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('pager-current'), 
            'data' => $i,
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'class' => array('pager-item'), 
            'data' => theme('pager_next', array('text' => $i, 'element' => $element, 'interval' => ($i - $pager_current), 'parameters' => $parameters)),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager-ellipsis'), 
          'data' => '�',
        );
      }
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('pager-next'), 
        'data' => $li_next,
      );
    }
    if ($li_last) {
      $items[] = array(
        'class' => array('pager-last'), 
        'data' => $li_last,
      );
    }
    return '<h2 class="element-invisible">' . t('Pages') . '</h2>' . theme('item_list', array(
      'items' => $items, 
      'attributes' => array('class' => array('pager')),
    ));
  }
}

function JBW_pager_first($variables) {
  $text = $variables['text'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  global $pager_page_array;
  $output = '<img src="'. base_path() . path_to_theme() . '/images/pager/leftgray.png" />';

  // If we are anywhere but the first page
  if ($pager_page_array[$element] > 0) {
    $output = theme('pager_link', array('text' => '<img src="'. base_path() . path_to_theme() . '/images/pager/leftgreen.png" />', 'page_new' => pager_load_array(0, $element, $pager_page_array), 'element' => $element, 'parameters' => $parameters));
  }

  return $output;
}

function JBW_pager_last($variables) {
  $text = $variables['text'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  global $pager_page_array, $pager_total;
  $output = '<img src="'. base_path() . path_to_theme() . '/images/pager/rightgray.png" />';

  // If we are anywhere but the last page
  if ($pager_page_array[$element] < ($pager_total[$element] - 1)) {
    $output = theme('pager_link', array('text' => '<img src="'. base_path() . path_to_theme() . '/images/pager/rightgreen.png" />', 'page_new' => pager_load_array($pager_total[$element] - 1, $element, $pager_page_array), 'element' => $element, 'parameters' => $parameters));
  }

  return $output;
}

function JBW_pager_previous($variables) {
  $text = $variables['text'];
  $element = $variables['element'];
  $interval = $variables['interval'];
  $parameters = $variables['parameters'];
  global $pager_page_array;
  $output = '';

  // If we are anywhere but the first page
  if ($pager_page_array[$element] > 0) {
    $page_new = pager_load_array($pager_page_array[$element] - $interval, $element, $pager_page_array);
    $output = theme('pager_link', array('text' => $text, 'page_new' => $page_new, 'element' => $element, 'parameters' => $parameters));

  }

  return $output;
}

function JBW_pager_next($variables) {
  $text = $variables['text'];
  $element = $variables['element'];
  $interval = $variables['interval'];
  $parameters = $variables['parameters'];
  global $pager_page_array, $pager_total;
  $output = '';

  // If we are anywhere but the last page
  if ($pager_page_array[$element] < ($pager_total[$element] - 1)) {
    $page_new = pager_load_array($pager_page_array[$element] + $interval, $element, $pager_page_array);
    $output = theme('pager_link', array('text' => $text, 'page_new' => $page_new, 'element' => $element, 'parameters' => $parameters));
  }

  return $output;
}

function JBW_pager_link($variables) {
  $text = $variables['text'];
  $page_new = $variables['page_new'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $attributes = $variables['attributes'];

  $page = isset($_GET['page']) ? $_GET['page'] : '';
  if ($new_page = implode(',', pager_load_array($page_new[$element], $element, explode(',', $page)))) {
    $parameters['page'] = $new_page;
  }

  $query = array();
  if (count($parameters)) {
    $query = drupal_get_query_parameters($parameters, array());
  }
  if ($query_pager = pager_get_query_parameters()) {
    $query = array_merge($query, $query_pager);
  }

  // Set each pager link title
  if (!isset($attributes['title'])) {
    static $titles = NULL;
    if (!isset($titles)) {
      $titles = array(
        t('� first') => t('Go to first page'), 
        t('� previous') => t('Go to previous page'), 
        t('next �') => t('Go to next page'), 
        t('last �') => t('Go to last page'),
      );
    }
    if (isset($titles[$text])) {
      $attributes['title'] = $titles[$text];
    }
    elseif (is_numeric($text)) {
      $attributes['title'] = t('Go to page @number', array('@number' => $text));
    }
  }
  $attributes['href'] = url($_GET['q'], array('query' => $query));
  //if(strip_tags($text, 'img') != $text){
    return '<a' . drupal_attributes($attributes) . '>' .$text . '</a>';
  //}else{
      //return '<a' . drupal_attributes($attributes) . '>' . check_plain($text) . '</a>';
 // }
}

//********** PAGER THEMIZATION END *********************************************
?>
