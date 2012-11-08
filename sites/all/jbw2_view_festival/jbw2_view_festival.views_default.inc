<?php
/**
 * @file
 * jbw2_view_festival.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function jbw2_view_festival_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'festivals';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Festivals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Content: festival image */
  $handler->display->display_options['fields']['field_festival_image']['id'] = 'field_festival_image';
  $handler->display->display_options['fields']['field_festival_image']['table'] = 'field_data_field_festival_image';
  $handler->display->display_options['fields']['field_festival_image']['field'] = 'field_festival_image';
  $handler->display->display_options['fields']['field_festival_image']['label'] = '';
  $handler->display->display_options['fields']['field_festival_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_festival_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_festival_image']['settings'] = array(
    'image_style' => 'festival_homepage',
    'image_link' => 'content',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<div>
<div class = "pinterest_share social_icon"><p><a href="javascript:void((function(){var%20e=document.createElement(\'script\');e.setAttribute(\'type\',\'text/javascript\');e.setAttribute(\'charset\',\'UTF-8\');e.setAttribute(\'src\',\'http://assets.pinterest.com/js/pinmarklet.js?r=\'+Math.random()*99999999);document.body.appendChild(e)})());"><img alt="Follow Me on Pinterest" height="30" src="http://passets-lt.pinterest.com/images/about/buttons/big-p-button.png" width="30" /></a></p>
</tdiv>
    <div class = "tweet_share social_icon">
     <div class="tweet_button">
      <a class="twitter-share-button" data-count="vertical" data-via="Your Twitter Name" href="http://twitter.com/share" target="blank">Tweet</a> <script type="text/javascript" src="http://platform.twitter.com/widgets.js"></script></div>
    </div>
<div class = "fb_like social_icon"><div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_GB/all.js#xfbml=1";
  fjs.parentNode.insertBefore(js, fjs);
}(document, \'script\', \'facebook-jssdk\'));</script>

<div class="fb-like" data-send="false" data-layout="box_count"
data-width="" data-show-faces="false"></div>    
   </div>
<div class = "fb_share social_icon">
<?php
$url = url(\'node/\' . $data->nid, array(\'absolute\' => TRUE));
print theme(\'facebookshare\', array(\'url\' => $url));
?>
</div>
<div class = "tweet_share social_icon">
<?php print theme(\'tweetbutton_tweet_display\'); ?>
</div>

</div>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'festival' => 'festival',
  );

  /* Display: Festivals_homepage_block */
  $handler = $view->new_display('block', 'Festivals_homepage_block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Content: festival image */
  $handler->display->display_options['fields']['field_festival_image']['id'] = 'field_festival_image';
  $handler->display->display_options['fields']['field_festival_image']['table'] = 'field_data_field_festival_image';
  $handler->display->display_options['fields']['field_festival_image']['field'] = 'field_festival_image';
  $handler->display->display_options['fields']['field_festival_image']['label'] = '';
  $handler->display->display_options['fields']['field_festival_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_festival_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_festival_image']['settings'] = array(
    'image_style' => 'festival_homepage',
    'image_link' => 'content',
  );
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;

  /* Display: Festivals all */
  $handler = $view->new_display('page', 'Festivals all', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Content: festival image */
  $handler->display->display_options['fields']['field_festival_image']['id'] = 'field_festival_image';
  $handler->display->display_options['fields']['field_festival_image']['table'] = 'field_data_field_festival_image';
  $handler->display->display_options['fields']['field_festival_image']['field'] = 'field_festival_image';
  $handler->display->display_options['fields']['field_festival_image']['label'] = '';
  $handler->display->display_options['fields']['field_festival_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_festival_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_festival_image']['settings'] = array(
    'image_style' => 'festival_homepage',
    'image_link' => 'content',
  );
  $handler->display->display_options['path'] = 'festivals';
  $export['festivals'] = $view;

  return $export;
}
