Action()
{

	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	lr_think_time(11);

	web_url("v1", 
		"URL=https://firefox.settings.services.mozilla.com/v1/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("advantageonlineshopping.com", 
		"URL=https://advantageonlineshopping.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/images/Down_arrow.svg", ENDITEM, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/images/favicon.ico", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=https://www.googletagmanager.com/gtag/js?id=G-TBPYED8WSW", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=tablets", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/category_banner_4.png", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4500", ENDITEM, 
		LAST);

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("cfr-v1-en-US", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/main/collections/ms-language-packs/records/cfr-v1-en-US", 
		"Method=GET", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_url("changeset", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/main/collections/quicksuggest-other/changeset?_expected=0&_since=%221764918213773%22", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("HDc", 
		"URL=http://o.pki.goog/s/we1/HDc", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\x02\\x99Zv\\xD5\\x04L\\xFE\\xB0\\x98\\xB7\\x98\\x81IGz\\x9F\\xACg&\\x04\\x14\\xA0\\xAF\\xD5\\xF1\\xAD\\x0486J\\xE1\\x8A}Z\\xF50\\xAF\\x91\\xA0Q\\xA1\\x02\\x10\\x1C7\\xE7x\\xD1\\x1Bm\\x18\\x11\\xD8N\\xD4N+Z\\x14", 
		LAST);

	web_custom_request("HDc_2", 
		"URL=http://o.pki.goog/s/we1/HDc", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\x02\\x99Zv\\xD5\\x04L\\xFE\\xB0\\x98\\xB7\\x98\\x81IGz\\x9F\\xACg&\\x04\\x14\\xA0\\xAF\\xD5\\xF1\\xAD\\x0486J\\xE1\\x8A}Z\\xF50\\xAF\\x91\\xA0Q\\xA1\\x02\\x10\\x1C7\\xE7x\\xD1\\x1Bm\\x18\\x11\\xD8N\\xD4N+Z\\x14", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$ct=application/x-protobuf&key=AIzaSyC7jsptDS3am4tPx4r3nxis7IMjBc5Dovo&$httpMethod=POST&$req=ChUKE25hdmNsaWVudC1hdXRvLWZmb3gaJwgFEAEaGwoNCAUQBhgBIgMwMDEwARDrlR4aAhgKzW7icCICIAIoARonCAEQARobCg0IARAGGAEiAzAwMTABENK8ExoCGAoyvyPDIgIgAigBGicIAxABGhsKDQgDEAYYASIDMDAxMAEQ-LQTGgIYClwncwwiAiACKAEaJwgHEAEaGwoNCAcQBhgBIgMwMDEwARDcwBMaAhgKrAnj0yICIAIoARolCAkQARoZCg0ICRAGGAEiAzAwMTABECQaAhgK80oTOSICIAIoAQ==", "Referer=", ENDITEM, 
		LAST);

	web_websocket_connect("ID=0", 
		"URI=wss://push.services.mozilla.com/", 
		"Origin=wss://push.services.mozilla.com/", 
		"SecWebSocketExtensions=permessage-deflate", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_custom_request("dns-query", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x07example\\x03com\\x00\\x00\\x02\\x00\\x01\\x00\\x00)"
		"\\x10\\x00\\x00\\x00\\x00\\x00\\x00X\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00L\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_custom_request("we2", 
		"URL=http://o.pki.goog/we2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\x02\\x99Zv\\xD5\\x04L\\xFE\\xB0\\x98\\xB7\\x98\\x81IGz\\x9F\\xACg&\\x04\\x14\\xA0\\xAF\\xD5\\xF1\\xAD\\x0486J\\xE1\\x8A}Z\\xF50\\xAF\\x91\\xA0Q\\xA1\\x02\\x10~@GT\\xE9\\x8A%O\\x129`f\\xB3\\xB3\\xF5n", 
		LAST);

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\x02\\x99Zv\\xD5\\x04L\\xFE\\xB0\\x98\\xB7\\x98\\x81IGz\\x9F\\xACg&\\x04\\x14\\xA0\\xAF\\xD5\\xF1\\xAD\\x0486J\\xE1\\x8A}Z\\xF50\\xAF\\x91\\xA0Q\\xA1\\x02\\x10\\x02\\xF1\\x84\\xDA\\xF8\\x12Sy\\xE1\\x18\\x08\\xA7\\x04<\\xF6\\xF4", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_custom_request("dns-query_2", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x07mozilla\\x0Ecloudflare-dns\\x03com\\x00\\x00\\x1C\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00I\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00="
		"\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		EXTRARES, 
		"Url=https://advantageonlineshopping.com/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1767196030748\\\"\"},\"use_webpush\":true,\"uaid\":\"7cd6923f8fc249568af1cf260de00962\"}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_custom_request("7a6eb5fc-6000-46de-b18e-b2833f0e3926", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/use-counters/1/7a6eb5fc-6000-46de-b18e-b2833f0e3926", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":63,\"start_time\":\"2025-12-31T09:53:57.000-06:00\",\"end_time\":\"2025-12-31T09:56:03.462-06:00\",\"reason\":\"app_shutdown_confirmed\",\"experiments\":{\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\""
		":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\""
		"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\""
		"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2025-01-18-06:00\",\"windows_build_number\":26100,\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"app_build\":\"20251217121356\",\"app_display_version\":\"146.0.1\",\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\"},\"metrics\":{\"counter\":{\"use.counter.css.page.css_background_size\":1,\""
		"use.counter.css.page.css_text_align\":1,\"use.counter.css.page.css_background_position_x\":1,\"use.counter.css.page.css_webkit_animation_iteration_count\":1,\"use.counter.css.page.css_font_size\":1,\"use.counter.css.doc.css_text_anchor\":1,\"use.counter.css.page.css_margin\":1,\"use.counter.css.page.css_float\":1,\"use.counter.css.page.css_min_height\":1,\"use.counter.css.page.css_text_indent\":1,\"use.counter.css.doc.css_fill_rule\":2,\"use.counter.css.page.css_webkit_animation_duration\":1,\""
		"use.counter.css.page.css_bottom\":1,\"use.counter.css.page.css_background\":1,\"use.counter.css.page.css_webkit_animation_name\":1,\"use.counter.css.page.css_fill_rule\":1,\"use.counter.css.page.css_animation_name\":1,\"use.counter.css.page.css_background_image\":1,\"use.counter.css.page.css_stroke\":1,\"use.counter.css.page.css_z_index\":1,\"use.counter.css.page.css_animation_timing_function\":1,\"use.counter.css.page.css_webkit_animation_delay\":1,\"use.counter.css.page.css_letter_spacing\":1,\""
		"use.counter.css.page.css_text_transform\":1,\"use.counter.css.page.css_margin_top\":1,\"use.counter.css.page.css_webkit_box_shadow\":1,\"use.counter.css.page.css_box_sizing\":1,\"use.counter.css.page.css_max_height\":1,\"use.counter.css.doc.css_width\":3,\"use.counter.css.page.css_border_collapse\":1,\"use.counter.css.page.css_content\":1,\"use.counter.css.page.css_right\":1,\"use.counter.css.page.css_transform\":1,\"use.counter.css.page.css_padding_left\":1,\"use.counter.css.page.css_position\":1"
		",\"use.counter.css.page.css_perspective\":1,\"use.counter.page.domparser_parsefromstring\":1,\"use.counter.top_level_content_documents_destroyed\":1,\"use.counter.css.page.css_padding_bottom\":1,\"use.counter.css.page.css_color\":1,\"use.counter.css.page.css_background_position\":1,\"use.counter.css.page.css_webkit_transform_origin\":1,\"use.counter.css.page.css_left\":1,\"use.counter.css.page.css_moz_user_select\":1,\"use.counter.css.page.css_border_width\":1,\""
		"use.counter.css.page.css_webkit_box_sizing\":1,\"use.counter.css.page.css_webkit_appearance\":1,\"use.counter.css.page.css_webkit_transition\":1,\"use.counter.css.page.css_moz_box_sizing\":1,\"use.counter.css.page.css_border_bottom\":1,\"use.counter.css.page.css_white_space\":1,\"use.counter.css.page.css_width\":1,\"use.counter.css.page.css_touch_action\":1,\"use.counter.deprecated_ops.page.sync_xmlhttp_request_deprecated\":1,\"use.counter.css.page.css_box_shadow\":1,\""
		"use.counter.css.page.css_animation_fill_mode\":1,\"use.counter.css.page.css_border_radius\":1,\"use.counter.css.page.css_outline\":1,\"use.counter.css.page.css_margin_left\":1,\"use.counter.css.page.css_padding_right\":1,\"use.counter.css.page.css_user_select\":1,\"use.counter.css.page.css_webkit_animation_timing_function\":1,\"use.counter.css.page.css_text_decoration\":1,\"use.counter.css.doc.css_fill_opacity\":2,\"use.counter.css.page.css_stop_opacity\":1,\"use.counter.css.page.css_stroke_width"
		"\":1,\"use.counter.css.page.css_webkit_backface_visibility\":1,\"use.counter.css.doc.css_fill\":4,\"use.counter.css.page.css_border_right\":1,\"use.counter.page.mixed_content_not_upgraded_image_success\":1,\"use.counter.css.page.css_display\":1,\"use.counter.css.page.css_overflow_x\":1,\"use.counter.css.doc.css_mask\":1,\"use.counter.css.page.css_font_weight\":1,\"use.counter.css.page.css_margin_bottom\":1,\"use.counter.css.page.css_margin_right\":1,\"use.counter.css.page.css_line_height\":1,\""
		"use.counter.css.page.css_moz_animation_name\":1,\"use.counter.css.page.css_border\":1,\"use.counter.css.page.css_border_top\":1,\"use.counter.css.page.css_padding\":1,\"use.counter.content_documents_destroyed\":4,\"use.counter.css.page.css_webkit_border_radius\":1,\"use.counter.page.console_error\":1,\"use.counter.css.page.css_backface_visibility\":1,\"use.counter.css.page.css_animation_duration\":1,\"use.counter.css.doc.css_height\":3,\"use.counter.css.page.css_max_width\":1,\""
		"use.counter.css.page.css_transition\":1,\"use.counter.css.page.css_flex_direction\":1,\"use.counter.css.page.css_fill\":1,\"use.counter.css.page.css_stop_color\":1,\"use.counter.css.page.css_top\":1,\"use.counter.css.page.css_moz_transition\":1,\"use.counter.css.page.css_border_left\":1,\"use.counter.css.page.css_word_wrap\":1,\"use.counter.css.page.css_opacity\":1,\"use.counter.css.page.css_transition_delay\":1,\"use.counter.css.page.css_height\":1,\"use.counter.css.page.css_text_shadow\":1,\""
		"use.counter.css.page.css_direction\":1,\"use.counter.css.page.css_background_color\":1,\"use.counter.css.page.css_font_family\":1,\"use.counter.css.page.css_cursor\":1,\"use.counter.css.doc.css_font_size\":1,\"use.counter.css.page.css_visibility\":1,\"use.counter.css.page.css_pointer_events\":1,\"use.counter.css.page.css_text_overflow\":1,\"use.counter.css.page.css_list_style\":1,\"use.counter.css.page.css_transform_style\":1,\"use.counter.css.page.css_webkit_animation_fill_mode\":1,\""
		"use.counter.css.page.css_border_color\":1,\"use.counter.css.page.css_webkit_transform\":1,\"use.counter.css.page.css_webkit_user_select\":1,\"use.counter.css.page.css_background_repeat\":1,\"use.counter.css.page.css_resize\":1,\"use.counter.css.doc.css_font_family\":1,\"use.counter.css.page.css_animation_delay\":1,\"use.counter.page.console_log\":1,\"use.counter.css.page.css_padding_top\":1,\"use.counter.css.page.css_table_layout\":1,\"use.counter.css.doc.css_dominant_baseline\":1,\""
		"use.counter.css.page.css_overflow_y\":1,\"use.counter.css.page.css_overflow\":1,\"use.counter.css.doc.css_clip_rule\":2,\"use.counter.css.page.css_transform_origin\":1,\"use.counter.css.page.css_vertical_align\":1,\"use.counter.css.page.css_animation_iteration_count\":1}}}", 
		LAST);

	web_custom_request("dns-query_3", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x07mozilla\\x0Ecloudflare-dns\\x03com\\x00\\x00\\x01\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00I\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00="
		"\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_url("experiments.json", 
		"URL=https://easylist-downloads.adblockplus.org/ab-testing/experiments.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("4d13050d-e1a2-4f57-abcf-4405e753dd73", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/4d13050d-e1a2-4f57-abcf-4405e753dd73", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":5689,\"start_time\":\"2025-12-31T09:54:19.000-06:00\",\"end_time\":\"2025-12-31T09:56:20.037-06:00\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2025-01-18-06:00\",\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"app_build\":\"20251217121356\",\"app_channel\":\"release\",\"locale\":\"en-US\",\"app_display_version\""
		":\"146.0.1\",\"architecture\":\"x86_64\",\"windows_build_number\":26100},\"metrics\":{\"string\":{\"newtab.homepage_category\":\"enabled\",\"newtab.newtab_category\":\"enabled\",\"newtab.locale\":\"en-US\",\"newtab_content.surface_id\":\"\"},\"boolean\":{\"pocket.enabled\":false,\"newtab.weather_enabled\":true,\"topsites.enabled\":false,\"newtab.highlights_enabled\":false,\"pocket.sponsored_stories_enabled\":true,\"topsites.sponsored_enabled\":false,\"newtab.search.enabled\":true},\"string_list\":"
		"{\"newtab.blocked_sponsors\":[]},\"quantity\":{\"topsites.rows\":1}}}", 
		LAST);

	web_custom_request("dns-query_4", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x01o\\x03pki\\x04goog\\x00\\x00\\x01\\x00\\x01\\x00\\x00)"
		"\\x10\\x00\\x00\\x00\\x00\\x00\\x00Y\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00M\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_custom_request("dns-query_5", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x01o\\x03pki\\x04goog\\x00\\x00\\x1C\\x00\\x01\\x00\\x00)"
		"\\x10\\x00\\x00\\x00\\x00\\x00\\x00Y\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00M\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=advantageonlineshopping.com");

	web_custom_request("720987b0-1501-45ff-b488-23cd828c51f1", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/nimbus-targeting-context/1/720987b0-1501-45ff-b488-23cd828c51f1", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":271,\"start_time\":\"2025-12-31T09:54:20.000-06:00\",\"end_time\":\"2025-12-31T09:56:20.451-06:00\",\"experiments\":{\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch"
		"\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\""
		"extra\":{\"type\":\"nimbus-nimbus\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\""
		"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout"
		"\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"build_date\":\"1970-01-01T00:00:00+00:00\","
		"\"first_run_date\":\"2025-01-18-06:00\",\"windows_build_number\":26100,\"locale\":\"en-US\",\"os\":\"Windows\",\"app_build\":\"20251217121356\",\"architecture\":\"x86_64\",\"os_version\":\"10.0\",\"app_display_version\":\"146.0.1\",\"app_channel\":\"release\",\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\"},\"metrics\":{\"string\":{\"nimbus_targeting_context.current_date\":\"Wed, 31 Dec 2025 15:56:17 GMT\",\"nimbus_targeting_context.version\":\"146.0.1\",\"nimbus_targeting_context.locale\""
		":\"en-US\",\"nimbus_targeting_context.distribution_id\":\"\",\"nimbus_targeting_context.region\":\"US\"},\"boolean\":{\"nimbus_targeting_context.is_msix\":false,\"nimbus_targeting_context.is_fx_a_enabled\":true,\"nimbus_targeting_context.is_first_startup\":false,\"nimbus_targeting_context.uses_firefox_sync\":false,\"nimbus_targeting_context.does_app_need_pin\":false,\"nimbus_targeting_context.has_active_enterprise_policies\":false,\"nimbus_targeting_context.is_fx_a_signed_in\":true,\""
		"nimbus_targeting_context.user_prefers_reduced_motion\":false,\"nimbus_targeting_context.has_pinned_tabs\":false,\"nimbus_targeting_context.is_default_browser\":true},\"quantity\":{\"nimbus_targeting_context.memory_mb\":32439,\"nimbus_targeting_context.arch_bits\":64,\"nimbus_targeting_context.firefox_version\":146,\"nimbus_targeting_context.profile_group_profile_count\":0,\"nimbus_targeting_context.addresses_saved\":5,\"nimbus_targeting_context.profile_age_created\":1708446624084,\""
		"nimbus_targeting_context.total_bookmarks_count\":18,\"nimbus_targeting_context.build_id\":1},\"uuid\":{\"legacy.telemetry.client_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\",\"legacy.telemetry.profile_group_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\"},\"object\":{\"nimbus_targeting_context.browser_settings\":{\"update\":{\"channel\":\"release\"}},\"nimbus_targeting_context.user_monthly_activity\":[{\"numberOfURLsVisited\":167,\"date\":\"2025-12-04\"},{\"numberOfURLsVisited\":106,\"date\":\""
		"2025-12-05\"},{\"numberOfURLsVisited\":59,\"date\":\"2025-12-06\"},{\"numberOfURLsVisited\":69,\"date\":\"2025-12-07\"},{\"numberOfURLsVisited\":203,\"date\":\"2025-12-08\"},{\"numberOfURLsVisited\":74,\"date\":\"2025-12-09\"},{\"numberOfURLsVisited\":220,\"date\":\"2025-12-10\"},{\"numberOfURLsVisited\":546,\"date\":\"2025-12-11\"},{\"numberOfURLsVisited\":101,\"date\":\"2025-12-12\"},{\"numberOfURLsVisited\":80,\"date\":\"2025-12-13\"},{\"numberOfURLsVisited\":87,\"date\":\"2025-12-14\"},{\""
		"numberOfURLsVisited\":353,\"date\":\"2025-12-15\"},{\"numberOfURLsVisited\":220,\"date\":\"2025-12-16\"},{\"numberOfURLsVisited\":99,\"date\":\"2025-12-17\"},{\"numberOfURLsVisited\":100,\"date\":\"2025-12-18\"},{\"numberOfURLsVisited\":227,\"date\":\"2025-12-19\"},{\"numberOfURLsVisited\":60,\"date\":\"2025-12-20\"},{\"numberOfURLsVisited\":280,\"date\":\"2025-12-21\"},{\"numberOfURLsVisited\":313,\"date\":\"2025-12-22\"},{\"numberOfURLsVisited\":237,\"date\":\"2025-12-23\"},{\""
		"numberOfURLsVisited\":60,\"date\":\"2025-12-24\"},{\"numberOfURLsVisited\":31,\"date\":\"2025-12-25\"},{\"numberOfURLsVisited\":449,\"date\":\"2025-12-26\"},{\"numberOfURLsVisited\":241,\"date\":\"2025-12-27\"},{\"numberOfURLsVisited\":159,\"date\":\"2025-12-28\"},{\"numberOfURLsVisited\":197,\"date\":\"2025-12-29\"},{\"numberOfURLsVisited\":279,\"date\":\"2025-12-30\"},{\"numberOfURLsVisited\":68,\"date\":\"2025-12-31\"}],\"nimbus_targeting_environment.user_set_prefs\":[\""
		"nimbus.profilesdatastoreservice.read.enabled\",\"nimbus.profilesdatastoreservice.sync.enabled\",\"browser.newtabpage.activity-stream.discoverystream.merino-provider.ohttp.enabled\",\"browser.newtabpage.activity-stream.telemetry.privatePing.enabled\",\"browser.newtabpage.activity-stream.telemetry.privatePing.redactNewtabPing.enabled\",\"browser.newtabpage.activity-stream.discoverystream.sections.personalization.enabled\",\""
		"browser.newtabpage.activity-stream.discoverystream.sections.customizeMenuPanel.enabled\",\"browser.newtabpage.trainhopAddon.version\",\"browser.startup.page\",\"signon.firefoxRelay.showToAllBrowsers\",\"pdfjs.enableAltText\",\"doh-rollout.mode\",\"doh-rollout.uri\",\"network.prefetch-next\",\"network.http.speculative-parallel-limit\",\"app.update.background.allowUpdatesForUnelevatedInstallations\",\"browser.toolbars.bookmarks.visibility\",\"browser.contextual-services.contextId.rotation-in-days\","
		"\"dom.ipc.processPriorityManager.backgroundUsesEcoQoS\"],\"nimbus_targeting_context.addons_info\":{\"addons\":[\"addons-search-detection@mozilla.com\",\"data-leak-blocker@mozilla.com\",\"firefox@betterttv.net\",\"formautofill@mozilla.org\",\"ipp-activator@mozilla.com\",\"jid1-NIfFY2CA8fy1tg@jetpack\",\"moz-addon-prod@7tv.app\",\"newtab@mozilla.org\",\"pictureinpicture@mozilla.org\",\"treestyletab@piro.sakura.ne.jp\",\"uBlock0@raymondhill.net\",\"video-bg-play@timdream.org\",\""
		"webcompat@mozilla.org\",\"{60B7679C-BED9-11E5-998D-8526BB8E7F8B}\",\"{f1f7b448-d666-46c6-9dfa-3ee4c5c83578}\"],\"hasInstalledAddons\":true},\"nimbus_targeting_context.os\":{\"isLinux\":false,\"isMac\":false,\"windowsBuildNumber\":26100,\"windowsVersion\":10},\"nimbus_targeting_context.enrollments_map\":[{\"experimentSlug\":\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"branchSlug\":\"treatment-a-tab-switching-copy\"},{\"experimentSlug\":\""
		"account-adoption-app-menu-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"account-adoption-callout-credit-cards-and-addresses-corrected-copy\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"account-adoption-callout-passwords-rollout\",\"branchSlug\":\"treatment-e\"},{\"experimentSlug\":\"account-adoption-pxi-menu-fx141-fx142\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"account-adoption-pxi-menu-rollout-v2\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\""
		"address-autofill-desktop-pref-release-rollout\",\"branchSlug\":\"enable-address-autofill\"},{\"experimentSlug\":\"address-bar-update-launch-extention\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"address-bar-update-rollout-v1\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout\",\"branchSlug\":\"treatment-a-callout-badge\"},{\"experimentSlug\":\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\",\""
		"branchSlug\":\"treatment-a-callout-badge\"},{\"experimentSlug\":\"ai-chatbot-rollout-in-the-old-sidebar\",\"branchSlug\":\"treatment-d\"},{\"experimentSlug\":\"ai-tab-groups-experiment-with-opt-in-100-population\",\"branchSlug\":\"smart-tab-groups\"},{\"experimentSlug\":\"backgroundupdate-enable-unelevated-installations-rollout-3-release\",\"branchSlug\":\"enabled\"},{\"experimentSlug\":\"chatbot-sticky-cta\",\"branchSlug\":\"control-no-sticky-cta\"},{\"experimentSlug\":\"chips-rollout-to-firefox"
		"\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"context-id-rotation-every-15-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"context-id-rotation-every-3-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"context-id-rotation-every-30-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"context-id-rotation-every-7-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"branchSlug\":\""
		"treatment-a-tab-switching-copy\"},{\"experimentSlug\":\"crlite-rollout\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"custom-wallpapers-message-rollout-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"custom-wallpapers-no-message-rollout-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"default-ui-experiment-logo-in-corner-rollout\",\"branchSlug\":\"logo-in-corner\"},{\"experimentSlug\":\"deprecate-ipaddrany-rollout-for-release\",\"branchSlug\":\"control\"},{\""
		"experimentSlug\":\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\",\"branchSlug\":\"next-sign-up-modal-cta\"},{\"experimentSlug\":\"device-migration-accounts-toolbar-icon\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"device-migration-accounts-toolbar-icon-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"disable-cookie-store-api-in-firefox-136\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"disable-enrollment-status-telemetry-for-firefox-desktop\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"downsample-uptakeremotecontent-events\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"enable-newtab-telemetry-by-time-zone-offset\",\"branchSlug\":\"branch\"},{\"experimentSlug\":\"enable-nimbus-sql-datastore\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"enable-nimbus-unenrollment-synchronization\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"encrypted-client-hello-fallback-mechanism\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\",\"branchSlug\":\"enforce\"},{\"experimentSlug\":\"etp-strict-message-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\",\"branchSlug\":\"treatment-fast-udp\"},{\"experimentSlug\":\""
		"firefox-backup-feature-gradual-rollout\",\"branchSlug\":\"treatment\"},{\"experimentSlug\":\"flip-the-pref-for-the-mfcdm-origin-fliter\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"fox-doodle-and-tail-fox-2025-v2-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"fox-doodle-multi-action-cta-2025-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"fx-accounts-ping-release-rollout-2\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"fx-view-discoverability-2025-rollout\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\"hide-descriptions-on-newtab-articles-fix-us-rollout\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"hide-descriptions-on-newtab-articles-us-rollout\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"higher-placement-phase-3-rollout\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"https-upgrades-fallback-time-bugfix\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\""
		"link-previews-all-channel-rollout-with-onboarding\",\"branchSlug\":\"long-press-preview\"},{\"experimentSlug\":\"link-previews-all-channel-rollout-without-onboarding\",\"branchSlug\":\"long-press-preview\"},{\"experimentSlug\":\"link-previews-mvp-long-press-preview-rollout\",\"branchSlug\":\"long-press-preview\"},{\"experimentSlug\":\"login-status-advisory-callout-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"long-term-holdback-2025h1-growth-desktop\",\"branchSlug\":\"delivery\"}"
		",{\"experimentSlug\":\"mozilla-foundation-donation-promotion-moments-page\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\",\"branchSlug\":\"treatment-d\"},{\"experimentSlug\":\"multiple-profile-switching-feature-v1-rollout\",\"branchSlug\":\"treatment-a-multi-profiles\"},{\"experimentSlug\":\"multiple-profile-switching-rollout-v2\",\"branchSlug\":\"treatment-a-multi-profiles\"},{\"experimentSlug\":\""
		"new-alt-text-flow-and-generation-in-pdfs-for-en-locales-outside-of-eu-pre-137\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\"new-sync-setup-flow\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"new-tab-145020250919173227-to-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"new-tab-145120251009134757-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"new-tab-147020251114194929-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\""
		"new-tab-14802025121163751-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"new-tab-automated-personalization-local-ranking-2\",\"branchSlug\":\"local-and-server\"},{\"experimentSlug\":\"new-tab-content-card-ui-updates\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"ohttp-merino-content-recs-rollout\",\"branchSlug\":\"enable-ohttp\"},{\"experimentSlug\":\"one-click-sponsored-settings\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"pdf-annotations-highlight-treatment-b-rollout"
		"\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\"pdf-annotations-signatures-ab-experiment\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"performance-metric-calibration-release-134\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"perplexity-secondary-search-initial-part2\",\"branchSlug\":\"try-with-cta\"},{\"experimentSlug\":\"pin-frequently-used-websites-143-promo-rollout-all-locales\",\"branchSlug\":\"rollout-branch\"},{\"experimentSlug\":\"private-window-visual-refresh-rollout\","
		"\"branchSlug\":\"control\"},{\"experimentSlug\":\"product-insight-telemetry-via-server-knobs-rollout-release\",\"branchSlug\":\"control-rollout\"},{\"experimentSlug\":\"refactor-new-tab-telemetry-rollout\",\"branchSlug\":\"treatment\"},{\"experimentSlug\":\"report-this-ad\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\",\"branchSlug\":\"sign-in-with-call-out\"},{\"experimentSlug\":\"search-result-de-duplication\",\"branchSlug\""
		":\"de-duplication\"},{\"experimentSlug\":\"sections-rollout-us\",\"branchSlug\":\"sections\"},{\"experimentSlug\":\"shortcuts-visual-refresh-shortcuts-redesign-rollout\",\"branchSlug\":\"shortcuts-redesign\"},{\"experimentSlug\":\"simplified-chatbot-onboarding-short-copy-1-step-rollout\",\"branchSlug\":\"treatment-c-short-copy-1-step\"},{\"experimentSlug\":\"smart-shortcuts-v3-sticky\",\"branchSlug\":\"very-sticky-thompson\"},{\"experimentSlug\":\"smart-tab-groups-rollout\",\"branchSlug\":\""
		"smart-tab-groups\"},{\"experimentSlug\":\"spoc-placement-second-row\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"spoc-positions-and-placements-rollout\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"storage-access-heuristic-restriction-rollout\",\"branchSlug\":\"treatment-branch\"},{\"experimentSlug\":\"store-new-tab-content-interactions-locally\",\"branchSlug\":\"store-events\"},{\"experimentSlug\":\"tab-groups-50-rollout-no-onboarding\",\"branchSlug\":\"tab-groups\"},{\""
		"experimentSlug\":\"tab-groups-promotional-onboarding\",\"branchSlug\":\"onboarding\"},{\"experimentSlug\":\"taskbar-tabs-discovery-en-rollout\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"taskbar-tabs-discovery-global-rollout\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"unified-search-button-callout-rollout-v1\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"us-review-checker-131-137-continuity-rollout\",\"branchSlug\":\"rollout-treatment\"},{\"experimentSlug\":\"visual-card-updates\",\"branchSlug\":\"updated\"},{\"experimentSlug\":\"visual-search-rollout\",\"branchSlug\":\"google-lens-rollout\"},{\"experimentSlug\":\"whats-new-page-136\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"windows-ui-automation-release-rollout\",\"branchSlug\":\"rollout\"}],\"nimbus_targeting_environment.pref_values\":{\""
		"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__addons\":true,\"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__features\":true,\"browser__newtabpage__activity_stream__feeds__section__highlights\":false,\"browser__newtabpage__activity_stream__feeds__section__topstories\":false,\"browser__newtabpage__activity_stream__feeds__topsites\":false,\"browser__newtabpage__activity_stream__showSearch\":true,\"browser__newtabpage__activity_stream__showSponsoredTopSites\":false,"
		"\"browser__newtabpage__enabled\":true,\"browser__startup__page\":3,\"browser__toolbars__bookmarks__visibility\":\"always\",\"browser__urlbar__lastUrlbarSearchSeconds\":1767194397,\"browser__urlbar__quicksuggest__dataCollection__enabled\":false,\"browser__urlbar__showSearchSuggestionsFirst\":true,\"browser__urlbar__suggest__quicksuggest__sponsored\":false,\"media__videocontrols__picture_in_picture__enabled\":true,\"media__videocontrols__picture_in_picture__video_toggle__enabled\":true,\""
		"media__videocontrols__picture_in_picture__video_toggle__has_used\":true,\"network__trr__mode\":0,\"security__sandbox__content__level\":8,\"termsofuse__acceptedDate\":\"0\",\"trailhead__firstrun__didSeeAboutWelcome\":true,\"nimbus__qa__pref_1\":\"default\",\"nimbus__qa__pref_2\":\"default\"},\"nimbus_targeting_context.active_rollouts\":[\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"account-adoption-pxi-menu-rollout-v2\",\""
		"address-autofill-desktop-pref-release-rollout\",\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\",\"backgroundupdate-enable-unelevated-installations-rollout-3-release\",\"context-id-rotation-every-3-days\",\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\",\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\",\"downsample-uptakeremotecontent-events\",\"enable-newtab-telemetry-by-time-zone-offset\",\""
		"enable-nimbus-unenrollment-synchronization\",\"encrypted-client-hello-fallback-mechanism\",\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\",\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\",\"firefox-backup-feature-gradual-rollout\",\"fox-doodle-multi-action-cta-2025-rollout\",\"fx-accounts-ping-release-rollout-2\",\"link-previews-all-channel-rollout-with-onboarding\",\"link-previews-all-channel-rollout-without-onboarding\",\""
		"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\",\"multiple-profile-switching-rollout-v2\",\"new-tab-14802025121163751-to-release\",\"ohttp-merino-content-recs-rollout\",\"pdf-annotations-highlight-treatment-b-rollout\",\"pin-frequently-used-websites-143-promo-rollout-all-locales\",\"private-window-visual-refresh-rollout\",\"product-insight-telemetry-via-server-knobs-rollout-release\",\"refactor-new-tab-telemetry-rollout\",\""
		"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\",\"sections-rollout-us\",\"smart-tab-groups-rollout\",\"store-new-tab-content-interactions-locally\",\"taskbar-tabs-discovery-global-rollout\",\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\",\"visual-card-updates\",\"visual-search-rollout\",\"windows-ui-automation-release-rollout\"],\"nimbus_targeting_context.active_experiments\":[\"long-term-holdback-2025h1-growth-desktop\",\""
		"mozilla-foundation-donation-promotion-moments-page\"],\"nimbus_targeting_context.attribution_data\":{},\"nimbus_targeting_context.home_page_settings\":{\"isCustomUrl\":false,\"isDefault\":true,\"isLocked\":false,\"isWebExt\":false},\"nimbus_targeting_context.is_default_handler\":{\"html\":true,\"pdf\":false},\"nimbus_targeting_context.primary_resolution\":{\"height\":816,\"width\":1382},\"nimbus_targeting_context.default_pdf_handler\":{\"knownBrowser\":false,\"registered\":true}}}}", 
		EXTRARES, 
		"Url=https://advantageonlineshopping.com/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=https://advantageonlineshopping.com/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	web_url("ALL", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("130fe89b-69e0-4de8-b3de-e6110d69c0e4", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/130fe89b-69e0-4de8-b3de-e6110d69c0e4", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":5687,\"start_time\":\"2025-12-31T09:54:20.000-06:00\",\"end_time\":\"2025-12-31T09:56:20.639-06:00\",\"reason\":\"active\",\"experiments\":{\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},"
		"\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{"
		"\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\""
		"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\""
		"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview"
		"\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\""
		"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"first_run_date\":\""
		"2025-01-18-06:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"windows_build_number\":26100,\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\",\"locale\":\"en-US\",\"app_channel\":\"release\",\"os_version\":\"10.0\",\"app_build\":\"20251217121356\",\"app_display_version\":\"146.0.1\",\"architecture\":\"x86_64\",\"os\":\"Windows\"},\"metrics\":{\"string\":{\"usage.distribution_id\":\"default\",\"startup.profile_selection_reason\":\"default\"},\"uuid\":{\"legacy.telemetry.client_id\":\""
		"b189d8eb-276a-459d-b5a0-e6f121498a13\",\"legacy.telemetry.profile_group_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\"},\"boolean\":{\"usage.is_default_browser\":true},\"object\":{\"glean.attribution.ext\":{\"dlsource\":\"mozillaci\"},\"glean.distribution.ext\":{}},\"labeled_counter\":{\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}},\"counter\":{\"browser.engagement.active_ticks\":7,\"browser.engagement.uri_count\":4}}}", 
		LAST);

	web_custom_request("we2_2", 
		"URL=http://o.pki.goog/we2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\x02\\x99Zv\\xD5\\x04L\\xFE\\xB0\\x98\\xB7\\x98\\x81IGz\\x9F\\xACg&\\x04\\x14\\xA0\\xAF\\xD5\\xF1\\xAD\\x0486J\\xE1\\x8A}Z\\xF50\\xAF\\x91\\xA0Q\\xA1\\x02\\x10x{\\x9A\rM\\xA0\\xEA\\x90\n\\xA3\\x17\\xD2\\xC2j\\x08\\xBF", 
		LAST);

	web_custom_request("8c296665-1caf-4f77-8432-78f49885b3ae", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/fx-accounts/1/8c296665-1caf-4f77-8432-78f49885b3ae", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":26,\"start_time\":\"2025-12-28T16:57:03.000-06:00\",\"end_time\":\"2025-12-31T09:56:20.654-06:00\",\"reason\":\"active\",\"experiments\":{\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\""
		":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}"
		"},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\""
		"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\""
		"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2025-01-18-06:00\",\"app_build\":\"20251217121356\",\"app_channel\":\"release\",\"app_display_version\":\"146.0.1\",\"os_version\":\"10.0\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"os\":\"Windows\",\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\",\"windows_build_number\":26100},\"metrics\":{\"string\":{\""
		"client_association.uid\":\"0294e33c230a4a6fb29daeff3cf1ec7f\"},\"uuid\":{\"client_association.legacy_client_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\"}}}", 
		LAST);

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=https://advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("6aef051b-1acd-4996-9b8a-a66a65f0bd45", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/usage-reporting/1/6aef051b-1acd-4996-9b8a-a66a65f0bd45", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"metrics\":{\"boolean\":{\"usage.is_default_browser\":true,\"usage.windows_backup_enabled\":true},\"quantity\":{\"usage.windows_user_profile_age_in_days\":311,\"usage.windows_build_number\":26100},\"counter\":{\"browser.engagement.uri_count\":4,\"browser.engagement.active_ticks\":7},\"string\":{\"usage.app_display_version\":\"146.0.1\",\"usage.os\":\"WINNT\",\"usage.distribution_id\":\"default\",\"usage.os_version\":\"10.0\",\"usage.app_build\":\"20251217121356\",\"usage.app_channel\":\""
		"release\"},\"datetime\":{\"usage.first_run_date\":\"2024-02-20-06:00\"},\"uuid\":{\"usage.profile_id\":\"d04da519-03fa-4b31-a66e-b806e5bfa256\",\"usage.profile_group_id\":\"d0a0b3f7-f386-471c-a903-784ea9b2e5a4\"}}}", 
		LAST);

	web_custom_request("832497e1-bc7f-4388-abd3-23f86d37f345", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/832497e1-bc7f-4388-abd3-23f86d37f345", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":36,\"start_time\":\"2025-12-31T09:54:20.000-06:00\",\"end_time\":\"2025-12-31T09:56:20.692-06:00\",\"reason\":\"pre_init\",\"experiments\":{\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},"
		"\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\""
		"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\""
		"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}"
		",\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"client_id\":\""
		"239171f7-8dd5-4379-b459-d37192315b39\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"app_display_version\":\"146.0.1\",\"os_version\":\"10.0\",\"os\":\"Windows\",\"app_build\":\"20251217121356\",\"app_channel\":\"release\",\"windows_build_number\":26100,\"first_run_date\":\"2025-01-18-06:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\"},\"metrics\":{\"object\":{\"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\""
		":1767196564,\"file_count\":1,\"files\":[{\"file_name\":\"data.safe.bin\",\"file_created\":1767196563,\"file_modified\":1767196564,\"file_size\":206695}]},{\"dir_name\":\"events\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767196458,\"file_count\":3,\"files\":[{\"file_name\":\"bounce-tracking-protection\",\"file_created\":1767155078,\"file_modified\":1767196457,\"file_size\":630},{\"file_name\":\"events\",\"file_created\":1767193504,\"file_modified\":1767196563,\"file_size\""
		":4459},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1718837138,\"file_modified\":1738769668,\"file_size\":931}]},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767196563,\"file_count\":1,\"files\":[{\"file_name\":\"7a6eb5fc-6000-46de-b18e-b2833f0e3926\",\"file_created\":1767196563,\"file_modified\":1767196563,\"file_size\":10438}]}],\"glean.database.load_sizes\":{\"new\":206695,\"open\":206695,\"post_open\":206695,\"post_open_user\""
		":206695,\"post_load_ping_lifetime_data\":206695,\"user_records\":66,\"ping_records\":1011,\"application_records\":311,\"ping_memory_records\":1011}},\"timing_distribution\":{\"glean.validation.shutdown_wait\":{\"values\":{\"1923096\":1},\"sum\":2027100},\"glean.upload.send_success\":{\"values\":{\"134217728\":4,\"189812531\":1,\"225726412\":2,\"319225354\":2,\"159612677\":3,\"103496016\":1,\"112863206\":1,\"146365470\":4,\"6623745058\":1,\"3037000499\":1,\"174058858\":1,\"94906265\":1,\"292730940"
		"\":1},\"sum\":13860500000},\"glean.upload.send_failure\":{\"values\":{\"14107900\":1,\"19951584\":1,\"225726412\":1,\"10215211334\":1},\"sum\":10878427300},\"glean.validation.shutdown_dispatcher_wait\":{\"values\":{\"2965820\":1},\"sum\":3061400}},\"uuid\":{\"legacy.telemetry.client_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\",\"legacy.telemetry.profile_group_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\"},\"counter\":{\"glean.upload.pending_pings\":1,\"glean.health.init_count\":19},\""
		"labeled_counter\":{\"glean.upload.ping_upload_failure\":{\"recoverable\":4},\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}},\"memory_distribution\":{\"glean.database.size\":{\"values\":{\"202140\":1},\"sum\":206695},\"glean.upload.pending_pings_directory_size\":{\"values\":{\"10173\":1},\"sum\":10240}}}}", 
		LAST);

	web_custom_request("2273db8f-a159-4011-b99e-dcd3667054e3", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/2273db8f-a159-4011-b99e-dcd3667054e3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":37,\"start_time\":\"2025-12-31T09:56:20.000-06:00\",\"end_time\":\"2025-12-31T09:56:20.726-06:00\",\"reason\":\"post_init\",\"experiments\":{\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\""
		"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout"
		"\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\""
		":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\",\"app_display_version\":\"146.0.1\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"app_channel\":\"release\",\"app_build\":\"20251217121356\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2025-01-18-06:00\",\"windows_build_number\":26100},\"metrics\":{\"object\":{\"glean.health.data_directory_info\":[{\""
		"dir_name\":\"db\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767196580,\"file_count\":1,\"files\":[{\"file_name\":\"data.safe.bin\",\"file_created\":1767196579,\"file_modified\":1767196580,\"file_size\":194391}]},{\"dir_name\":\"events\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767196579,\"file_count\":3,\"files\":[{\"file_name\":\"bounce-tracking-protection\",\"file_created\":1767155078,\"file_modified\":1767196457,\"file_size\":630},{\"file_name\":\""
		"events\",\"file_created\":1767193504,\"file_modified\":1767196579,\"file_size\":0},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1718837138,\"file_modified\":1738769668,\"file_size\":931}]},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767196580,\"file_count\":8,\"files\":[{\"file_name\":\"130fe89b-69e0-4de8-b3de-e6110d69c0e4\",\"file_created\":1767196580,\"file_modified\":1767196580,\"file_size\":5472},{\"file_name\":\""
		"4d13050d-e1a2-4f57-abcf-4405e753dd73\",\"file_created\":1767196580,\"file_modified\":1767196580,\"file_size\":1122},{\"file_name\":\"6aef051b-1acd-4996-9b8a-a66a65f0bd45\",\"file_created\":1767196580,\"file_modified\":1767196580,\"file_size\":828},{\"file_name\":\"720987b0-1501-45ff-b488-23cd828c51f1\",\"file_created\":1767196580,\"file_modified\":1767196580,\"file_size\":22171},{\"file_name\":\"7a6eb5fc-6000-46de-b18e-b2833f0e3926\",\"file_created\":1767196563,\"file_modified\":1767196563,\""
		"file_size\":10438},{\"file_name\":\"832497e1-bc7f-4388-abd3-23f86d37f345\",\"file_created\":1767196580,\"file_modified\":1767196580,\"file_size\":7157},{\"file_name\":\"8c296665-1caf-4f77-8432-78f49885b3ae\",\"file_created\":1767196580,\"file_modified\":1767196580,\"file_size\":5097},{\"file_name\":\"c81b91b7-eb0b-4645-b365-9cae1a394512\",\"file_created\":1767196579,\"file_modified\":1767196579,\"file_size\":10622}]}]},\"uuid\":{\"legacy.telemetry.profile_group_id\":\""
		"b189d8eb-276a-459d-b5a0-e6f121498a13\",\"legacy.telemetry.client_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\"},\"counter\":{\"glean.health.init_count\":19}}}", 
		LAST);

	web_custom_request("dns-query_6", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x04prod\rohttp-gateway\\x04prod\\x0Bwebservices\\x06mozgcp\\x03net\\x00\\x00\\x1C\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x005\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00)\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_custom_request("dns-query_7", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x04prod\rohttp-gateway\\x04prod\\x0Bwebservices\\x06mozgcp\\x03net\\x00\\x00\\x01\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x005\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00)\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_url("categories", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("dns-query_8", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\rmozilla-ohttp\\x0Bfastly-edge\\x03com\\x00\\x00\\x1C\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00F\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00"
		":\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_custom_request("dns-query_9", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\rmozilla-ohttp\\x0Bfastly-edge\\x03com\\x00\\x00\\x01\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00F\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00"
		":\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	lr_think_time(5);

	web_custom_request("mozilla-ohttp.fastly-edge.com", 
		"URL=https://mozilla-ohttp.fastly-edge.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=message/ohttp-res", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=message/ohttp-req", 
		"BodyBinary=\\x80\\x00 \\x00\\x01\\x00\\x01\\xFC\\xA1D\\xD3\\xAF\\xF7\\xA9o\\xD5\\xC9\\xF4n\\xE1I\\xDBu\\xAA\\x08(\\xC9b\\xC5\\x06\\xCD`\\x81d\\\\<i\\xD95\\x84\\x1C\\x8C\\x99\\xD8S\\xA9@\\xEE\\xF77x\\x18\\xA0H\\x85,\\x97\\xAFc\\xD0x\\xEF\\xE2e \\xDBt\\xFFeBG\\xA2\\x7F\\xA3\\x82V\\xE2\\x9BP\\x9Db\\x05\\xD6zY\\xCA\\xFF\\xE4H\n\\x10\\x87 K\\xAE\\xCF\\xDD\\xD5!\\xD4\\x15E\\xB9\\xCF\\xD8\\x99b\\xBC$ON\\xAE\\x10{;\\xF5|;\\\\\\x0F^\\xF1.~5\\x07\\xDE\\x827_73|\\xC4\\xCDW^"
		"\\xD1VA\\x10\\x91\\x81\\x88\\xB5\\x93/f\\xF32\\xE8\\x87\\x9D/\\xF1\\xF8\\xD1\\xE3\\xAB\\x11(8\\xFBHv\\xC0x5w\\x8E\\xEE\\x832\\x7F_\\xCA\\xFAg\\xD3H\\xFE\\x88\\x06\\xD3\\xD6\\xD0\\xAD\\xAF\\x01\\xEDC\\xBD\\xF82\\x1E\\x9F\n\\xDC\\xF4\\xAE@\\xE3G{\\xC7k\\xBD?\\xB5\\x16\\xF4\\xECJ(BJ\\x10\\xFA\\xD8P\\xDF\\x84\\x01*N\\x81\\x99\\xC2\\xBB\\xFD\\xEF!r)\\x1A\\xD1\\xF1\\xADmV\\xD8K\\x06\\xC6O\\x1F\\xAB[iA\\x92\\xE3I9\\xBFlPfR:\\x80\\x1F\\x1A4g\\xBC\\xBA\\x1C\\xB2i\r\\x1B\\x88$P\\xE6\\xDA;"
		":MM\\xD7\\xBD\\xA3K\\xDEN\\x8C%\\xAE\\x8B[I`m\\x89\\x0EZ\\xA6\\xF6\\xF6V4\\x84o\\xF1\\xAF6\\x81}\\x94k\\x94\\x1A\\xBC\\xFE\\xA1\\xBBnb\\xF0r\\xAF-\\xB3\\xD3\\xF0m#\\xDE\\x02X\\x8ES\\x98+T\\xF4z\t\\xB4\\xF4>\\x1B\\x00+\\x879s\\xEB\\x13\\xCF]\\x8F\\xF8\\xC4]>..\\xCB7\\xAB\\x14\\xEA\\x8F\\xA6S4\\x92\\x8BC\\xD5\\x0F{\\xAD\\xE0H\\xD5\\x84^\\xEB\\xFD\\xF3p\\xD1+9k\\xAA\\x1F\\xBE&\\xD8kA\\xB8(\\xFE\\x9A\\xB1\\x8B\\xA7\\x86\\xC0\\xF8\\xEB\\x08\\x03(\\x10\\x8F\\xAE\\xA9\\xF0\\xA1\\x99/"
		"\\xF9\\x85\\x97n6Bu6\\x93+\\xEC\\xDF\\xE9\\xB1>\\x84q\\xE3\\x02`\\x86\\x05mn\\x86\\x86\\x91=\\xBD=\\xED\\xF2\\xA1\\xF6\\x96g*3\\xDA\\x0FY\\xFF\\x04\\xCFV\\xB8\\xE6\\x81-\\xE1\\x02\\x19\\xA0\\xB7\\x19\\x1BgQK\\xEA\\xCD=\\xEBb\r\\xAF\\x93X\\xFF\\x1E\\xC6\\xE2\\xF0*\\x89/\\x7FB\\x12y`\\x9C\\x80JX\\xD7\\xAD\\xA6\\xC3\\x12\\xC6\\xA9\\xCF\\xE3\\x9D\\xC7{\\xFBPzy\\xBE\\x8D", 
		LAST);

	web_custom_request("c81b91b7-eb0b-4645-b365-9cae1a394512", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/c81b91b7-eb0b-4645-b365-9cae1a394512", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":3387,\"start_time\":\"2025-12-31T09:54:17.000-06:00\",\"end_time\":\"2025-12-31T09:56:19.401-06:00\",\"reason\":\"startup\",\"experiments\":{\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\""
		"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":"
		"{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\""
		"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\""
		"telemetry_sdk_build\":\"66.1.2\",\"windows_build_number\":26100,\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\",\"app_build\":\"20251217121356\",\"os_version\":\"10.0\",\"locale\":\"en-US\",\"architecture\":\"x86_64\",\"app_display_version\":\"146.0.1\",\"app_channel\":\"release\",\"os\":\"Windows\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2025-01-18-06:00\"},\"metrics\":{\"object\":{\"glean.attribution.ext\":{\"dlsource\":\"mozillaci\"},\"glean.distribution.ext\":{"
		"}},\"quantity\":{\"browser.engagement.max_concurrent_tab_count\":37,\"urlbar.pref_max_results\":10},\"uuid\":{\"legacy.telemetry.client_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\",\"legacy.telemetry.profile_group_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\"},\"string\":{\"search.engine.default.display_name\":\"Google\",\"search.engine.default.load_path\":\"[app]google\",\"search.engine.private.load_path\":\"\",\"search.engine.default.partner_code\":\"firefox-b-1-d\",\""
		"search.engine.default.provider_id\":\"google\",\"search.engine.private.display_name\":\"\",\"search.engine.private.provider_id\":\"\",\"search.engine.private.partner_code\":\"\",\"region.home_region\":\"US\"},\"counter\":{\"browser.engagement.active_ticks\":8,\"browser.engagement.uri_count\":4},\"boolean\":{\"search.engine.private.overridden_by_third_party\":false,\"policies.is_enterprise\":false,\"urlbar.pref_suggest_sponsored\":false,\"search.engine.default.overridden_by_third_party\":false,\""
		"usage.is_default_browser\":true,\"urlbar.pref_suggest_online_available\":false,\"urlbar.pref_suggest_online_enabled\":true,\"urlbar.pref_suggest_topsites\":true,\"urlbar.pref_suggest_all\":false},\"url\":{\"search.engine.default.submission_url\":\"https://www.google.com/search?client=firefox-b-1-d&q=\",\"search.engine.private.submission_url\":\"blank:\"}},\"events\":[{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"can_load\":\"true\",\""
		"glean_timestamp\":\"1767196445148\",\"path_key\":\"clean\",\"loadfail_reason\":\"N/A\"}},{\"timestamp\":1,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"path_key\":\"clean\",\"can_load\":\"true\",\"loadfail_reason\":\"N/A\",\"glean_timestamp\":\"1767196445149\"}},{\"timestamp\":9,\"category\":\"session_restore\",\"name\":\"shutdown_success_session_startup\",\"extra\":{\"glean_timestamp\":\"1767196445157\",\"shutdown_ok\":\"false\",\"shutdown_reason\":"
		"\"N/A\"}},{\"timestamp\":4714,\"category\":\"webcompatreporting\",\"name\":\"reason_dropdown\",\"extra\":{\"glean_timestamp\":\"1767196449862\",\"setting\":\"required\"}},{\"timestamp\":4998,\"category\":\"extension\",\"name\":\"sidebar_toggle\",\"extra\":{\"addon_name\":\"Tree Style Tab\",\"opened\":\"true\",\"addon_id\":\"treestyletab@piro.sakura.ne.jp\",\"glean_timestamp\":\"1767196450146\",\"version\":\"old\"}},{\"timestamp\":5401,\"category\":\"extension\",\"name\":\"sidebar_toggle\",\"extra"
		"\":{\"glean_timestamp\":\"1767196450549\",\"addon_name\":\"Tree Style Tab\",\"opened\":\"true\",\"version\":\"old\",\"addon_id\":\"treestyletab@piro.sakura.ne.jp\"}},{\"timestamp\":7255,\"category\":\"nimbus_events\",\"name\":\"startup_database_consistency\",\"extra\":{\"total_db_count\":\"100\",\"store_active_count\":\"39\",\"primary\":\"database\",\"total_store_count\":\"100\",\"trigger\":\"startup\",\"db_active_count\":\"39\",\"glean_timestamp\":\"1767196452403\"}},{\"timestamp\":7861,\""
		"category\":\"doh\",\"name\":\"state_enabled\",\"extra\":{\"value\":\"null\",\"glean_timestamp\":\"1767196453009\"}},{\"timestamp\":7862,\"category\":\"doh\",\"name\":\"evaluate_v2_heuristics\",\"extra\":{\"enterprise\":\"\",\"filtering\":\"\",\"glean_timestamp\":\"1767196453010\",\"value\":\"enable_doh\",\"steeredProvider\":\"\",\"evaluateReason\":\"startup\",\"canaries\":\"\",\"captiveState\":\"not_captive\",\"platform\":\"\",\"networkID\":\"uFX9e2Fg8yTgSKD67hWgRW3Roq/t9zjZ4vnYOel9COI=\"}},{\""
		"timestamp\":9735,\"category\":\"normandy\",\"name\":\"enroll_failed_nimbus_experiment\",\"extra\":{\"value\":\"smart-tab-groups-rollout-beta\",\"reason\":\"feature-conflict\",\"glean_timestamp\":\"1767196454883\"}},{\"timestamp\":9735,\"category\":\"nimbus_events\",\"name\":\"enroll_failed\",\"extra\":{\"reason\":\"feature-conflict\",\"glean_timestamp\":\"1767196454883\",\"experiment\":\"smart-tab-groups-rollout-beta\"}},{\"timestamp\":9799,\"category\":\"normandy\",\"name\":\""
		"enroll_failed_nimbus_experiment\",\"extra\":{\"glean_timestamp\":\"1767196454947\",\"reason\":\"feature-conflict\",\"value\":\"account-spotlight-modal-global-rollout-v3\"}},{\"timestamp\":9799,\"category\":\"nimbus_events\",\"name\":\"enroll_failed\",\"extra\":{\"experiment\":\"account-spotlight-modal-global-rollout-v3\",\"reason\":\"feature-conflict\",\"glean_timestamp\":\"1767196454947\"}},{\"timestamp\":10277,\"category\":\"extensions.data\",\"name\":\"sync_usage_quotas\",\"extra\":{\"backend\""
		":\"rust\",\"items_over_quota\":\"0\",\"items_count\":\"8\",\"total_size_bytes\":\"780\",\"addon_id\":\"treestyletab@piro.sakura.ne.jp\",\"glean_timestamp\":\"1767196455425\"}},{\"timestamp\":10571,\"category\":\"nimbus_events\",\"name\":\"is_ready\",\"extra\":{\"glean_timestamp\":\"1767196455719\"}},{\"timestamp\":10610,\"category\":\"containers\",\"name\":\"container_profile_loaded\",\"extra\":{\"containers\":\"4\",\"glean_timestamp\":\"1767196455758\"}},{\"timestamp\":11312,\"category\":\""
		"upgrade_dialog\",\"name\":\"trigger_reason\",\"extra\":{\"glean_timestamp\":\"1767196456460\",\"value\":\"not-major\"}},{\"timestamp\":12793,\"category\":\"normandy\",\"name\":\"expose_nimbus_experiment\",\"extra\":{\"branchSlug\":\"rollout\",\"featureId\":\"newtabTrainhopAddon\",\"glean_timestamp\":\"1767196457941\",\"value\":\"new-tab-14802025121163751-to-release\"}},{\"timestamp\":12793,\"category\":\"nimbus_events\",\"name\":\"exposure\",\"extra\":{\"branch\":\"rollout\",\"feature_id\":\""
		"newtabTrainhopAddon\",\"glean_timestamp\":\"1767196457941\",\"experiment\":\"new-tab-14802025121163751-to-release\"}},{\"timestamp\":15553,\"category\":\"extension\",\"name\":\"sidebar_toggle\",\"extra\":{\"version\":\"old\",\"addon_id\":\"treestyletab@piro.sakura.ne.jp\",\"glean_timestamp\":\"1767196460701\",\"addon_name\":\"Tree Style Tab\",\"opened\":\"true\"}},{\"timestamp\":25878,\"category\":\"network.dns\",\"name\":\"trr_confirmation_context\",\"extra\":{\"captivePortal\":\"1\",\"networkID"
		"\":\"cqdrzka0A4gZnlTim9HOOirEAmI=\",\"attemptCount\":\"3\",\"glean_timestamp\":\"1767196471026\",\"results\":\"tt+\",\"time\":\"18331.166200\",\"trigger\":\"pref-change\",\"contextReason\":\"pref-change\",\"value\":\"2\"}},{\"timestamp\":118742,\"category\":\"doh\",\"name\":\"state_shutdown\",\"extra\":{\"value\":\"null\",\"glean_timestamp\":\"1767196563890\"}}]}", 
		LAST);

	web_add_cookie("_ga_TBPYED8WSW=GS2.1.s1767196598$o1$g0$t1767196598$j60$l0$h0; DOMAIN=advantageonlineshopping.com");

	web_add_cookie("_ga=GA1.1.1086294473.1767196598; DOMAIN=advantageonlineshopping.com");

	web_url("search", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_url("popularProducts.json", 
		"URL=https://advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=https://advantageonlineshopping.com/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/images/arrow_right.png", "Referer=https://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		LAST);

	web_url("products", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/categories/4/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attributes", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=https://advantageonlineshopping.com/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_url("24", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/products/24", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_url("all_data", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products_2", 
		"URL=https://advantageonlineshopping.com/catalog/api/v1/categories/4/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL=https://advantageonlineshopping.com/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%7B%22productId%22%3A24%2C%22imageUrl%22%3A%224600%22%2C%22productName%22%3A%22HP%20Roar%20Mini%20Wireless%20Speaker%22%2C%22color%22%3A%7B%22code%22%3A%22DD3A5B%22%2C%22name%22%3A%22RED%22%2C%22inStock%22%3A10%2C%22%24%24hashKey%22%3A%22object%3A302%22%7D%2C%22quantity%22%3A1%2C%22price%22%3A44.99%2C%22hasWarranty%22%3Afalse%7D%5D%7D; DOMAIN=advantageonlineshopping.com");

	web_url("shoppingCart.html", 
		"URL=https://advantageonlineshopping.com/app/views/shoppingCart.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://advantageonlineshopping.com/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}