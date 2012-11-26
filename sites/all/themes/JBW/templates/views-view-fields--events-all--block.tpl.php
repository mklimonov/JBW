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
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<?php foreach ($fields as $id => $field): ?>

    <?php if($field->class == 'title-1'): ?>
    <div class = "events-body">
        <?php if(strip_tags($field->content) == ''): ?>
            <p>Regular event</p>
        <?php endif; ?>
        <?php if(strip_tags($field->content) != ''): ?>
            <p>Festival event</p>
        <?php endif; ?>
    <?php endif; ?>
                    
  <?php if($field->class != 'title-1' && $field->class != 'field-ticket-buy-link'): ?>   

    <?php if (!empty($field->separator)): ?>
      <?php print $field->separator; ?>
    <?php endif; ?>

    <?php print $field->wrapper_prefix; ?>
      <?php print $field->label_html; ?>
      <?php print $field->content; ?>
    <?php print $field->wrapper_suffix; ?>
  
  <?php endif; ?>
            
  <?php if($field->class == 'field-ticket-buy-link' && strip_tags($field->content) != ''): ?>
           <?php //print '<div class="buy-link-cart"><a target="_blank" href = "'. strip_tags($field->content). '"><img src = "'. base_path(). path_to_theme(). '/images/commerce/cart_big.png" /></a></div>'; ?>  
  <?php endif; ?>
            
  <?php if($field->class == 'title'): ?>
        </div>
    <?php endif; ?>
<?php endforeach; ?>
