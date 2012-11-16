(function($){
jQuery(document).ready(function(){
    $('.date-filter-button').live('click', function(){
        changed = 0;
        if($('#filter-date-ul').hasClass('opened-ul-filter-date')){
            $('#filter-date-ul').slideUp();
            $('#filter-date-ul').addClass('closed-ul-filter-date');
            $('#filter-date-ul').removeClass('opened-ul-filter-date');
            changed = 1;
        }
        if($('#filter-date-ul').hasClass('closed-ul-filter-date') && changed == 0){
            $('#filter-date-ul').slideDown();
            $('#filter-date-ul').addClass('opened-ul-filter-date');
            $('#filter-date-ul').removeClass('closed-ul-filter-date');
            changed = 1;
        }
    });  
});
})(jQuery);

(function($){
jQuery(document).ready(function(){
    $('.type-filter-button').live('click', function(){
        changed = 0;
        if($('#filter-type-ul').hasClass('opened-ul-filter-type')){
            $('#filter-type-ul').slideUp();
            $('#filter-type-ul').addClass('closed-ul-filter-type');
            $('#filter-type-ul').removeClass('opened-ul-filter-type');
            changed = 1;
        }
        if($('#filter-type-ul').hasClass('closed-ul-filter-type') && changed == 0){
            $('#filter-type-ul').slideDown();
            $('#filter-type-ul').addClass('opened-ul-filter-type');
            $('#filter-type-ul').removeClass('closed-ul-filter-type');
            changed = 1;
        }
    });  
});
})(jQuery);

(function($){
jQuery(document).ready(function(){
    $('.tax-filter-button').live('click', function(){
        changed = 0;
        if($('#filter-tax-ul').hasClass('opened-ul-filter-tax')){
            $('#filter-tax-ul').slideUp();
            $('#filter-tax-ul').addClass('closed-ul-filter-tax');
            $('#filter-tax-ul').removeClass('opened-ul-filter-tax');
            changed = 1;
        }
        if($('#filter-tax-ul').hasClass('closed-ul-filter-tax') && changed == 0){
            $('#filter-tax-ul').slideDown();
            $('#filter-tax-ul').addClass('opened-ul-filter-tax');
            $('#filter-tax-ul').removeClass('closed-ul-filter-tax');
            changed = 1;
        }
    });  
});
})(jQuery);