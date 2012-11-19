(function($){
jQuery(document).ready(function(){
    $('.filter-button').live('click', function(){
        changed = 0;
        divToHide = $(this).parent().children('#filter-ul');
        if(divToHide.hasClass('opened-ul-filter')){
            divToHide.slideUp();
            divToHide.addClass('closed-ul-filter');
            divToHide.removeClass('opened-ul-filter');
            changed = 1;
        }
        if(divToHide.hasClass('closed-ul-filter') && changed == 0){
            divToHide.slideDown();
            divToHide.addClass('opened-ul-filter');
            divToHide.removeClass('closed-ul-filter');
            changed = 1;
        }
    });  
});
})(jQuery);