<div id="breadcrumb">
    <?php $breadcrumb = $variables['breadcrumb'];?>
    <?php
    if(arg(0) == 'cart'){
      print l('Continue shopping', url('events'));
    }else if(arg(0) != 'blog'){
			print implode(' > ', $breadcrumb);
		}
	?>
</div>