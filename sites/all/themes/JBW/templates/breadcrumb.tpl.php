<?php 
    $breadcrumb = $variables['breadcrumb'];
?>

<?php
    if(arg(0) != 'blog'){
        print implode(' > ', $breadcrumb);
    }
?>