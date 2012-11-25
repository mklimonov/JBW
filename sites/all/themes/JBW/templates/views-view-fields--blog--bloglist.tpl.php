<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.\
 *
 * @ingroup views_templates
 */
?>
<?php $use_img = 0; ?>
<div id="festival-content">
    <?php foreach ($fields as $id => $field): ?>
<?php //print $field->class; ?>
    
    <?php if($field->class == 'created'): ?>
        <div class="left_part">
    <?php endif; ?>

    <?php if($field->class == 'title'): ?>
      <div class = "right_part">
    <?php endif; ?>
          
    <?php if($field->class == 'field-video'): ?>
          <?php
            if(strip_tags($field->content) != ''){
                $use_img = 0;
            }else{
              $use_img = 1;
            }
          ?>
    <?php endif;?>
          
    <?php if($field->class != 'field-blog-image'): ?>
        <?php if (!empty($field->separator)): ?>
          <?php print $field->separator; ?>
        <?php endif; ?>
        <?php print $field->wrapper_prefix; ?>
          <?php print $field->label_html; ?>
          <?php print $field->content; ?>
        <?php print $field->wrapper_suffix; ?>
    <?php endif;?>
     <?php if($field->class == 'field-blog-image' && $use_img == 1): ?>
        <?php if (!empty($field->separator)): ?>
          <?php print $field->separator; ?>
        <?php endif; ?>
        <?php print $field->wrapper_prefix; ?>
          <?php print $field->label_html; ?>
          <?php print $field->content; ?>
        <?php print $field->wrapper_suffix; ?>
    <?php endif;?>      
          
      <?php if($field->class == 'name' || $field->class == 'sharethis'): ?>
           </div>
      <?php endif; ?>
    <?php endforeach; ?>
</div>