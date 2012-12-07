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
<div class="static-header">
<?php foreach ($fields as $id => $field): ?>
    
  <?php if (!empty($field->separator)): ?>
    <?php print $field->separator; ?>
  <?php endif; ?>

  <?php print $field->wrapper_prefix; ?>
    <?php print $field->label_html; ?>
    <?php if (count($row->field_field_page_image) < 1){
        $menuParents = menu_get_active_trail();
        $menuParents = array_reverse($menuParents);
        array_shift($menuParents);
        foreach( $menuParents as $mp){
            $nodeLink = explode ('/',$mp['href']);
            if (count($nodeLink)<2) break;
            $pnode = node_load($nodeLink[1]);
            if ( count($pnode->field_page_image) > 0){
                //echo '<pre>',  print_r( $pnode->field_page_image,true), '</pre>';
                //print theme('static_header', $pnode->field_page_image['und'][0]['uri'] );
                echo '<img src="',image_style_url('static_header', $pnode->field_page_image['und'][0]['uri']),'">';
                break;
            }
        }
    } else {
        print $field->content;
    }
    ?>
  <?php print $field->wrapper_suffix; ?>


<?php endforeach; ?>
    
</div>
