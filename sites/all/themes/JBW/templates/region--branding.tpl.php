<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <?php if ($linked_logo_img || $site_name || $site_slogan): ?>
    <div class="branding-data clearfix">
      <?php if ($linked_logo_img): ?>
      <div class="logo-img">
        <?php print $linked_logo_img; ?>
      </div>
      <?php endif; ?>
      <div id="pattern">
        <img src="<?php print drupal_get_path('theme', 'JBW') . '/images/header/pattern.png';?>" alt="">
      </div>
      <?php if ($site_slogan): ?>
      <?php $class = $site_name_hidden && $site_slogan_hidden ? ' element-invisible' : ''; ?>
      <div id="site-slogan">        
        <?php if ($site_slogan): ?>
        <?php $class = $site_slogan_hidden ? ' element-invisible' : ''; ?>
        <h6 class="site-slogan<?php print $class; ?>"><?php print $site_slogan; ?></h6>
        <?php endif; ?>
      </div>
      <?php endif; ?>
    </div>
    <?php endif; ?>
    <?php print $content; ?>
  </div>
</div>