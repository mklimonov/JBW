(function (a) {
    a.fn.hovercard = function (b) {
        var c = {
            width: 370, 
            openOnLeft: false, 
            openOnTop: false, 
            cardImgSrc: "", 
            detailsHTML: "", 
            twitterScreenName: "", 
            showTwitterCard: true, 
            facebookUserName: "", 
            showFacebookCard: false, 
            showCustomCard: false, 
            customCardJSON: {}, 
            customDataUrl: "", 
            background: "#ffffff", 
            delay: 0, 
            autoAdjust: true, 
            onHoverIn: function () { }, 
            onHoverOut: function () { }
        };    
    var b = a.extend(c, b);
    if (a("#css-hovercard").length <= 0) {
        var d = '<style id="css-hovercard" type="text/css">' + ".hc-preview { position: relative; display:inline; }" + ".hc-name { font-weight:bold; position:relative; display:inline-block; }" + ".hc-details { left:-10px; margin-right:80px; text-align:left; font-family:Sans-serif !important; font-size:12px !important; color:#666 !important; line-height:1.5em; border:solid 1px #ddd; position:absolute;-moz-border-radius:3px;-webkit-border-radius:3px;border-radius:3px;top:-10px;padding:2em 10px 10px;-moz-box-shadow:5px 5px 5px #888;-webkit-box-shadow:5px 5px 5px #888;box-shadow:5px 5px 5px #888;display:none;}" + ".hc-pic { width:70px; margin-top:-1em; float:right;  }" + ".hc-details-open-left { left: auto; right:-10px; text-align:right; margin-left:80px; margin-right:0; } " + ".hc-details-open-left > .hc-pic { float:left; } " + ".hc-details-open-top { bottom:-10px; top:auto; padding: 10px 10px 2em;} " + ".hc-details-open-top > .hc-pic { margin-top:10px; float:right;  }" + ".hc-details .s-action{ position: absolute; top:8px; right:5px; } " + ".hc-details .s-card-pad{ border-top: solid 1px #eee; margin-top:10px; padding-top:10px; overflow:hidden; } " + ".hc-details-open-top .s-card-pad { border:none; border-bottom: solid 1px #eee; margin-top:0;padding-top:0; margin-bottom:10px;padding-bottom:10px; }" + ".hc-details .s-card .s-strong{ font-weight:bold; color: #555; } " + ".hc-details .s-img{ float: left; margin-right: 10px; max-width: 70px;} " + ".hc-details .s-name{ color:#222; font-weight:bold;} " + ".hc-details .s-loc{ float:left;}" + ".hc-details-open-left .s-loc{ float:right;} " + ".hc-details .s-href{ clear:both; float:left;} " + ".hc-details .s-desc{ float:left; font-family: Georgia; font-style: italic; margin-top:5px;width:100%;} " + ".hc-details .s-username{ text-decoration:none;} " + ".hc-details .s-stats { display:block; float:left; margin-top:5px; clear:both; padding:0px;}" + ".hc-details ul.s-stats li{ list-style:none; float:left; display:block; padding:0px 10px !important; border-left:solid 1px #eaeaea;} " + ".hc-details ul.s-stats li:first-child{ border:none; padding-left:0 !important;} " + ".hc-details .s-count { font-weight: bold;} " + '.</style>")';
        a(d).appendTo("head")
    }
    return this.each(function () {
        function g(c, d, e, g) {
            var h, i, j, k, l;
            switch (c) {
                case "twitter": {                    
                    i = "http://api.twitter.com/1/users/lookup.json?screen_name=" + d;
                    h = function (a) {
                        a = a[0];
                        return '<div class="s-card s-card-pad">' + (a.profile_image_url ? '<img class="s-img" src="' + a.profile_image_url + '" />' : "") + (a.name ? '<label class="s-name">' + a.name + " </label>" : "") + (a.screen_name ? '(<a class="s-username" title="Visit Twitter profile for ' + a.name + '" href="http://twitter.com/' + a.screen_name + '">@' + a.screen_name + "</a>)<br/>" : "") + (a.location ? '<label class="s-loc">' + a.location + "</label>" : "") + (a.description ? '<p class="s-desc">' + a.description + "</p>" : "") + (a.url ? '<a class="s-href" href="' + a.url + '">' + a.url + "</a><br/>" : "") + '<ul class="s-stats">' + (a.statuses_count ? '<li>Tweets<br /><span class="s-count">' + a.statuses_count + "</span></li>" : "") + (a.friends_count ? '<li>Following<br /><span class="s-count">' + a.friends_count + "</span></li>" : "") + (a.followers_count ? '<li>Followers<br /><span class="s-count">' + a.followers_count + "</span></li>" : "") + "</ul>" + "</div>"
                    };                    
                    k = "Contacting Twitter...";
                    l = "Invalid username or you have exceeded Twitter request limit.<br/><small>Please note, Twitter only allows 150 requests per hour.</small>";
                    j = function () { };                    
                    if (a("#t-follow-script").length <= 0) {
                        var m = document.createElement("script");
                        m.type = "text/javascript";
                        m.src = "//platform.twitter.com/widgets.js";
                        m.id = "t-follow-script";
                        a("body").append(m)
                    }
                    e.append('<span class="s-action"><a href="https://twitter.com/' + d + '" data-show-count="false" data-button="grey" data-width="65px" class="twitter-follow-button">Follow</a></span>')
                }
                break;
            }
            a.ajax({
                url: i, 
                type: "GET", 
                dataType: "jsonp", 
                timeout: 4e3, 
                beforeSend: function () {
                    e.find(".s-message").remove();
                    e.append('<p class="s-message">' + k + "</p>")
                }, 
                success: function (a) {
                    if (a.length <= 0) {
                        e.find(".s-message").html(l)
                    } else {
                        e.find(".s-message").remove();
                        e.prepend(h(a));
                        f(e.closest(".hc-preview"));
                        e.stop(true, true).delay(b.delay).fadeIn();
                        j(a)
                    }
                }, 
                error: function (a, b, c) {
                    e.find(".s-message").html(l)
                }
            })
        }
        function f(a) {
            var c = a.find(".hc-details").eq(0);
            var d = a[0].getBoundingClientRect();
            var e = d.top - 20;
            var f = d.left + 35 + c.width();
            var g = d.top + 35 + c.height();
            var h = d.top - 10;
            c.removeClass("hc-details-open-left")
            c.removeClass("hc-details-open-top")

        }
        var c = a(this);
        c.wrap('<div class="hc-preview" />');
        c.addClass("hc-name");
        var d = "";
        if (b.cardImgSrc.length > 0) {
            d = '<img class="hc-pic" src="' + b.cardImgSrc + '" />'
        }
        var e = '<div class="hc-details" >' + d + b.detailsHTML + "</div>";
        c.after(e);
        c.siblings(".hc-details").eq(0).css({
            width: b.width, 
            background: b.background
        });
        var d = a(c.closest(".hc-preview"));
        f(d);
        d.css("zIndex", "200");
        c.css("zIndex", "100").find(".hc-details").css("zIndex", "50");
        var e = d.find(".hc-details").eq(0);
        e.stop(true, true).delay(b.delay).fadeIn();
        if (b.showTwitterCard && e.find(".s-card").length <= 0) {
            var i = b.twitterScreenName.length > 0 ? b.twitterScreenName : c.text();
            if (typeof c.attr("data-hovercard") == "undefined") { } else if (c.attr("data-hovercard").length > 0) {
                i = c.attr("data-hovercard")
            }
            g("twitter", i, e);
        }
        b.onHoverIn.call(this);
    })
}
})(jQuery)