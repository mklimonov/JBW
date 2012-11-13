<?php
/**
 * @file
 * jbw3_view_festival.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function jbw3_view_festival_views_default_views() {
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
  /* Field: Broken/missing handler */
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
  /* Field: Content: ShareThis Link */
  $handler->display->display_options['fields']['sharethis']['id'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['table'] = 'node';
  $handler->display->display_options['fields']['sharethis']['field'] = 'sharethis';
  $handler->display->display_options['fields']['sharethis']['label'] = '';
  $handler->display->display_options['fields']['sharethis']['element_label_colon'] = FALSE;
  /* Field: Content: description homepage */
  $handler->display->display_options['fields']['field_description_homepage_fest']['id'] = 'field_description_homepage_fest';
  $handler->display->display_options['fields']['field_description_homepage_fest']['table'] = 'field_data_field_description_homepage_fest';
  $handler->display->display_options['fields']['field_description_homepage_fest']['field'] = 'field_description_homepage_fest';
  $handler->display->display_options['fields']['field_description_homepage_fest']['label'] = '';
  $handler->display->display_options['fields']['field_description_homepage_fest']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description_homepage_fest']['element_wrapper_class'] = 'festival-left-part';
  $handler->display->display_options['fields']['field_description_homepage_fest']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_description_homepage_fest']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: description homepage */
  $handler->display->display_options['fields']['field_description_homepage_news']['id'] = 'field_description_homepage_news';
  $handler->display->display_options['fields']['field_description_homepage_news']['table'] = 'field_data_field_description_homepage_news';
  $handler->display->display_options['fields']['field_description_homepage_news']['field'] = 'field_description_homepage_news';
  $handler->display->display_options['fields']['field_description_homepage_news']['label'] = '';
  $handler->display->display_options['fields']['field_description_homepage_news']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description_homepage_news']['element_wrapper_class'] = 'festival-left-part';
  $handler->display->display_options['fields']['field_description_homepage_news']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_description_homepage_news']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: description homepage */
  $handler->display->display_options['fields']['field_description_homepage_blog']['id'] = 'field_description_homepage_blog';
  $handler->display->display_options['fields']['field_description_homepage_blog']['table'] = 'field_data_field_description_homepage_blog';
  $handler->display->display_options['fields']['field_description_homepage_blog']['field'] = 'field_description_homepage_blog';
  $handler->display->display_options['fields']['field_description_homepage_blog']['label'] = '';
  $handler->display->display_options['fields']['field_description_homepage_blog']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description_homepage_blog']['element_wrapper_class'] = 'festival-left-part';
  $handler->display->display_options['fields']['field_description_homepage_blog']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_description_homepage_blog']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: description homepage */
  $handler->display->display_options['fields']['field_description_homepage_event']['id'] = 'field_description_homepage_event';
  $handler->display->display_options['fields']['field_description_homepage_event']['table'] = 'field_data_field_description_homepage_event';
  $handler->display->display_options['fields']['field_description_homepage_event']['field'] = 'field_description_homepage_event';
  $handler->display->display_options['fields']['field_description_homepage_event']['label'] = '';
  $handler->display->display_options['fields']['field_description_homepage_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description_homepage_event']['element_wrapper_class'] = 'festival-left-part';
  $handler->display->display_options['fields']['field_description_homepage_event']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_description_homepage_event']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: image homepage */
  $handler->display->display_options['fields']['field_image_homepage_event']['id'] = 'field_image_homepage_event';
  $handler->display->display_options['fields']['field_image_homepage_event']['table'] = 'field_data_field_image_homepage_event';
  $handler->display->display_options['fields']['field_image_homepage_event']['field'] = 'field_image_homepage_event';
  $handler->display->display_options['fields']['field_image_homepage_event']['label'] = '';
  $handler->display->display_options['fields']['field_image_homepage_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_homepage_event']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_homepage_event']['settings'] = array(
    'image_style' => 'festival_homepage',
    'image_link' => 'content',
  );
  /* Field: Content: image homepage */
  $handler->display->display_options['fields']['field_image_homepage_fest']['id'] = 'field_image_homepage_fest';
  $handler->display->display_options['fields']['field_image_homepage_fest']['table'] = 'field_data_field_image_homepage_fest';
  $handler->display->display_options['fields']['field_image_homepage_fest']['field'] = 'field_image_homepage_fest';
  $handler->display->display_options['fields']['field_image_homepage_fest']['label'] = '';
  $handler->display->display_options['fields']['field_image_homepage_fest']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_homepage_fest']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_homepage_fest']['settings'] = array(
    'image_style' => 'festival_homepage',
    'image_link' => 'content',
  );
  /* Field: Content: image homepage */
  $handler->display->display_options['fields']['field_image_homepage_news']['id'] = 'field_image_homepage_news';
  $handler->display->display_options['fields']['field_image_homepage_news']['table'] = 'field_data_field_image_homepage_news';
  $handler->display->display_options['fields']['field_image_homepage_news']['field'] = 'field_image_homepage_news';
  $handler->display->display_options['fields']['field_image_homepage_news']['label'] = '';
  $handler->display->display_options['fields']['field_image_homepage_news']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_homepage_news']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_homepage_news']['settings'] = array(
    'image_style' => 'festival_homepage',
    'image_link' => 'content',
  );
  /* Field: Content: image homepage */
  $handler->display->display_options['fields']['field_image_homepage']['id'] = 'field_image_homepage';
  $handler->display->display_options['fields']['field_image_homepage']['table'] = 'field_data_field_image_homepage';
  $handler->display->display_options['fields']['field_image_homepage']['field'] = 'field_image_homepage';
  $handler->display->display_options['fields']['field_image_homepage']['label'] = '';
  $handler->display->display_options['fields']['field_image_homepage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_homepage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_homepage']['settings'] = array(
    'image_style' => 'festival_homepage',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
    4 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'blog' => 'blog',
    'event' => 'event',
    'festival' => 'festival',
    'simplenews' => 'simplenews',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: description homepage (field_description_homepage_event) */
  $handler->display->display_options['filters']['field_description_homepage_event_value']['id'] = 'field_description_homepage_event_value';
  $handler->display->display_options['filters']['field_description_homepage_event_value']['table'] = 'field_data_field_description_homepage_event';
  $handler->display->display_options['filters']['field_description_homepage_event_value']['field'] = 'field_description_homepage_event_value';
  $handler->display->display_options['filters']['field_description_homepage_event_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_description_homepage_event_value']['group'] = 1;
  /* Filter criterion: Content: image homepage (field_image_homepage_event:alt) */
  $handler->display->display_options['filters']['field_image_homepage_event_alt']['id'] = 'field_image_homepage_event_alt';
  $handler->display->display_options['filters']['field_image_homepage_event_alt']['table'] = 'field_data_field_image_homepage_event';
  $handler->display->display_options['filters']['field_image_homepage_event_alt']['field'] = 'field_image_homepage_event_alt';
  $handler->display->display_options['filters']['field_image_homepage_event_alt']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_homepage_event_alt']['group'] = 1;
  /* Filter criterion: Content: image homepage (field_image_homepage:alt) */
  $handler->display->display_options['filters']['field_image_homepage_alt']['id'] = 'field_image_homepage_alt';
  $handler->display->display_options['filters']['field_image_homepage_alt']['table'] = 'field_data_field_image_homepage';
  $handler->display->display_options['filters']['field_image_homepage_alt']['field'] = 'field_image_homepage_alt';
  $handler->display->display_options['filters']['field_image_homepage_alt']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_homepage_alt']['group'] = 2;
  /* Filter criterion: Content: description homepage (field_description_homepage_blog) */
  $handler->display->display_options['filters']['field_description_homepage_blog_value']['id'] = 'field_description_homepage_blog_value';
  $handler->display->display_options['filters']['field_description_homepage_blog_value']['table'] = 'field_data_field_description_homepage_blog';
  $handler->display->display_options['filters']['field_description_homepage_blog_value']['field'] = 'field_description_homepage_blog_value';
  $handler->display->display_options['filters']['field_description_homepage_blog_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_description_homepage_blog_value']['group'] = 2;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'blog' => 'blog',
    'event' => 'event',
    'festival' => 'festival',
    'simplenews' => 'simplenews',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: image homepage (field_image_homepage_news:alt) */
  $handler->display->display_options['filters']['field_image_homepage_news_alt']['id'] = 'field_image_homepage_news_alt';
  $handler->display->display_options['filters']['field_image_homepage_news_alt']['table'] = 'field_data_field_image_homepage_news';
  $handler->display->display_options['filters']['field_image_homepage_news_alt']['field'] = 'field_image_homepage_news_alt';
  $handler->display->display_options['filters']['field_image_homepage_news_alt']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_homepage_news_alt']['group'] = 3;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_2']['id'] = 'status_2';
  $handler->display->display_options['filters']['status_2']['table'] = 'node';
  $handler->display->display_options['filters']['status_2']['field'] = 'status';
  $handler->display->display_options['filters']['status_2']['value'] = '1';
  $handler->display->display_options['filters']['status_2']['group'] = 3;
  /* Filter criterion: Content: description homepage (field_description_homepage_news) */
  $handler->display->display_options['filters']['field_description_homepage_news_value']['id'] = 'field_description_homepage_news_value';
  $handler->display->display_options['filters']['field_description_homepage_news_value']['table'] = 'field_data_field_description_homepage_news';
  $handler->display->display_options['filters']['field_description_homepage_news_value']['field'] = 'field_description_homepage_news_value';
  $handler->display->display_options['filters']['field_description_homepage_news_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_description_homepage_news_value']['group'] = 3;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'node';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['value'] = array(
    'blog' => 'blog',
    'event' => 'event',
    'festival' => 'festival',
    'simplenews' => 'simplenews',
  );
  $handler->display->display_options['filters']['type_2']['group'] = 3;
  /* Filter criterion: Content: image homepage (field_image_homepage_fest:alt) */
  $handler->display->display_options['filters']['field_image_homepage_fest_alt']['id'] = 'field_image_homepage_fest_alt';
  $handler->display->display_options['filters']['field_image_homepage_fest_alt']['table'] = 'field_data_field_image_homepage_fest';
  $handler->display->display_options['filters']['field_image_homepage_fest_alt']['field'] = 'field_image_homepage_fest_alt';
  $handler->display->display_options['filters']['field_image_homepage_fest_alt']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_image_homepage_fest_alt']['group'] = 4;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_3']['id'] = 'type_3';
  $handler->display->display_options['filters']['type_3']['table'] = 'node';
  $handler->display->display_options['filters']['type_3']['field'] = 'type';
  $handler->display->display_options['filters']['type_3']['value'] = array(
    'blog' => 'blog',
    'event' => 'event',
    'festival' => 'festival',
    'simplenews' => 'simplenews',
  );
  $handler->display->display_options['filters']['type_3']['group'] = 4;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_3']['id'] = 'status_3';
  $handler->display->display_options['filters']['status_3']['table'] = 'node';
  $handler->display->display_options['filters']['status_3']['field'] = 'status';
  $handler->display->display_options['filters']['status_3']['value'] = '1';
  $handler->display->display_options['filters']['status_3']['group'] = 4;
  /* Filter criterion: Content: description homepage (field_description_homepage_fest) */
  $handler->display->display_options['filters']['field_description_homepage_fest_value']['id'] = 'field_description_homepage_fest_value';
  $handler->display->display_options['filters']['field_description_homepage_fest_value']['table'] = 'field_data_field_description_homepage_fest';
  $handler->display->display_options['filters']['field_description_homepage_fest_value']['field'] = 'field_description_homepage_fest_value';
  $handler->display->display_options['filters']['field_description_homepage_fest_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_description_homepage_fest_value']['group'] = 4;

  /* Display: Festivals all */
  $handler = $view->new_display('page', 'Festivals all', 'page_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
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
  /* Field: Broken/missing handler */
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: festival date - end date (field_festival_date:value2) */
  $handler->display->display_options['filters']['field_festival_date_value2_1']['id'] = 'field_festival_date_value2_1';
  $handler->display->display_options['filters']['field_festival_date_value2_1']['table'] = 'field_data_field_festival_date';
  $handler->display->display_options['filters']['field_festival_date_value2_1']['field'] = 'field_festival_date_value2';
  $handler->display->display_options['filters']['field_festival_date_value2_1']['operator'] = '>=';
  $handler->display->display_options['filters']['field_festival_date_value2_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_festival_date_value2_1']['expose']['operator_id'] = 'field_festival_date_value2_1_op';
  $handler->display->display_options['filters']['field_festival_date_value2_1']['expose']['label'] = 'month';
  $handler->display->display_options['filters']['field_festival_date_value2_1']['expose']['operator'] = 'field_festival_date_value2_1_op';
  $handler->display->display_options['filters']['field_festival_date_value2_1']['expose']['identifier'] = 'field_festival_date_value2_1';
  $handler->display->display_options['filters']['field_festival_date_value2_1']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_festival_date_value2_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_festival_date_value2_1']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_festival_date_value2_1']['year_range'] = '-0:+3';
  $handler->display->display_options['path'] = 'festivals';

  /* Display: Festival node page */
  $handler = $view->new_display('block', 'Festival node page', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Festival';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: festival image */
  $handler->display->display_options['fields']['field_festival_image']['id'] = 'field_festival_image';
  $handler->display->display_options['fields']['field_festival_image']['table'] = 'field_data_field_festival_image';
  $handler->display->display_options['fields']['field_festival_image']['field'] = 'field_festival_image';
  $handler->display->display_options['fields']['field_festival_image']['label'] = '';
  $handler->display->display_options['fields']['field_festival_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_festival_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_festival_image']['settings'] = array(
    'image_style' => 'festival_node',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: festival date */
  $handler->display->display_options['fields']['field_festival_date']['id'] = 'field_festival_date';
  $handler->display->display_options['fields']['field_festival_date']['table'] = 'field_data_field_festival_date';
  $handler->display->display_options['fields']['field_festival_date']['field'] = 'field_festival_date';
  $handler->display->display_options['fields']['field_festival_date']['label'] = '';
  $handler->display->display_options['fields']['field_festival_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_festival_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $export['festivals'] = $view;

  return $export;
}
