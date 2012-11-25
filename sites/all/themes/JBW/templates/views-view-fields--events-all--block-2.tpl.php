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
<?php $sold_out = 0; ?>
<?php foreach ($fields as $id => $field): ?>
<?php //print $field->class; ?>
    <?php if($field->class == 'field-event-image'): ?>
      <div class = "node_left_part">
    <?php endif; ?>
    <?php if($field->class == 'title'): ?>
      <div class = "node_right_part">
    <?php endif; ?>
          
    <?php if($field->class == 'field-event-date'): ?>
          <?php print '<div class="node-event-date">Date '. strip_tags($field->content). '</div>'; ?>
    <?php endif; ?>
          
    <?php if($field->class == 'field-is-sold-out-'): ?>
          <?php $sold_out = (int)strip_tags($field->content);?>
          <?php if(!$sold_out): ?>
            <div class="node-event-price">Sold out</div>
          <?php endif; ?>
    <?php endif; ?>
    
    <?php if($sold_out): ?>
            
        <?php if($field->class == 'commerce-price' && strip_tags($field->content) != ''): ?>
              <?php print '<div class="node-event-price">Price: &pound;'. strip_tags($field->content). '</div>'; ?>
        <?php endif; ?>

        <?php if($field->class == 'field-price-on-another-site' && strip_tags($field->content) != ''): ?>
              <?php if(strip_tags($field->content) == 0): ?>
                <div class="node-event-price">Free event</div>
              <?php endif; ?>
              <?php if(strip_tags($field->content) != 0): ?>
                <?php print '<div class="node-event-price">Price: &pound;'. strip_tags($field->content). '</div>'; ?>
              <?php endif; ?>
        <?php endif; ?>
                
        <?php if(($field->class == 'field-price-saver' || $field->class == 'field-saver-price') && strip_tags($field->content) != ''): ?>
           <?php print '<div class="Saver-price"> Saver price: &pound;'. strip_tags($field->content). '</div>'; ?>  
        <?php endif; ?>
                
    <?php endif; ?>
                
    <?php if($field->class == 'field-ticket-buy-link' && strip_tags($field->content) != ''): ?>
          <div class="buy-link-cart">
          <?php if(strip_tags($field->content) != ''): ?>
            <?php print '<a href = "'. strip_tags($field->content). '">Book here</a><br /><i>You will now be taken to the King Place<br/>website to continue your booking</i><br /><br />'; ?>  
          <?php endif; ?>
                Free Events<br />
            <i>All free events are ticketed and must be reserved via the Kings Place Box Office in advance.
            Free tickets are limited to 2 tickets per person.</i><br /><br />

                Multi-Event Ticket Offer<br />
            <i>Book tickets for multiple Jewish Book Week events and save up to 30%.
            This offer is NOT available online.
            To take advantage of this offer call the Kings Place Box Office on 020 7520 1490.</i></div>
    <?php endif; ?>
          
  <?php if($field->class != 'field-is-sold-out-' &&  $field->class != 'field-saver-price' && $field->class != 'field-price-saver' && $field->class != 'field-price-on-another-site' && $field->class != 'field-event-date' && $field->class != 'commerce-price' && $field->class != 'field-ticket-buy-link'): ?>  
          
  <?php if (!empty($field->separator)): ?>
    <?php print $field->separator; ?>
  <?php endif; ?>

  <?php print $field->wrapper_prefix; ?>
    <?php print $field->label_html; ?>
    <?php print $field->content; ?>
  <?php print $field->wrapper_suffix; ?>
          
  <?php endif; ?>
          
    <?php if($field->class == 'sharethis' || $field->class == 'field-event-image-2'): ?>
      </div>
    <?php endif; ?>
          
<?php endforeach; ?>
