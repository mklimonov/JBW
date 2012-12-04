<div id="breadcrumb">
    <?php $breadcrumb = $variables['breadcrumb'];?>
    <?php
    
    if(arg(0) == 'cart'){
      print l('Continue shopping', url('events'));
    }else if(arg(0) == 'node' && (arg(1) == '372' || arg(1) == '373' || arg(1) == '374')){
      $breadcrumb[1] = 'Donate';
      print implode(' > ', $breadcrumb);
    }else if(arg(0) != 'blog' && arg(0) != 'checkout'){
			print implode(' > ', $breadcrumb);
		}
	?>
  
  <?php if(arg(0) == 'node' && (arg(1) == '372' || arg(1) == '373' || arg(1) == '374')): ?>
  <?php
    $currentCrumb = array('372' => '', '373' => '', '374' => '', '375' => '');
    $currentCrumb[arg(1)] = ' current';
  ?>
  <div class='additional_breadcrumb'>
    <div class='breadcrumb_item<?php print $currentCrumb[372];?>'>Personal Details</div>
    <div class='breadcrumb_item<?php print $currentCrumb[373];?>'>Banking Details</div>
    <div class='breadcrumb_item<?php print $currentCrumb[374];?>'>Confirmation</div>
    <div class='breadcrumb_item<?php print $currentCrumb[375];?>'>Donation Complete</div>
  </div>
<?php endif; ?>
</div>
