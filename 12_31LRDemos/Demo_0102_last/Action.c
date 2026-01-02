Action()
{

	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("suggest", 
		"URL=https://merino.services.mozilla.com/api/v1/suggest?providers=geolocation&q=&sid=2a48afba-482d-4f04-ac13-98c15d1972ee&seq=1", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("QZ0", 
		"URL=http://o.pki.goog/s/wr3/QZ0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\x02\\x99Zv\\xD5\\x04L\\xFE\\xB0\\x98\\xB7\\x98\\x81IGz\\x9F\\xACg&\\x04\\x14\\xA0\\xAF\\xD5\\xF1\\xAD\\x0486J\\xE1\\x8A}Z\\xF50\\xAF\\x91\\xA0Q\\xA1\\x02\\x10A\\x9D\\x17\\x1A\\xE7LB=\\x12[F\\xE07\\x99\\xC0\\xD3", 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_url("canonical.html_3", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("HDc", 
		"URL=http://o.pki.goog/s/we1/HDc", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t6.inf", 
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
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\x02\\x99Zv\\xD5\\x04L\\xFE\\xB0\\x98\\xB7\\x98\\x81IGz\\x9F\\xACg&\\x04\\x14\\xA0\\xAF\\xD5\\xF1\\xAD\\x0486J\\xE1\\x8A}Z\\xF50\\xAF\\x91\\xA0Q\\xA1\\x02\\x10\\x1C7\\xE7x\\xD1\\x1Bm\\x18\\x11\\xD8N\\xD4N+Z\\x14", 
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

	web_url("blazedemo.com", 
		"URL=https://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", ENDITEM, 
		"Url=https://blazemeter.trackinglibrary.prodperfect.com/keen-tracking.min.js", ENDITEM, 
		LAST);

	web_custom_request("HDc_3", 
		"URL=http://o.pki.goog/s/we1/HDc", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\x02\\x99Zv\\xD5\\x04L\\xFE\\xB0\\x98\\xB7\\x98\\x81IGz\\x9F\\xACg&\\x04\\x14\\xA0\\xAF\\xD5\\xF1\\xAD\\x0486J\\xE1\\x8A}Z\\xF50\\xAF\\x91\\xA0Q\\xA1\\x02\\x10\\x1C7\\xE7x\\xD1\\x1Bm\\x18\\x11\\xD8N\\xD4N+Z\\x14", 
		LAST);

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\x02\\x99Zv\\xD5\\x04L\\xFE\\xB0\\x98\\xB7\\x98\\x81IGz\\x9F\\xACg&\\x04\\x14\\xA0\\xAF\\xD5\\xF1\\xAD\\x0486J\\xE1\\x8A}Z\\xF50\\xAF\\x91\\xA0Q\\xA1\\x02\\x10\\x02\\xF1\\x84\\xDA\\xF8\\x12Sy\\xE1\\x18\\x08\\xA7\\x04<\\xF6\\xF4", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1767369434365\\\"\"},\"use_webpush\":true,\"uaid\":\"7cd6923f8fc249568af1cf260de00962\"}", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_custom_request("6c0e5122-ff2d-4576-adb9-548b257b8bfb", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/6c0e5122-ff2d-4576-adb9-548b257b8bfb", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":5738,\"start_time\":\"2026-01-02T10:30:46.000-06:00\",\"end_time\":\"2026-01-02T10:45:10.916-06:00\",\"reason\":\"newtab_session_end\",\"experiments\":{\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout"
		"\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":"
		"{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"os_version\":\"10.0\",\"app_channel\":\"release\",\"app_display_version\":\"146.0.1\",\"architecture\":\"x86_64\",\"app_build\":\"20251217121356\",\"locale\":\"en-US\",\"os\":\"Windows\",\"windows_build_number\":26100,\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\",\"first_run_date\":\"2025-01-18-06:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\"},\"metrics\":{\"string\":{\""
		"search.engine.private.engine_id\":\"\",\"search.engine.private.partner_code\":\"\",\"search.engine.default.partner_code\":\"firefox-b-1-d\",\"newtab.homepage_category\":\"enabled\",\"newtab.locale\":\"en-US\",\"newtab.newtab_category\":\"enabled\",\"search.engine.default.engine_id\":\"google-b-1-d\",\"search.engine.private.provider_id\":\"\",\"newtab_content.surface_id\":\"\",\"search.engine.default.provider_id\":\"google\"},\"string_list\":{\"newtab.blocked_sponsors\":[]},\"quantity\":{\""
		"topsites.rows\":1},\"uuid\":{\"legacy.telemetry.profile_group_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\",\"legacy.telemetry.client_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\"},\"boolean\":{\"pocket.enabled\":false,\"topsites.sponsored_enabled\":false,\"search.engine.default.overridden_by_third_party\":false,\"newtab.search.enabled\":true,\"newtab.highlights_enabled\":false,\"search.engine.private.overridden_by_third_party\":false,\"newtab.weather_enabled\":true,\""
		"pocket.sponsored_stories_enabled\":true,\"topsites.enabled\":false},\"text\":{\"topsites.sponsored_tiles_received\":\"{\\\"sponsoredTilesReceived\\\":[]}\"}},\"events\":[{\"timestamp\":0,\"category\":\"newtab\",\"name\":\"opened\",\"extra\":{\"source\":\"about:newtab\",\"window_inner_height\":\"704\",\"glean_timestamp\":\"1767372152642\",\"newtab_visit_id\":\"{81e3d428-8384-43e2-806d-726c8fcdc3d4}\",\"window_inner_width\":\"1212\"}},{\"timestamp\":97,\"category\":\"newtab\",\"name\":\""
		"weather_impression\",\"extra\":{\"glean_timestamp\":\"1767372152739\",\"newtab_visit_id\":\"{81e3d428-8384-43e2-806d-726c8fcdc3d4}\"}},{\"timestamp\":158261,\"category\":\"newtab\",\"name\":\"closed\",\"extra\":{\"newtab_visit_id\":\"{cbb6d3e7-8e2e-437f-bec3-25820681b634}\",\"glean_timestamp\":\"1767372310903\"}}]}", 
		LAST);

/* Added by Async CodeGen.
ID=LongPoll_0
ScanType = Recording

The following URLs are considered part of this conversation:
	https://mozilla.cloudflare-dns.com/dns-query

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	LongPoll_0_RequestCB
	LongPoll_0_ResponseCB
 */
	web_reg_async_attributes("ID=LongPoll_0", 
		"Pattern=LongPoll", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"RequestCB=LongPoll_0_RequestCB", 
		"ResponseCB=LongPoll_0_ResponseCB", 
		LAST);

	web_custom_request("dns-query", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x07example\\x03com\\x00\\x00\\x02\\x00\\x01\\x00\\x00)"
		"\\x10\\x00\\x00\\x00\\x00\\x00\\x00X\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00L\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_custom_request("71121380-73d8-4b0b-9440-ef90797fff9f", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/71121380-73d8-4b0b-9440-ef90797fff9f", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":5739,\"start_time\":\"2026-01-02T10:45:10.000-06:00\",\"end_time\":\"2026-01-02T10:45:11.008-06:00\",\"reason\":\"newtab_session_end\",\"experiments\":{\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\""
		"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\","
		"\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\""
		":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates"
		"\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\""
		"first_run_date\":\"2025-01-18-06:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"app_build\":\"20251217121356\",\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"os_version\":\"10.0\",\"os\":\"Windows\",\"app_display_version\":\"146.0.1\",\"windows_build_number\":26100,\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\"},\"metrics\":{\"uuid\":{\"legacy.telemetry.profile_group_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\",\"legacy.telemetry.client_id\":\""
		"b189d8eb-276a-459d-b5a0-e6f121498a13\"},\"string_list\":{\"newtab.blocked_sponsors\":[]},\"boolean\":{\"search.engine.default.overridden_by_third_party\":false,\"pocket.enabled\":false,\"topsites.enabled\":false,\"topsites.sponsored_enabled\":false,\"search.engine.private.overridden_by_third_party\":false,\"pocket.sponsored_stories_enabled\":true,\"newtab.search.enabled\":true,\"newtab.highlights_enabled\":false,\"newtab.weather_enabled\":true},\"string\":{\"newtab.homepage_category\":\"enabled\","
		"\"newtab.locale\":\"en-US\",\"search.engine.private.engine_id\":\"\",\"search.engine.private.partner_code\":\"\",\"search.engine.private.provider_id\":\"\",\"search.engine.default.partner_code\":\"firefox-b-1-d\",\"search.engine.default.provider_id\":\"google\",\"newtab_content.surface_id\":\"\",\"search.engine.default.engine_id\":\"google-b-1-d\",\"newtab.newtab_category\":\"enabled\"},\"text\":{\"topsites.sponsored_tiles_received\":\"{\\\"sponsoredTilesReceived\\\":[]}\"},\"quantity\":{\""
		"topsites.rows\":1}},\"events\":[{\"timestamp\":0,\"category\":\"newtab\",\"name\":\"closed\",\"extra\":{\"newtab_visit_id\":\"{81e3d428-8384-43e2-806d-726c8fcdc3d4}\",\"glean_timestamp\":\"1767372310944\"}}]}", 
		LAST);

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_custom_request("dns-query_2",
		"URL=https://mozilla.cloudflare-dns.com/dns-query",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/dns-message",
		"Referer=",
		"Snapshot=t15.inf",
		"Mode=HTML",
		"EncType=application/dns-message",
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x07mozilla\\x0Ecloudflare-dns\\x03com\\x00\\x00\\x1C\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00I\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00=\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00",
		LAST); 
	*/

	web_custom_request("aa5245d3-c534-413e-a70f-07210c0dc7a2", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/use-counters/1/aa5245d3-c534-413e-a70f-07210c0dc7a2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":70,\"start_time\":\"2026-01-02T10:28:48.000-06:00\",\"end_time\":\"2026-01-02T10:45:11.090-06:00\",\"reason\":\"app_shutdown_confirmed\",\"experiments\":{\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\""
		":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\""
		"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\","
		"\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\""
		"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"locale\":\"en-US\",\"app_channel\":\"release\",\"app_display_version\":\"146.0.1\",\"app_build\":\"20251217121356\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"windows_build_number\":26100,\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2025-01-18-06:00\",\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\"},\"metrics\":{\"counter\":{\"use.counter.css.page.css_moz_force_broken_image_icon\":1,\""
		"use.counter.css.page.css_border_image\":1,\"use.counter.css.page.css_border_inline_width\":1,\"use.counter.css.page.css_clip_rule\":1,\"use.counter.css.page.css_border_end_end_radius\":1,\"use.counter.css.page.css_scroll_padding_bottom\":1,\"use.counter.css.page.css_moz_transition_duration\":1,\"use.counter.page.js_wasm\":1,\"use.counter.css.page.css_bottom\":7,\"use.counter.css.page.css_inset_block_start\":1,\"use.counter.css.page.css_text_rendering\":3,\""
		"use.counter.css.page.css_content_visibility\":1,\"use.counter.css.doc.css_color\":3,\"use.counter.css.page.css_height\":7,\"use.counter.css.doc.css_position\":3,\"use.counter.css.doc.css_border_left\":3,\"use.counter.css.page.css_box_decoration_break\":1,\"use.counter.css.page.css_list_style_type\":2,\"use.counter.css.page.widows\":3,\"use.counter.doc.console_error\":2,\"use.counter.css.page.css_moz_transition_property\":2,\"use.counter.css.page.css_text_decoration\":7,\""
		"use.counter.css.page.css_scroll_snap_type\":1,\"use.counter.css.page.css_flex_grow\":2,\"use.counter.css.page.css_outline_color\":2,\"use.counter.page.mixed_content_not_upgraded_image_success\":3,\"use.counter.css.page.css_row_gap\":2,\"use.counter.css.page.css_word_wrap\":7,\"use.counter.css.doc.css_transform_origin\":3,\"use.counter.css.doc.css_animation_fill_mode\":3,\"use.counter.css.doc.css_overflow_x\":3,\"use.counter.css.page.css_cx\":1,\"use.counter.css.doc.css_max_width\":3,\""
		"use.counter.css.doc.css_margin_top\":3,\"use.counter.css.doc.css_border_radius\":3,\"use.counter.css.page.css_counter_reset\":1,\"use.counter.css.page.css_min_width\":5,\"use.counter.css.doc.css_outline\":3,\"use.counter.page.console_debug\":1,\"use.counter.css.page.css_margin_top\":7,\"use.counter.top_level_content_documents_destroyed\":8,\"use.counter.css.page.css_transition\":7,\"use.counter.css.page.css_border_right_color\":4,\"use.counter.css.page.css_padding_block_start\":1,\""
		"use.counter.css.doc.css_padding_left\":3,\"use.counter.css.doc.css_float\":3,\"use.counter.page.window_onselectionchange\":1,\"use.counter.css.page.css_padding_inline\":1,\"use.counter.css.doc.css_bottom\":3,\"use.counter.css.doc.css_webkit_box_shadow\":3,\"use.counter.css.page.css_float\":6,\"use.counter.css.page.css_webkit_background_size\":4,\"use.counter.css.page.css_table_layout\":3,\"use.counter.css.page.css_transition_delay\":4,\"use.counter.css.page.css_webkit_border_top_left_radius\":3,\""
		"use.counter.css.doc.css_moz_box_sizing\":3,\"use.counter.css.page.css_isolation\":2,\"use.counter.css.page.webkit_user_modify\":1,\"use.counter.css.page.css_border_bottom_right_radius\":5,\"use.counter.css.page.css_container\":1,\"use.counter.css.doc.css_moz_transition\":3,\"use.counter.css.page.css_font_style\":5,\"use.counter.css.page.css_border_top\":6,\"use.counter.css.doc.css_letter_spacing\":3,\"use.counter.css.page.css_border_bottom\":6,\"use.counter.css.doc.css_cursor\":3,\""
		"use.counter.css.doc.css_margin_bottom\":3,\"use.counter.css.page.css_border_block_end\":1,\"use.counter.css.page.css_webkit_align_self\":1,\"use.counter.css.page.css_min_inline_size\":1,\"use.counter.css.page.css_webkit_box_shadow\":6,\"use.counter.css.page.css_webkit_clip_path\":1,\"use.counter.css.page.css_border_inline_end_width\":2,\"use.counter.css.page.css_width\":7,\"use.counter.css.doc.css_animation_name\":3,\"use.counter.css.page.css_text_decoration_color\":1,\""
		"use.counter.css.page.css_text_shadow\":6,\"use.counter.css.page.css_webkit_box_align\":1,\"use.counter.css.page.css_background_size\":7,\"use.counter.css.doc.css_overflow_y\":3,\"use.counter.css.page.css_right\":7,\"use.counter.css.page.css_caret_color\":2,\"use.counter.css.page.css_fill\":4,\"use.counter.css.page.css_line_height\":7,\"use.counter.css.page.css_counter_increment\":1,\"use.counter.css.page.css_webkit_filter\":1,\"use.counter.css.page.css_order\":2,\""
		"use.counter.css.page.css_animation_play_state\":2,\"use.counter.css.page.css_position\":7,\"use.counter.page.console_error\":2,\"use.counter.css.page.css_box_sizing\":7,\"use.counter.css.page.webkit_tap_highlight_color\":2,\"use.counter.css.page.css_border_block_end_width\":1,\"use.counter.css.page.css_font_family\":7,\"use.counter.css.page.css_border_bottom_left_radius\":5,\"use.counter.css.page.css_background_position\":7,\"use.counter.css.page.css_min_height\":7,\""
		"use.counter.css.doc.css_background_position\":3,\"use.counter.css.doc.css_font_weight\":3,\"use.counter.css.doc.css_fill_rule\":7,\"use.counter.css.page.css_border_top_color\":5,\"use.counter.css.doc.css_webkit_appearance\":3,\"use.counter.css.page.css_inline_size\":1,\"use.counter.css.page.css_inset_inline\":1,\"use.counter.css.page.css_scroll_margin_inline\":1,\"use.counter.css.page.css_webkit_flex_shrink\":1,\"use.counter.css.page.css_webkit_text_fill_color\":1,\""
		"use.counter.css.page.css_font_size\":7,\"use.counter.css.page.css_animation_name\":4,\"use.counter.css.page.css_background_image\":7,\"use.counter.css.doc.css_clip_rule\":2,\"use.counter.css.doc.css_webkit_animation_delay\":3,\"use.counter.css.page.css_moz_appearance\":2,\"use.counter.css.doc.css_list_style\":3,\"use.counter.css.page.css_inset_inline_start\":2,\"use.counter.css.page.css_grid_area\":1,\"use.counter.css.page.css_webkit_box_sizing\":6,\"use.counter.css.page.css_outline_style\":2,\""
		"use.counter.css.page.css_webkit_border_bottom_left_radius\":3,\"use.counter.css.page.css_background\":7,\"use.counter.css.page.css_overflow_y\":7,\"use.counter.page.console_timestamp\":1,\"use.counter.css.page.css_border_inline_end_color\":2,\"use.counter.css.page.css_transition_timing_function\":2,\"use.counter.css.page.css_border_inline_color\":1,\"use.counter.page.enumerate_devices_unfocused\":1,\"use.counter.css.doc.css_background_position_x\":3,\"use.counter.css.doc.css_word_wrap\":3,\""
		"use.counter.css.page.css_display\":7,\"use.counter.css.doc.css_webkit_transition\":3,\"use.counter.css.page.css_flex_direction\":4,\"use.counter.css.page.css_animation_direction\":1,\"use.counter.css.page.css_webkit_transition\":6,\"use.counter.css.page.css_margin_right\":7,\"use.counter.css.doc.css_min_height\":3,\"use.counter.css.doc.css_margin_right\":3,\"use.counter.css.page.css_transition_duration\":2,\"use.counter.css.page.css_padding_inline_start\":2,\"use.counter.css.doc.css_perspective\""
		":3,\"use.counter.css.page.css_border\":7,\"use.counter.css.page.css_image_orientation\":1,\"use.counter.css.page.css_mix_blend_mode\":1,\"use.counter.css.doc.css_stroke_width\":5,\"use.counter.css.page.css_animation_fill_mode\":4,\"use.counter.css.page.css_border_left_width\":5,\"use.counter.css.page.css_margin_inline_start\":2,\"use.counter.css.page.css_background_blend_mode\":1,\"use.counter.css.doc.css_animation_duration\":3,\"use.counter.css.page.css_border_width\":7,\""
		"use.counter.css.doc.css_stop_opacity\":4,\"use.counter.css.page.css_border_top_style\":2,\"use.counter.css.page.css_gap\":2,\"use.counter.css.page.css_padding_block\":1,\"use.counter.css.doc.css_webkit_animation_iteration_count\":3,\"use.counter.css.page.css_webkit_animation_delay\":2,\"use.counter.css.doc.css_height\":9,\"use.counter.css.page.css_webkit_box_flex\":1,\"use.counter.css.page.css_visibility\":7,\"use.counter.page.js_is_htmldda_fuse\":1,\"use.counter.css.page.css_border_block\":1,\""
		"use.counter.css.page.css_clear\":4,\"use.counter.css.page.css_vertical_align\":7,\"use.counter.css.page.css_inset\":2,\"use.counter.css.page.webkit_opacity\":1,\"use.counter.css.doc.css_display\":3,\"use.counter.css.page.css_padding_block_end\":1,\"use.counter.css.page.css_transform\":4,\"use.counter.css.page.css_stroke_width\":4,\"use.counter.css.page.css_break_inside\":1,\"use.counter.css.doc.css_transition\":3,\"use.counter.css.page.css_text_wrap\":2,\""
		"use.counter.css.page.css_webkit_user_select\":4,\"use.counter.css.page.css_webkit_animation\":4,\"use.counter.css.page.css_webkit_transition_property\":2,\"use.counter.css.doc.css_text_anchor\":1,\"use.counter.css.page.css_margin_block_end\":1,\"use.counter.css.page.css_border_bottom_color\":5,\"use.counter.css.page.css_moz_animation\":3,\"use.counter.css.page.css_backdrop_filter\":2,\"use.counter.css.page.css_text_indent\":7,\"use.counter.css.page.css_z_index\":7,\""
		"use.counter.page.mediadevices_enumeratedevices\":1,\"use.counter.page.window_oncancel\":1,\"use.counter.css.page.css_clip_path\":1,\"use.counter.css.page.css_direction\":4,\"use.counter.css.page.css_clip\":2,\"use.counter.css.page.orphans\":3,\"use.counter.css.page.webkit_box_decoration_break\":1,\"use.counter.css.doc.css_transform_style\":3,\"use.counter.css.doc.css_font_family\":4,\"use.counter.css.doc.css_margin\":3,\"use.counter.css.page.css_filter\":2,\""
		"use.counter.css.page.css_webkit_animation_fill_mode\":2,\"use.counter.css.doc.css_user_select\":3,\"use.counter.css.page.css_border_top_right_radius\":5,\"use.counter.css.page.css_max_height\":7,\"use.counter.css.page.css_object_position\":2,\"use.counter.css.doc.css_webkit_border_radius\":3,\"use.counter.css.page.css_hyphens\":1,\"use.counter.css.page.webkit_margin_top_collapse\":3,\"use.counter.css.page.css_webkit_box_pack\":1,\"use.counter.css.doc.css_clip_path\":1,\""
		"use.counter.css.page.css_border_inline_start_width\":1,\"use.counter.css.page.css_scroll_snap_align\":1,\"use.counter.css.page.css_border_inline_start_color\":2,\"use.counter.doc.htmldocument_featurepolicy\":1,\"use.counter.css.doc.css_mask\":2,\"use.counter.page.domparser_parsefromstring\":1,\"use.counter.css.doc.css_box_shadow\":3,\"use.counter.css.page.css_border_inline\":1,\"use.counter.css.page.css_translate\":1,\"use.counter.css.page.css_transition_property\":2,\""
		"use.counter.css.page.css_border_start_end_radius\":1,\"use.counter.css.doc.css_text_decoration\":3,\"use.counter.css.page.css_grid_auto_flow\":1,\"use.counter.css.page.css_flex_basis\":2,\"use.counter.css.page.css_font_feature_settings\":2,\"use.counter.css.page.css_margin_inline_end\":2,\"use.counter.css.page.css_pointer_events\":7,\"use.counter.css.page.css_tab_size\":2,\"use.counter.css.doc.css_visibility\":3,\"use.counter.css.page.css_flex_wrap\":2,\"use.counter.css.page.css_border_collapse\""
		":7,\"use.counter.css.page.css_will_change\":2,\"use.counter.css.page.speak\":1,\"use.counter.css.page.css_animation_timing_function\":4,\"use.counter.css.page.css_all\":1,\"use.counter.css.page.css_top\":7,\"use.counter.css.doc.css_opacity\":4,\"use.counter.css.doc.css_width\":9,\"use.counter.css.page.css_column_gap\":2,\"use.counter.css.page.css_webkit_line_clamp\":2,\"use.counter.css.page.css_webkit_mask_image\":1,\"use.counter.css.page.css_touch_action\":4,\""
		"use.counter.css.page.css_margin_bottom\":7,\"use.counter.css.page.css_webkit_transform_origin\":2,\"use.counter.css.page.css_border_image_width\":1,\"use.counter.css.page.css_border_right\":6,\"use.counter.css.page.css_mask_image\":1,\"use.counter.page.js_asmjs\":1,\"use.counter.page.window_chrome\":2,\"use.counter.css.page.css_moz_animation_name\":2,\"use.counter.css.page.css_stroke_dasharray\":1,\"use.counter.css.doc.css_vertical_align\":3,\"use.counter.css.page.css_container_name\":1,\""
		"use.counter.css.page.css_grid_column_gap\":1,\"use.counter.css.page.css_mask_composite\":1,\"use.counter.css.page.css_transition_behavior\":1,\"use.counter.css.page.css_word_break\":5,\"use.counter.css.doc.css_border_width\":3,\"use.counter.css.page.css_font_variation_settings\":2,\"use.counter.css.page.css_webkit_mask\":1,\"use.counter.css.page.css_grid_column_end\":1,\"use.counter.css.page.css_overflow_x\":7,\"use.counter.css.page.css_background_clip\":5,\"use.counter.css.doc.css_content\":3,\""
		"use.counter.css.page.css_scroll_margin_top\":1,\"use.counter.css.page.css_border_bottom_style\":2,\"use.counter.page.js_dateparse_impl_def\":2,\"use.counter.css.doc.css_direction\":3,\"use.counter.css.page.css_font\":5,\"use.counter.doc.domparser_parsefromstring\":2,\"use.counter.css.page.css_border_inline_start\":1,\"use.counter.css.doc.css_webkit_backface_visibility\":3,\"use.counter.css.page.css_webkit_justify_content\":1,\"use.counter.css.page.css_background_attachment\":1,\""
		"use.counter.css.page.css_color_scheme\":2,\"use.counter.css.page.css_grid_auto_columns\":1,\"use.counter.css.page.css_border_block_start_width\":1,\"use.counter.css.page.css_background_position_x\":2,\"use.counter.page.window_touchlist\":2,\"use.counter.css.page.css_text_decoration_skip_ink\":1,\"use.counter.css.page.css_opacity\":7,\"use.counter.css.page.css_webkit_box_orient\":2,\"use.counter.css.doc.css_border\":3,\"use.counter.css.page.css_mask_repeat\":1,\""
		"use.counter.css.page.css_perspective\":3,\"use.counter.css.page.css_align_content\":2,\"use.counter.css.doc.css_moz_animation_name\":3,\"use.counter.content_documents_destroyed\":13,\"use.counter.css.doc.css_touch_action\":3,\"use.counter.css.page.css_border_start_start_radius\":1,\"use.counter.css.page.css_animation_duration\":4,\"use.counter.css.page.css_grid_column\":2,\"use.counter.css.page.css_webkit_border_top_right_radius\":3,\"use.counter.css.doc.css_webkit_animation_fill_mode\":3,\""
		"use.counter.css.doc.css_right\":3,\"use.counter.css.page.css_moz_transition\":6,\"use.counter.css.page.css_text_decoration_style\":1,\"use.counter.css.doc.css_background_repeat\":3,\"use.counter.css.page.css_color\":7,\"use.counter.css.page.css_flex\":2,\"use.counter.css.doc.css_max_height\":3,\"use.counter.css.page.css_rx\":1,\"use.counter.css.page.css_webkit_flex_direction\":1,\"use.counter.css.page.css_cursor\":7,\"use.counter.css.page.css_webkit_animation_timing_function\":2,\""
		"use.counter.css.page.css_caption_side\":2,\"use.counter.css.doc.css_stroke\":5,\"use.counter.css.page.css_list_style_position\":1,\"use.counter.css.page.css_webkit_transform\":6,\"use.counter.css.page.css_stroke_linejoin\":1,\"use.counter.css.page.css_webkit_border_bottom_right_radius\":3,\"use.counter.css.page.css_outline\":7,\"use.counter.css.page.css_text_transform\":7,\"use.counter.css.page.css_border_right_width\":5,\"use.counter.css.doc.css_background\":3,\""
		"use.counter.css.page.css_moz_user_select\":4,\"use.counter.css.page.css_aspect_ratio\":2,\"use.counter.css.page.css_scroll_padding\":1,\"use.counter.css.doc.css_animation_delay\":3,\"use.counter.css.doc.css_border_collapse\":3,\"use.counter.css.page.css_animation_iteration_count\":4,\"use.counter.css.page.css_grid_template\":1,\"use.counter.css.page.css_border_block_start\":1,\"use.counter.css.page.css_border_block_end_color\":1,\"use.counter.css.page.css_grid_column_start\":2,\""
		"use.counter.css.page.css_stroke_linecap\":1,\"use.counter.css.page.css_transform_style\":3,\"use.counter.css.page.css_border_style\":5,\"use.counter.css.page.css_content\":7,\"use.counter.css.page.css_font_stretch\":1,\"use.counter.css.doc.css_animation_iteration_count\":3,\"use.counter.css.doc.css_background_image\":3,\"use.counter.css.doc.css_flex_direction\":3,\"use.counter.css.page.css_box_shadow\":7,\"use.counter.css.page.css_grid_gap\":1,\"use.counter.css.page.css_overflow_anchor\":1,\""
		"use.counter.css.page.css_margin_block\":1,\"use.counter.css.page.css_transform_origin\":4,\"use.counter.css.doc.css_padding_bottom\":3,\"use.counter.css.page.css_padding_inline_end\":2,\"use.counter.page.js_dateparse\":2,\"use.counter.css.page.css_align_items\":2,\"use.counter.css.doc.css_dominant_baseline\":1,\"use.counter.doc.console_log\":2,\"use.counter.css.doc.css_top\":3,\"use.counter.css.page.css_grid_row_start\":2,\"use.counter.css.doc.css_animation_timing_function\":3,\""
		"use.counter.css.doc.css_z_index\":3,\"use.counter.css.page.css_moz_tab_size\":1,\"use.counter.css.doc.css_padding_top\":3,\"use.counter.css.page.css_stop_color\":3,\"use.counter.css.doc.css_text_shadow\":3,\"use.counter.deprecated_ops.page.sync_xmlhttp_request_deprecated\":1,\"use.counter.css.doc.css_padding\":3,\"use.counter.css.page.css_letter_spacing\":7,\"use.counter.css.page.css_fill_rule\":3,\"use.counter.css.doc.css_webkit_transform_origin\":3,\"use.counter.css.page.css_margin_left\":7,\""
		"use.counter.css.doc.css_border_right\":3,\"use.counter.css.page.css_scroll_behavior\":2,\"use.counter.css.page.css_scrollbar_gutter\":2,\"use.counter.css.page.css_text_overflow\":7,\"use.counter.css.page.css_border_radius\":7,\"use.counter.css.page.css_webkit_background_clip\":5,\"use.counter.css.doc.css_webkit_animation_duration\":3,\"use.counter.css.page.css_animation\":5,\"use.counter.page.js_use_asm\":1,\"use.counter.css.doc.css_white_space\":3,\"use.counter.page.scheduler_posttask\":1,\""
		"use.counter.css.page.css_font_variant\":1,\"use.counter.css.page.css_column_count\":1,\"use.counter.css.page.css_grid_row_gap\":1,\"use.counter.css.doc.css_fill_opacity\":2,\"use.counter.css.page.css_overscroll_behavior\":1,\"use.counter.css.page.css_zoom\":4,\"use.counter.css.page.css_border_inline_end_style\":1,\"use.counter.css.page.css_resize\":4,\"use.counter.css.doc.css_resize\":3,\"use.counter.css.page.css_cy\":1,\"use.counter.css.doc.css_line_height\":3,\""
		"use.counter.css.doc.css_border_color\":3,\"use.counter.css.doc.css_border_top\":3,\"use.counter.css.page.css_grid_row\":1,\"use.counter.css.page.css_scale\":1,\"use.counter.css.doc.css_webkit_user_select\":3,\"use.counter.css.page.css_mask_type\":1,\"use.counter.css.page.css_outline_width\":2,\"use.counter.css.page.css_block_size\":1,\"use.counter.css.page.css_page_break_inside\":3,\"use.counter.css.page.css_webkit_appearance\":7,\"use.counter.css.doc.css_webkit_animation_name\":3,\""
		"use.counter.css.page.css_scroll_margin_bottom\":1,\"use.counter.css.page.css_backface_visibility\":4,\"use.counter.css.page.css_border_block_end_style\":1,\"use.counter.css.doc.css_webkit_transform\":3,\"use.counter.css.page.css_outline_offset\":5,\"use.counter.css.page.css_overflow_wrap\":2,\"use.counter.css.page.css_max_width\":7,\"use.counter.css.page.webkit_column_width\":1,\"use.counter.css.page.css_inset_inline_end\":2,\"use.counter.css.page.css_text_decoration_thickness\":2,\""
		"use.counter.css.page.css_padding_top\":7,\"use.counter.css.doc.css_margin_left\":3,\"use.counter.css.page.css_border_top_width\":5,\"use.counter.css.page.css_webkit_align_items\":1,\"use.counter.css.doc.css_left\":3,\"use.counter.css.doc.css_moz_user_select\":3,\"use.counter.css.doc.css_background_color\":3,\"use.counter.css.page.css_border_left_style\":2,\"use.counter.deprecated_ops.doc.sync_xmlhttp_request_deprecated\":2,\"use.counter.css.page.css_font_weight\":7,\""
		"use.counter.css.doc.css_background_size\":3,\"use.counter.css.page.css_moz_transform\":1,\"use.counter.css.page.css_scrollbar_color\":2,\"use.counter.css.page.css_list_style\":7,\"use.counter.css.doc.css_webkit_animation_timing_function\":3,\"use.counter.css.page.css_moz_box_sizing\":6,\"use.counter.css.page.css_justify_content\":2,\"use.counter.css.page.css_webkit_flex\":1,\"use.counter.css.page.css_margin_block_start\":1,\"use.counter.css.page.css_y\":1,\""
		"use.counter.css.page.css_font_variant_numeric\":2,\"use.counter.css.page.css_justify_items\":1,\"use.counter.css.page.css_border_spacing\":4,\"use.counter.css.page.css_border_inline_start_style\":1,\"use.counter.css.page.css_border_left_color\":5,\"use.counter.css.page.css_padding_bottom\":7,\"use.counter.css.page.css_text_decoration_line\":2,\"use.counter.css.doc.css_text_align\":3,\"use.counter.css.page.css_background_position_y\":1,\"use.counter.css.page.css_text_anchor\":1,\""
		"use.counter.css.doc.css_text_overflow\":3,\"use.counter.css.page.css_mask\":1,\"use.counter.css.doc.css_text_transform\":3,\"use.counter.css.page.css_stroke_dashoffset\":1,\"use.counter.css.doc.css_text_indent\":3,\"use.counter.css.page.css_padding\":7,\"use.counter.css.page.css_x\":1,\"use.counter.css.doc.css_padding_right\":3,\"use.counter.css.page.css_align_self\":2,\"use.counter.css.page.css_animation_delay\":4,\"use.counter.css.page.css_text_align\":7,\""
		"use.counter.css.page.css_webkit_animation_iteration_count\":2,\"use.counter.css.page.css_appearance\":2,\"use.counter.css.page.css_object_fit\":2,\"use.counter.css.doc.css_backface_visibility\":3,\"use.counter.css.page.css_border_block_start_color\":1,\"use.counter.css.doc.css_overflow\":3,\"use.counter.css.doc.css_box_sizing\":3,\"use.counter.css.page.css_padding_left\":7,\"use.counter.css.doc.css_webkit_box_sizing\":3,\"use.counter.css.page.css_stroke\":4,\"use.counter.css.page.css_word_spacing"
		"\":1,\"use.counter.css.page.css_left\":7,\"use.counter.css.page.css_user_select\":4,\"use.counter.css.page.css_stop_opacity\":3,\"use.counter.css.page.css_webkit_backface_visibility\":2,\"use.counter.css.doc.css_font_size\":4,\"use.counter.page.console_log\":2,\"use.counter.css.page.css_border_color\":7,\"use.counter.css.doc.css_transition_delay\":3,\"use.counter.css.page.css_grid_template_columns\":2,\"use.counter.css.page.css_grid_template_rows\":2,\"use.counter.css.page.css_image_rendering\":1,"
		"\"use.counter.css.page.css_background_color\":7,\"use.counter.css.page.css_border_top_left_radius\":5,\"use.counter.css.page.css_inset_block_end\":1,\"use.counter.css.page.css_margin_inline\":1,\"use.counter.css.page.css_page_break_after\":3,\"use.counter.doc.mixed_content_not_upgraded_image_success\":2,\"use.counter.css.doc.css_fill\":10,\"use.counter.css.page.css_scroll_padding_top\":2,\"use.counter.css.page.css_overflow\":7,\"use.counter.css.page.css_container_type\":2,\""
		"use.counter.css.doc.css_pointer_events\":3,\"use.counter.page.console_warn\":1,\"use.counter.page.htmldocument_webkithidden\":1,\"use.counter.css.page.css_border_right_style\":2,\"use.counter.css.page.css_border_inline_end\":1,\"use.counter.css.doc.css_table_layout\":3,\"use.counter.css.doc.css_transform\":3,\"use.counter.css.page.css_background_origin\":2,\"use.counter.css.page.css_border_end_start_radius\":1,\"use.counter.css.page.css_grid_template_areas\":1,\""
		"use.counter.css.page.css_padding_right\":7,\"use.counter.css.page.css_webkit_animation_duration\":2,\"use.counter.css.page.css_webkit_animation_name\":2,\"use.counter.css.page.css_rotate\":1,\"use.counter.css.page.css_webkit_border_radius\":6,\"use.counter.css.page.css_webkit_transition_duration\":1,\"use.counter.css.doc.css_border_bottom\":3,\"use.counter.css.page.alignment_baseline\":1,\"use.counter.css.page.css_flex_shrink\":2,\"use.counter.css.page.css_writing_mode\":1,\""
		"use.counter.css.page.css_contain\":1,\"use.counter.css.doc.css_stop_color\":4,\"use.counter.page.webgpu_request_adapter\":1,\"use.counter.css.page.css_border_inline_style\":1,\"use.counter.css.page.css_margin\":7,\"use.counter.css.page.css_white_space\":7,\"use.counter.css.page.css_scrollbar_width\":2,\"use.counter.css.page.css_webkit_flex_grow\":1,\"use.counter.css.page.css_border_bottom_width\":5,\"use.counter.css.page.css_grid_auto_rows\":1,\"use.counter.page.htmldocument_registerelement\":1,\""
		"use.counter.css.page.css_justify_self\":2,\"use.counter.css.page.css_background_repeat\":7,\"use.counter.css.page.css_border_block_start_style\":1,\"use.counter.css.page.css_text_underline_offset\":1,\"use.counter.css.page.css_border_left\":7,\"use.counter.css.page.css_fill_opacity\":1}}}", 
		LAST);

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_custom_request("dns-query_3",
		"URL=https://mozilla.cloudflare-dns.com/dns-query",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/dns-message",
		"Referer=",
		"Snapshot=t17.inf",
		"Mode=HTML",
		"EncType=application/dns-message",
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x07mozilla\\x0Ecloudflare-dns\\x03com\\x00\\x00\\x01\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00I\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00=\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00",
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_custom_request("dns-query_4",
		"URL=https://mozilla.cloudflare-dns.com/dns-query",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/dns-message",
		"Referer=",
		"Snapshot=t18.inf",
		"Mode=HTML",
		"EncType=application/dns-message",
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\n"
		"blazemeter\\x0Ftrackinglibrary\\x0Bprodperfect\\x03com\\x00\\x00A\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x009\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00-\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00",
		LAST); 
	*/

	web_custom_request("723dfebc-5c47-41e4-b101-33908b62bad9", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/723dfebc-5c47-41e4-b101-33908b62bad9", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":5740,\"start_time\":\"2026-01-02T10:45:11.000-06:00\",\"end_time\":\"2026-01-02T10:45:27.539-06:00\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"windows_build_number\":26100,\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\",\"first_run_date\":\"2025-01-18-06:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"os_version\":\"10.0\",\"app_build\":\"20251217121356\",\"locale\":\"en-US\",\"app_display_version\":\"146.0.1\",\""
		"architecture\":\"x86_64\",\"os\":\"Windows\",\"app_channel\":\"release\"},\"metrics\":{\"string\":{\"newtab.homepage_category\":\"enabled\",\"newtab.locale\":\"en-US\",\"newtab.newtab_category\":\"enabled\",\"newtab_content.surface_id\":\"\"},\"boolean\":{\"topsites.enabled\":false,\"pocket.enabled\":false,\"newtab.weather_enabled\":true,\"newtab.search.enabled\":true,\"newtab.highlights_enabled\":false,\"pocket.sponsored_stories_enabled\":true,\"topsites.sponsored_enabled\":false},\"quantity\":{"
		"\"topsites.rows\":1},\"string_list\":{\"newtab.blocked_sponsors\":[]}}}", 
		LAST);

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_custom_request("dns-query_5",
		"URL=https://mozilla.cloudflare-dns.com/dns-query",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/dns-message",
		"Referer=",
		"Snapshot=t20.inf",
		"Mode=HTML",
		"EncType=application/dns-message",
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\n"
		"blazemeter\\x0Ftrackinglibrary\\x0Bprodperfect\\x03com\\x00\\x00\\x1C\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x009\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00-\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00",
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_0
 */
	/*
 web_custom_request("dns-query_6",
		"URL=https://mozilla.cloudflare-dns.com/dns-query",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/dns-message",
		"Referer=",
		"Snapshot=t21.inf",
		"Mode=HTML",
		"EncType=application/dns-message",
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\n"
		"blazemeter\\x0Ftrackinglibrary\\x0Bprodperfect\\x03com\\x00\\x00\\x01\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x009\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00-\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00",
		LAST); 
	*/

/* Added by Async CodeGen.
ID = LongPoll_0
 */
	web_stop_async("ID=LongPoll_0", 
		LAST);

	web_custom_request("f9d63b0d-1323-4f05-90f1-2828713fe597", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/nimbus-targeting-context/1/f9d63b0d-1323-4f05-90f1-2828713fe597", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":279,\"start_time\":\"2026-01-02T10:30:47.000-06:00\",\"end_time\":\"2026-01-02T10:45:28.027-06:00\",\"experiments\":{\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\""
		":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\""
		"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\""
		"telemetry_sdk_build\":\"66.1.2\",\"windows_build_number\":26100,\"app_channel\":\"release\",\"app_display_version\":\"146.0.1\",\"architecture\":\"x86_64\",\"os_version\":\"10.0\",\"os\":\"Windows\",\"locale\":\"en-US\",\"app_build\":\"20251217121356\",\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\",\"first_run_date\":\"2025-01-18-06:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\"},\"metrics\":{\"string\":{\"nimbus_targeting_context.distribution_id\":\"\",\""
		"nimbus_targeting_context.locale\":\"en-US\",\"nimbus_targeting_context.region\":\"US\",\"nimbus_targeting_context.current_date\":\"Fri, 02 Jan 2026 16:45:24 GMT\",\"nimbus_targeting_context.version\":\"146.0.1\"},\"object\":{\"nimbus_targeting_context.enrollments_map\":[{\"experimentSlug\":\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"branchSlug\":\"treatment-a-tab-switching-copy\"},{\"experimentSlug\":\"account-adoption-app-menu-rollout\",\"branchSlug\":\""
		"treatment-a\"},{\"experimentSlug\":\"account-adoption-callout-credit-cards-and-addresses-corrected-copy\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"account-adoption-callout-passwords-rollout\",\"branchSlug\":\"treatment-e\"},{\"experimentSlug\":\"account-adoption-pxi-menu-fx141-fx142\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"account-adoption-pxi-menu-rollout-v2\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"address-autofill-desktop-pref-release-rollout\",\""
		"branchSlug\":\"enable-address-autofill\"},{\"experimentSlug\":\"address-bar-update-launch-extention\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"address-bar-update-rollout-v1\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout\",\"branchSlug\":\"treatment-a-callout-badge\"},{\"experimentSlug\":\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\",\"branchSlug\":\"treatment-a-callout-badge\"},{\""
		"experimentSlug\":\"ai-chatbot-rollout-in-the-old-sidebar\",\"branchSlug\":\"treatment-d\"},{\"experimentSlug\":\"ai-tab-groups-experiment-with-opt-in-100-population\",\"branchSlug\":\"smart-tab-groups\"},{\"experimentSlug\":\"backgroundupdate-enable-unelevated-installations-rollout-3-release\",\"branchSlug\":\"enabled\"},{\"experimentSlug\":\"chatbot-sticky-cta\",\"branchSlug\":\"control-no-sticky-cta\"},{\"experimentSlug\":\"chips-rollout-to-firefox\",\"branchSlug\":\"control\"},{\""
		"experimentSlug\":\"context-id-rotation-every-15-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"context-id-rotation-every-3-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"context-id-rotation-every-30-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"context-id-rotation-every-7-days\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\"branchSlug\":\"treatment-a-tab-switching-copy\"},{\"experimentSlug\""
		":\"crlite-rollout\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"custom-wallpapers-message-rollout-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"custom-wallpapers-no-message-rollout-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"default-ui-experiment-logo-in-corner-rollout\",\"branchSlug\":\"logo-in-corner\"},{\"experimentSlug\":\"deprecate-ipaddrany-rollout-for-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\",\"branchSlug\":\"next-sign-up-modal-cta\"},{\"experimentSlug\":\"device-migration-accounts-toolbar-icon\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"device-migration-accounts-toolbar-icon-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"disable-cookie-store-api-in-firefox-136\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"disable-enrollment-status-telemetry-for-firefox-desktop\",\"branchSlug"
		"\":\"control\"},{\"experimentSlug\":\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"downsample-uptakeremotecontent-events\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"enable-newtab-telemetry-by-time-zone-offset\",\"branchSlug\":\"branch\"},{\"experimentSlug\":\"enable-nimbus-sql-datastore\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"enable-nimbus-unenrollment-synchronization\",\"branchSlug\":\"control\""
		"},{\"experimentSlug\":\"encrypted-client-hello-fallback-mechanism\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\",\"branchSlug\":\"enforce\"},{\"experimentSlug\":\"etp-strict-message-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\",\"branchSlug\":\"treatment-fast-udp\"},{\"experimentSlug\":\"firefox-backup-feature-gradual-rollout\",\"branchSlug\":\"treatment\"},{\""
		"experimentSlug\":\"flip-the-pref-for-the-mfcdm-origin-fliter\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"fox-doodle-and-tail-fox-2025-v2-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"fox-doodle-multi-action-cta-2025-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"fx-accounts-ping-release-rollout-2\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"fx-view-discoverability-2025-rollout\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\""
		"hide-descriptions-on-newtab-articles-fix-us-rollout\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"hide-descriptions-on-newtab-articles-us-rollout\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"higher-placement-phase-3-rollout\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"https-upgrades-fallback-time-bugfix\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"link-previews-all-channel-rollout-with-onboarding\",\"branchSlug\":\"long-press-preview\"},{\"experimentSlug\":\""
		"link-previews-all-channel-rollout-without-onboarding\",\"branchSlug\":\"long-press-preview\"},{\"experimentSlug\":\"link-previews-mvp-long-press-preview-rollout\",\"branchSlug\":\"long-press-preview\"},{\"experimentSlug\":\"login-status-advisory-callout-rollout\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"long-term-holdback-2025h1-growth-desktop\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"mozilla-foundation-donation-promotion-moments-page\",\"branchSlug\":\"control\"},{\""
		"experimentSlug\":\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\",\"branchSlug\":\"treatment-d\"},{\"experimentSlug\":\"multiple-profile-switching-feature-v1-rollout\",\"branchSlug\":\"treatment-a-multi-profiles\"},{\"experimentSlug\":\"multiple-profile-switching-rollout-v2\",\"branchSlug\":\"treatment-a-multi-profiles\"},{\"experimentSlug\":\"new-alt-text-flow-and-generation-in-pdfs-for-en-locales-outside-of-eu-pre-137\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\""
		"new-sync-setup-flow\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"new-tab-145020250919173227-to-release\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"new-tab-145120251009134757-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"new-tab-147020251114194929-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"new-tab-14802025121163751-to-release\",\"branchSlug\":\"rollout\"},{\"experimentSlug\":\"new-tab-automated-personalization-local-ranking-2\",\"branchSlug\""
		":\"local-and-server\"},{\"experimentSlug\":\"new-tab-content-card-ui-updates\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"ohttp-merino-content-recs-rollout\",\"branchSlug\":\"enable-ohttp\"},{\"experimentSlug\":\"one-click-sponsored-settings\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"pdf-annotations-highlight-treatment-b-rollout\",\"branchSlug\":\"treatment-b\"},{\"experimentSlug\":\"pdf-annotations-signatures-ab-experiment\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"performance-metric-calibration-release-134\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"perplexity-secondary-search-initial-part2\",\"branchSlug\":\"try-with-cta\"},{\"experimentSlug\":\"pin-frequently-used-websites-143-promo-rollout-all-locales\",\"branchSlug\":\"rollout-branch\"},{\"experimentSlug\":\"private-window-visual-refresh-rollout\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"product-insight-telemetry-via-server-knobs-rollout-release\",\"branchSlug\":\"control-rollout\"},{\""
		"experimentSlug\":\"refactor-new-tab-telemetry-rollout\",\"branchSlug\":\"treatment\"},{\"experimentSlug\":\"report-this-ad\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\",\"branchSlug\":\"sign-in-with-call-out\"},{\"experimentSlug\":\"search-result-de-duplication\",\"branchSlug\":\"de-duplication\"},{\"experimentSlug\":\"sections-rollout-us\",\"branchSlug\":\"sections\"},{\"experimentSlug\":\""
		"shortcuts-visual-refresh-shortcuts-redesign-rollout\",\"branchSlug\":\"shortcuts-redesign\"},{\"experimentSlug\":\"simplified-chatbot-onboarding-short-copy-1-step-rollout\",\"branchSlug\":\"treatment-c-short-copy-1-step\"},{\"experimentSlug\":\"smart-shortcuts-v3-sticky\",\"branchSlug\":\"very-sticky-thompson\"},{\"experimentSlug\":\"smart-tab-groups-rollout\",\"branchSlug\":\"smart-tab-groups\"},{\"experimentSlug\":\"spoc-placement-second-row\",\"branchSlug\":\"control\"},{\"experimentSlug\":\""
		"spoc-positions-and-placements-rollout\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"storage-access-heuristic-restriction-rollout\",\"branchSlug\":\"treatment-branch\"},{\"experimentSlug\":\"store-new-tab-content-interactions-locally\",\"branchSlug\":\"store-events\"},{\"experimentSlug\":\"tab-groups-50-rollout-no-onboarding\",\"branchSlug\":\"tab-groups\"},{\"experimentSlug\":\"tab-groups-promotional-onboarding\",\"branchSlug\":\"onboarding\"},{\"experimentSlug\":\""
		"taskbar-tabs-discovery-en-rollout\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"taskbar-tabs-discovery-global-rollout\",\"branchSlug\":\"delivery\"},{\"experimentSlug\":\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"unified-search-button-callout-rollout-v1\",\"branchSlug\":\"control\"},{\"experimentSlug\":\"us-review-checker-131-137-continuity-rollout\",\"branchSlug\":\"rollout-treatment\"},{\"experimentSlug\":\""
		"visual-card-updates\",\"branchSlug\":\"updated\"},{\"experimentSlug\":\"visual-search-rollout\",\"branchSlug\":\"google-lens-rollout\"},{\"experimentSlug\":\"whats-new-page-136\",\"branchSlug\":\"treatment-a\"},{\"experimentSlug\":\"windows-ui-automation-release-rollout\",\"branchSlug\":\"rollout\"}],\"nimbus_targeting_context.home_page_settings\":{\"isCustomUrl\":false,\"isDefault\":true,\"isLocked\":false,\"isWebExt\":false},\"nimbus_targeting_context.is_default_handler\":{\"html\":true,\"pdf\""
		":false},\"nimbus_targeting_environment.pref_values\":{\"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__addons\":true,\"browser__newtabpage__activity_stream__asrouter__userprefs__cfr__features\":true,\"browser__newtabpage__activity_stream__feeds__section__highlights\":false,\"browser__newtabpage__activity_stream__feeds__section__topstories\":false,\"browser__newtabpage__activity_stream__feeds__topsites\":false,\"browser__newtabpage__activity_stream__showSearch\":true,\""
		"browser__newtabpage__activity_stream__showSponsoredTopSites\":false,\"browser__newtabpage__enabled\":true,\"browser__startup__page\":3,\"browser__toolbars__bookmarks__visibility\":\"always\",\"browser__urlbar__lastUrlbarSearchSeconds\":1767370607,\"browser__urlbar__quicksuggest__dataCollection__enabled\":false,\"browser__urlbar__showSearchSuggestionsFirst\":true,\"browser__urlbar__suggest__quicksuggest__sponsored\":false,\"media__videocontrols__picture_in_picture__enabled\":true,\""
		"media__videocontrols__picture_in_picture__video_toggle__enabled\":true,\"media__videocontrols__picture_in_picture__video_toggle__has_used\":true,\"network__trr__mode\":0,\"security__sandbox__content__level\":8,\"termsofuse__acceptedDate\":\"0\",\"trailhead__firstrun__didSeeAboutWelcome\":true,\"nimbus__qa__pref_1\":\"default\",\"nimbus__qa__pref_2\":\"default\"},\"nimbus_targeting_context.active_rollouts\":[\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\",\""
		"account-adoption-pxi-menu-rollout-v2\",\"address-autofill-desktop-pref-release-rollout\",\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\",\"backgroundupdate-enable-unelevated-installations-rollout-3-release\",\"context-id-rotation-every-3-days\",\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\",\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\",\"downsample-uptakeremotecontent-events\",\""
		"enable-newtab-telemetry-by-time-zone-offset\",\"enable-nimbus-unenrollment-synchronization\",\"encrypted-client-hello-fallback-mechanism\",\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\",\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\",\"firefox-backup-feature-gradual-rollout\",\"fox-doodle-multi-action-cta-2025-rollout\",\"fx-accounts-ping-release-rollout-2\",\"link-previews-all-channel-rollout-with-onboarding\",\"link-previews-all-channel-rollout-without-onboarding\",\""
		"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\",\"multiple-profile-switching-rollout-v2\",\"new-tab-14802025121163751-to-release\",\"ohttp-merino-content-recs-rollout\",\"pdf-annotations-highlight-treatment-b-rollout\",\"pin-frequently-used-websites-143-promo-rollout-all-locales\",\"private-window-visual-refresh-rollout\",\"product-insight-telemetry-via-server-knobs-rollout-release\",\"refactor-new-tab-telemetry-rollout\",\""
		"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\",\"sections-rollout-us\",\"smart-tab-groups-rollout\",\"store-new-tab-content-interactions-locally\",\"taskbar-tabs-discovery-global-rollout\",\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\",\"visual-card-updates\",\"visual-search-rollout\",\"windows-ui-automation-release-rollout\"],\"nimbus_targeting_context.addons_info\":{\"addons\":[\"addons-search-detection@mozilla.com\",\""
		"data-leak-blocker@mozilla.com\",\"firefox@betterttv.net\",\"formautofill@mozilla.org\",\"ipp-activator@mozilla.com\",\"jid1-NIfFY2CA8fy1tg@jetpack\",\"moz-addon-prod@7tv.app\",\"newtab@mozilla.org\",\"pictureinpicture@mozilla.org\",\"treestyletab@piro.sakura.ne.jp\",\"uBlock0@raymondhill.net\",\"video-bg-play@timdream.org\",\"webcompat@mozilla.org\",\"{60B7679C-BED9-11E5-998D-8526BB8E7F8B}\",\"{f1f7b448-d666-46c6-9dfa-3ee4c5c83578}\"],\"hasInstalledAddons\":true},\""
		"nimbus_targeting_context.browser_settings\":{\"update\":{\"channel\":\"release\"}},\"nimbus_targeting_context.default_pdf_handler\":{\"knownBrowser\":false,\"registered\":true},\"nimbus_targeting_context.os\":{\"isLinux\":false,\"isMac\":false,\"windowsBuildNumber\":26100,\"windowsVersion\":10},\"nimbus_targeting_context.attribution_data\":{},\"nimbus_targeting_environment.user_set_prefs\":[\"nimbus.profilesdatastoreservice.read.enabled\",\"nimbus.profilesdatastoreservice.sync.enabled\",\""
		"browser.newtabpage.activity-stream.discoverystream.merino-provider.ohttp.enabled\",\"browser.newtabpage.activity-stream.telemetry.privatePing.enabled\",\"browser.newtabpage.activity-stream.telemetry.privatePing.redactNewtabPing.enabled\",\"browser.newtabpage.activity-stream.discoverystream.sections.personalization.enabled\",\"browser.newtabpage.activity-stream.discoverystream.sections.customizeMenuPanel.enabled\",\"browser.newtabpage.trainhopAddon.version\",\"browser.startup.page\",\""
		"signon.firefoxRelay.showToAllBrowsers\",\"pdfjs.enableAltText\",\"doh-rollout.mode\",\"doh-rollout.uri\",\"network.prefetch-next\",\"network.http.speculative-parallel-limit\",\"app.update.background.allowUpdatesForUnelevatedInstallations\",\"browser.toolbars.bookmarks.visibility\",\"browser.contextual-services.contextId.rotation-in-days\",\"dom.ipc.processPriorityManager.backgroundUsesEcoQoS\"],\"nimbus_targeting_context.active_experiments\":[\"long-term-holdback-2025h1-growth-desktop\",\""
		"mozilla-foundation-donation-promotion-moments-page\"],\"nimbus_targeting_context.primary_resolution\":{\"height\":816,\"width\":1382},\"nimbus_targeting_context.user_monthly_activity\":[{\"numberOfURLsVisited\":59,\"date\":\"2025-12-06\"},{\"numberOfURLsVisited\":69,\"date\":\"2025-12-07\"},{\"numberOfURLsVisited\":203,\"date\":\"2025-12-08\"},{\"numberOfURLsVisited\":74,\"date\":\"2025-12-09\"},{\"numberOfURLsVisited\":220,\"date\":\"2025-12-10\"},{\"numberOfURLsVisited\":546,\"date\":\""
		"2025-12-11\"},{\"numberOfURLsVisited\":101,\"date\":\"2025-12-12\"},{\"numberOfURLsVisited\":80,\"date\":\"2025-12-13\"},{\"numberOfURLsVisited\":87,\"date\":\"2025-12-14\"},{\"numberOfURLsVisited\":353,\"date\":\"2025-12-15\"},{\"numberOfURLsVisited\":220,\"date\":\"2025-12-16\"},{\"numberOfURLsVisited\":99,\"date\":\"2025-12-17\"},{\"numberOfURLsVisited\":100,\"date\":\"2025-12-18\"},{\"numberOfURLsVisited\":227,\"date\":\"2025-12-19\"},{\"numberOfURLsVisited\":60,\"date\":\"2025-12-20\"},{\""
		"numberOfURLsVisited\":280,\"date\":\"2025-12-21\"},{\"numberOfURLsVisited\":313,\"date\":\"2025-12-22\"},{\"numberOfURLsVisited\":237,\"date\":\"2025-12-23\"},{\"numberOfURLsVisited\":60,\"date\":\"2025-12-24\"},{\"numberOfURLsVisited\":31,\"date\":\"2025-12-25\"},{\"numberOfURLsVisited\":449,\"date\":\"2025-12-26\"},{\"numberOfURLsVisited\":241,\"date\":\"2025-12-27\"},{\"numberOfURLsVisited\":159,\"date\":\"2025-12-28\"},{\"numberOfURLsVisited\":197,\"date\":\"2025-12-29\"},{\""
		"numberOfURLsVisited\":279,\"date\":\"2025-12-30\"},{\"numberOfURLsVisited\":247,\"date\":\"2025-12-31\"},{\"numberOfURLsVisited\":60,\"date\":\"2026-01-01\"},{\"numberOfURLsVisited\":44,\"date\":\"2026-01-02\"}]},\"quantity\":{\"nimbus_targeting_context.arch_bits\":64,\"nimbus_targeting_context.build_id\":1,\"nimbus_targeting_context.memory_mb\":32439,\"nimbus_targeting_context.total_bookmarks_count\":19,\"nimbus_targeting_context.firefox_version\":146,\""
		"nimbus_targeting_context.profile_group_profile_count\":0,\"nimbus_targeting_context.profile_age_created\":1708446624084,\"nimbus_targeting_context.addresses_saved\":5},\"boolean\":{\"nimbus_targeting_context.user_prefers_reduced_motion\":false,\"nimbus_targeting_context.has_pinned_tabs\":false,\"nimbus_targeting_context.is_fx_a_enabled\":true,\"nimbus_targeting_context.uses_firefox_sync\":false,\"nimbus_targeting_context.is_first_startup\":false,\"nimbus_targeting_context.is_default_browser\":true"
		",\"nimbus_targeting_context.does_app_need_pin\":false,\"nimbus_targeting_context.is_fx_a_signed_in\":true,\"nimbus_targeting_context.has_active_enterprise_policies\":false,\"nimbus_targeting_context.is_msix\":false},\"uuid\":{\"legacy.telemetry.profile_group_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\",\"legacy.telemetry.client_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\"}}}", 
		LAST);

	web_custom_request("3972f01f-dd4d-4961-a8dc-9811da0a1e1c", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/3972f01f-dd4d-4961-a8dc-9811da0a1e1c", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":5724,\"start_time\":\"2026-01-02T10:30:48.000-06:00\",\"end_time\":\"2026-01-02T10:45:28.255-06:00\",\"reason\":\"active\",\"experiments\":{\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\""
		":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\""
		"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\""
		"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\","
		"\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"windows_build_number\":26100,\"app_build\":"
		"\"20251217121356\",\"app_channel\":\"release\",\"architecture\":\"x86_64\",\"os_version\":\"10.0\",\"os\":\"Windows\",\"app_display_version\":\"146.0.1\",\"locale\":\"en-US\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2025-01-18-06:00\",\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\"},\"metrics\":{\"string\":{\"usage.distribution_id\":\"default\",\"startup.profile_selection_reason\":\"default\"},\"boolean\":{\"usage.is_default_browser\":true},\"labeled_counter\":{\""
		"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}},\"object\":{\"glean.attribution.ext\":{\"dlsource\":\"mozillaci\"},\"glean.distribution.ext\":{}},\"counter\":{\"browser.engagement.uri_count\":7,\"browser.engagement.active_ticks\":20},\"uuid\":{\"legacy.telemetry.client_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\",\"legacy.telemetry.profile_group_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\"}}}", 
		LAST);

	web_custom_request("4b0e6a33-2c67-45f6-94ef-a803a6274811", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/fx-accounts/1/4b0e6a33-2c67-45f6-94ef-a803a6274811", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":33,\"start_time\":\"2026-01-02T10:30:48.000-06:00\",\"end_time\":\"2026-01-02T10:45:28.274-06:00\",\"reason\":\"active\",\"experiments\":{\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra"
		"\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\""
		",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\""
		"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"first_run_date\":\"2025-01-18-06:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"app_channel\":\"release\",\"app_display_version\":\"146.0.1\",\"os_version\":\"10.0\",\"os\":\"Windows\",\"app_build\":\"20251217121356\",\"locale\":\"en-US\",\"architecture\":\"x86_64\",\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\",\"windows_build_number\":26100},\"metrics\":{\"uuid\":{\"client_association.legacy_client_id\":\""
		"b189d8eb-276a-459d-b5a0-e6f121498a13\"},\"string\":{\"client_association.uid\":\"0294e33c230a4a6fb29daeff3cf1ec7f\"}}}", 
		LAST);

	web_custom_request("aff2faac-3c5e-47db-a028-07a256e69a65", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/usage-reporting/1/aff2faac-3c5e-47db-a028-07a256e69a65", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"metrics\":{\"datetime\":{\"usage.first_run_date\":\"2024-02-20-06:00\"},\"string\":{\"usage.app_build\":\"20251217121356\",\"usage.os\":\"WINNT\",\"usage.app_display_version\":\"146.0.1\",\"usage.distribution_id\":\"default\",\"usage.os_version\":\"10.0\",\"usage.app_channel\":\"release\"},\"boolean\":{\"usage.is_default_browser\":true,\"usage.windows_backup_enabled\":true},\"counter\":{\"browser.engagement.active_ticks\":20,\"browser.engagement.uri_count\":7},\"quantity\":{\""
		"usage.windows_user_profile_age_in_days\":313,\"usage.windows_build_number\":26100},\"uuid\":{\"usage.profile_group_id\":\"d0a0b3f7-f386-471c-a903-784ea9b2e5a4\",\"usage.profile_id\":\"d04da519-03fa-4b31-a66e-b806e5bfa256\"}}}", 
		LAST);

	web_custom_request("dns-query_7", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x04ocsp\\x05r2m04\\x0Bamazontrust\\x03com\\x00\\x00\\x1C\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00I\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00="
		"\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_custom_request("dns-query_8", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x04ocsp\\x05r2m04\\x0Bamazontrust\\x03com\\x00\\x00\\x01\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00I\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00="
		"\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_custom_request("a3cc1657-7888-4c7c-a5f4-5bbeeb9d5bc3", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/a3cc1657-7888-4c7c-a5f4-5bbeeb9d5bc3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":52,\"start_time\":\"2026-01-02T10:30:48.000-06:00\",\"end_time\":\"2026-01-02T10:45:28.314-06:00\",\"reason\":\"pre_init\",\"experiments\":{\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\""
		"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\""
		"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\""
		"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\""
		"nimbus-nimbus\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"first_run_date\":\"2025-01-18-06:00\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"architecture\":\"x86_64\",\"app_build\":\"20251217121356\",\"os_version\":\"10.0\",\"os\":\"Windows\",\"locale\":\"en-US\",\"app_display_version\":\"146.0.1\",\"app_channel\":\"release\",\"windows_build_number\":26100,\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\"},\"metrics\":{\"object\":{\"glean.database.load_sizes\":{\"new\""
		":341390,\"open\":341390,\"post_open\":341390,\"post_open_user\":341390,\"post_load_ping_lifetime_data\":341390,\"user_records\":66,\"ping_records\":1655,\"application_records\":312,\"ping_memory_records\":1655},\"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767372312,\"file_count\":1,\"files\":[{\"file_name\":\"data.safe.bin\",\"file_created\":1767372310,\"file_modified\":1767372312,\"file_size\":341390}]},{\"dir_name\":"
		"\"events\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767372311,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\":1767323415,\"file_modified\":1767372311,\"file_size\":6865},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1718837138,\"file_modified\":1738769668,\"file_size\":931}]},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767372311,\"file_count\":3,\"files\":[{\"file_name\":\""
		"6c0e5122-ff2d-4576-adb9-548b257b8bfb\",\"file_created\":1767372310,\"file_modified\":1767372310,\"file_size\":6566},{\"file_name\":\"71121380-73d8-4b0b-9440-ef90797fff9f\",\"file_created\":1767372311,\"file_modified\":1767372311,\"file_size\":6158},{\"file_name\":\"aa5245d3-c534-413e-a70f-07210c0dc7a2\",\"file_created\":1767372311,\"file_modified\":1767372311,\"file_size\":27000}]}]},\"counter\":{\"glean.health.init_count\":27,\"glean.upload.pending_pings\":3},\"timing_distribution\":{\""
		"glean.upload.send_success\":{\"values\":{\"225726412\":1,\"1276901416\":1,\"319225354\":1,\"189812531\":3,\"413984066\":1,\"174058858\":4,\"206992033\":2,\"7223245205\":1},\"sum\":11322810700},\"glean.validation.shutdown_dispatcher_wait\":{\"values\":{\"6468501\":1},\"sum\":7010000},\"glean.upload.send_failure\":{\"values\":{\"319225354\":1,\"11863283\":1,\"9367390095\":1,\"16777216\":1},\"sum\":10394045600},\"glean.validation.shutdown_wait\":{\"values\":{\"3846193\":1},\"sum\":4013000}},\"uuid\":"
		"{\"legacy.telemetry.profile_group_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\",\"legacy.telemetry.client_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\"},\"memory_distribution\":{\"glean.upload.pending_pings_directory_size\":{\"values\":{\"37315\":1},\"sum\":38912},\"glean.database.size\":{\"values\":{\"339958\":1},\"sum\":341390}},\"labeled_counter\":{\"glean.upload.ping_upload_failure\":{\"recoverable\":4},\"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":1}}}}", 
		LAST);

	web_custom_request("ocsp.r2m04.amazontrust.com", 
		"URL=http://ocsp.r2m04.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\x02\\x99Zv\\xD5\\x04L\\xFE\\xB0\\x98\\xB7\\x98\\x81IGz\\x9F\\xACg&\\x04\\x14\\xA0\\xAF\\xD5\\xF1\\xAD\\x0486J\\xE1\\x8A}Z\\xF50\\xAF\\x91\\xA0Q\\xA1\\x02\\x10\n\\xF9\\xFA\n\\xC2\\xD8\\xC024d\\xE9a\\xC6%\\xAA\\x10", 
		LAST);

	web_custom_request("ocsp.r2m04.amazontrust.com_2", 
		"URL=http://ocsp.r2m04.amazontrust.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14\\x02\\x99Zv\\xD5\\x04L\\xFE\\xB0\\x98\\xB7\\x98\\x81IGz\\x9F\\xACg&\\x04\\x14\\xA0\\xAF\\xD5\\xF1\\xAD\\x0486J\\xE1\\x8A}Z\\xF50\\xAF\\x91\\xA0Q\\xA1\\x02\\x10\n\\xF9\\xFA\n\\xC2\\xD8\\xC024d\\xE9a\\xC6%\\xAA\\x10", 
		LAST);

	web_custom_request("dns-query_9", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x04prod\rohttp-gateway\\x04prod\\x0Bwebservices\\x06mozgcp\\x03net\\x00\\x00\\x1C\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x005\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00)\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

	web_custom_request("dns-query_10", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x04prod\rohttp-gateway\\x04prod\\x0Bwebservices\\x06mozgcp\\x03net\\x00\\x00\\x01\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x005\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00)\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

/* Added by Async CodeGen.
ID=LongPoll_1
ScanType = Recording

The following URLs are considered part of this conversation:
	https://mozilla.cloudflare-dns.com/dns-query

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	LongPoll_1_RequestCB
	LongPoll_1_ResponseCB
 */
	web_reg_async_attributes("ID=LongPoll_1", 
		"Pattern=LongPoll", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"RequestCB=LongPoll_1_RequestCB", 
		"ResponseCB=LongPoll_1_ResponseCB", 
		LAST);

	web_custom_request("dns-query_11", 
		"URL=https://mozilla.cloudflare-dns.com/dns-query", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/dns-message", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/dns-message", 
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\rmozilla-ohttp\\x0Bfastly-edge\\x03com\\x00\\x00\\x1C\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00F\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00"
		":\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00", 
		LAST);

/* Removed by Async CodeGen.
ID = LongPoll_1
 */
	/*
 web_custom_request("dns-query_12",
		"URL=https://mozilla.cloudflare-dns.com/dns-query",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/dns-message",
		"Referer=",
		"Snapshot=t34.inf",
		"Mode=HTML",
		"EncType=application/dns-message",
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\rmozilla-ohttp\\x0Bfastly-edge\\x03com\\x00\\x00\\x01\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00F\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x00:\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00",
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_1
 */
	/*
 web_custom_request("dns-query_13",
		"URL=https://mozilla.cloudflare-dns.com/dns-query",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/dns-message",
		"Referer=",
		"Snapshot=t35.inf",
		"Mode=HTML",
		"EncType=application/dns-message",
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x12easylist-downloads\\x0Badblockplus\\x03org\\x00\\x00A\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00A\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x005\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00",
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_1
 */
	/*
 web_custom_request("dns-query_14",
		"URL=https://mozilla.cloudflare-dns.com/dns-query",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/dns-message",
		"Referer=",
		"Snapshot=t36.inf",
		"Mode=HTML",
		"EncType=application/dns-message",
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x12easylist-downloads\\x0Badblockplus\\x03org\\x00\\x00\\x1C\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00A\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x005\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00",
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = LongPoll_1
 */
	/*
 web_custom_request("dns-query_15",
		"URL=https://mozilla.cloudflare-dns.com/dns-query",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/dns-message",
		"Referer=",
		"Snapshot=t37.inf",
		"Mode=HTML",
		"EncType=application/dns-message",
		"BodyBinary=\\x00\\x00\\x01\\x00\\x00\\x01\\x00\\x00\\x00\\x00\\x00\\x01\\x12easylist-downloads\\x0Badblockplus\\x03org\\x00\\x00\\x01\\x00\\x01\\x00\\x00)\\x10\\x00\\x00\\x00\\x00\\x00\\x00A\\x00\\x08\\x00\\x04\\x00\\x01\\x00\\x00\\x00\\x0C\\x005\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00",
		LAST); 
	*/

/* Added by Async CodeGen.
ID = LongPoll_1
 */
	web_stop_async("ID=LongPoll_1", 
		LAST);

	lr_think_time(4);

	web_submit_data("reserve.php", 
		"Action=https://blazedemo.com/reserve.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=fromPort", "Value=Philadelphia", ENDITEM, 
		"Name=toPort", "Value=Rome", ENDITEM, 
		LAST);

	web_custom_request("mozilla-ohttp.fastly-edge.com", 
		"URL=https://mozilla-ohttp.fastly-edge.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=message/ohttp-res", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=message/ohttp-req", 
		"BodyBinary=\\x80\\x00 \\x00\\x01\\x00\\x01\\x05\\xB5T\\xC8\\xB7\\x93\\xF4\\x85\\x87\\xD1]\\xFE_\\x9F?\\xE7\\x9A\\x89\\xCB\\x0F\\xC9\\x93\\x9A\\xF0\\xA6\\x9A\\xC9L\\xA8h\\xDCs\\xEA\\xCD-\\xDELs\\x9F@\\xF4\\x9C\\xC4\\xA9\\xD4|\\xFFot\\xEA\\x1C\\xEA\\x1E\\x0C\\x05\\xAB\\x81\\xE5\\x08\\x18\\xFCn~\\xB0\\x00\\xE2\\xE0>M\\x089\\xDC7\\x13\\xA1z%\r%U\\xB00%i\\xD44\\xACY\\x85Y\tXo(\\xDC\\xCD\\x01\\x90y\\x86\\x8B]n\\xCC\\xA9TP\r\\xEC\\x1F\\xD2j\\x0E\\xB6,g\\xC3\\x02\\xBCv\\xA3{\\xD4y\\xCF\\xCC\\xD5"
		"(\\xA4\\x90\\x9C$]\\xE7z_V\\x07\\xD1\\xD9\\xDD\\x84\\x11\\x8E\\x99!\\x97Pm\\x8C\\xCA\\x11\\x801\\xE3\\xD6J\\xD1;t\\xF1\t\\x8F\n\\xD2:W\\xDD\\x9F\\xCC/r\\xB4\\x9C\\x04\\x81Q%\\xE0\\x16\\x88\\x8A\\x8D\\xC1\\xEA\\x11A\\x0E\\xC5\\xFC\\x8D\\xD8\"\\xBCd5\\xD8#\t\\xC4m/J\\x15Lq0)Y\\xDE(\\xFA\\xDF\\xC4^\\xACf\\xB5^\\x15\\x85% \\x81\\xDE\\x14\\x06\\xEA\\x0B\\xAA~_\\xD3\\xB1 \\xD6\\x85%\\xB7\\x0B\\xC6\\x8A{fmBk*\\xB9i]\\x03\\xBDa\\x82\\xAA\\xA8\\xFD\\xB4\\x9F\\x1D|)"
		"5\\x83\\xCB\\x1CrH\\xD4i\\x9F4\\xB7\\xC0\\xA5\\x85\\x11\\xE7$\\xD4\\xA8\\xDF\\xAE08v\\xF7\\xE4\\x99\\xD3\\xBEF\\xB6w3\\xEE\\x15\\xE9\\xCA\\xF7\\x93\\xE1\\x00\\x8A\\xEDb\\xBE\\x7F`X2r\\x89\\xB3\\xE1\\xA3\\xD4ET\\xB2\\xD9\\xEC\\x16~B\\xC3\\xB8\\xB19b\\xEDS7\\x1A\\xA9\\xE7\\xEB\\x0B\\xFEQ\\xA0\\xE45a\\x90\\xF3q}\\x97\\xFF\\x9A\\x8D\\xABI\\xB0\\x91\\xA95k%\\xC6\\xC0L\\x9D\\xE6!\\xDC\\x93\\xC6\\x8F\\xA2\\xCC69\\x91\\xD8\\x10\\xF7h\\x8B\r\\x97\\xA0\""
		"\\xD7\\xC3\\xD2\\xB7\\x9CT\\xB4\\x8C\\x1D1\\xBE\\x0C\\x1E\\x07yp\\x7F\\xB9\\xFF\\xDB\\x9B\\x81\\xEA\\x03 \\x82\\xE7}\\xF0f\\xFD\\x87\\xCEr/yq\\xB7\\xECZ\\x1D\\xD3\n\\x19v\\x82\\xEF\\xE7\\xE4\\x7F)k\\xCD\\xB5\\x9B\\xF3 i\\xECq_Hq\\x99\\xBF$\\xF3z\\xC4~\\xF0\\xEE\\x8F\\xF5s\\xB7c s\\xF3\\xE4i\\x19g\\x96-u8Rv\\x904.YXON\\xDF\\xEF\\x80mIi\\\\\\x12D[\\xEE\\x90\\x9D-\\xB4\\xE9\\xBE\\xA0\\xCEn/?\\xF6\n++)~7(fP", 
		LAST);

	web_url("experiments.json", 
		"URL=https://easylist-downloads.adblockplus.org/ab-testing/experiments.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("1ed07748-fc8e-4034-96ac-7c98d1d3976e", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/health/1/1ed07748-fc8e-4034-96ac-7c98d1d3976e", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":53,\"start_time\":\"2026-01-02T10:45:28.000-06:00\",\"end_time\":\"2026-01-02T10:45:28.345-06:00\",\"reason\":\"post_init\",\"experiments\":{\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\""
		"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release\":{\"branch\":\"rollout\",\""
		"extra\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}"
		"},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\""
		"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":{\""
		"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\""
		"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\""
		"windows_build_number\":26100,\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2025-01-18-06:00\",\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\",\"app_display_version\":\"146.0.1\",\"architecture\":\"x86_64\",\"app_channel\":\"release\",\"app_build\":\"20251217121356\",\"os\":\"Windows\",\"locale\":\"en-US\",\"os_version\":\"10.0\"},\"metrics\":{\"counter\":{\"glean.health.init_count\":27},\"object\":{\"glean.health.data_directory_info\":[{\"dir_name\":\"db\",\"dir_exists\""
		":true,\"dir_created\":1708446626,\"dir_modified\":1767372328,\"file_count\":1,\"files\":[{\"file_name\":\"data.safe.bin\",\"file_created\":1767372310,\"file_modified\":1767372328,\"file_size\":329007}]},{\"dir_name\":\"events\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767372327,\"file_count\":2,\"files\":[{\"file_name\":\"events\",\"file_created\":1767323415,\"file_modified\":1767372327,\"file_size\":0},{\"file_name\":\"prototype-no-code-events\",\"file_created\":1718837138"
		",\"file_modified\":1738769668,\"file_size\":931}]},{\"dir_name\":\"pending_pings\",\"dir_exists\":true,\"dir_created\":1708446626,\"dir_modified\":1767372328,\"file_count\":10,\"files\":[{\"file_name\":\"3972f01f-dd4d-4961-a8dc-9811da0a1e1c\",\"file_created\":1767372328,\"file_modified\":1767372328,\"file_size\":5473},{\"file_name\":\"4b0e6a33-2c67-45f6-94ef-a803a6274811\",\"file_created\":1767372328,\"file_modified\":1767372328,\"file_size\":5097},{\"file_name\":\""
		"6c0e5122-ff2d-4576-adb9-548b257b8bfb\",\"file_created\":1767372310,\"file_modified\":1767372310,\"file_size\":6566},{\"file_name\":\"71121380-73d8-4b0b-9440-ef90797fff9f\",\"file_created\":1767372311,\"file_modified\":1767372311,\"file_size\":6158},{\"file_name\":\"723dfebc-5c47-41e4-b101-33908b62bad9\",\"file_created\":1767372327,\"file_modified\":1767372327,\"file_size\":1122},{\"file_name\":\"a3cc1657-7888-4c7c-a5f4-5bbeeb9d5bc3\",\"file_created\":1767372328,\"file_modified\":1767372328,\""
		"file_size\":7221},{\"file_name\":\"aa5245d3-c534-413e-a70f-07210c0dc7a2\",\"file_created\":1767372311,\"file_modified\":1767372311,\"file_size\":27000},{\"file_name\":\"aff2faac-3c5e-47db-a028-07a256e69a65\",\"file_created\":1767372328,\"file_modified\":1767372328,\"file_size\":829},{\"file_name\":\"cdf9aab2-50e6-4d9c-9dfb-0ffc8a27bcac\",\"file_created\":1767372326,\"file_modified\":1767372326,\"file_size\":13076},{\"file_name\":\"f9d63b0d-1323-4f05-90f1-2828713fe597\",\"file_created\":1767372328,"
		"\"file_modified\":1767372328,\"file_size\":22170}]}]},\"uuid\":{\"legacy.telemetry.profile_group_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\",\"legacy.telemetry.client_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\"}}}", 
		LAST);

	web_custom_request("cdf9aab2-50e6-4d9c-9dfb-0ffc8a27bcac", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/cdf9aab2-50e6-4d9c-9dfb-0ffc8a27bcac", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t42.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":3407,\"start_time\":\"2026-01-02T10:30:45.000-06:00\",\"end_time\":\"2026-01-02T10:45:26.726-06:00\",\"reason\":\"startup\",\"experiments\":{\"pin-frequently-used-websites-143-promo-rollout-all-locales\":{\"branch\":\"rollout-branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"long-term-holdback-2025h1-growth-desktop\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"store-new-tab-content-interactions-locally\":{\"branch\":\"store-events\",\"extra\":"
		"{\"type\":\"nimbus-rollout\"}},\"enable-newtab-telemetry-by-time-zone-offset\":{\"branch\":\"branch\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"context-id-rotation-every-3-days\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enforce-crlite-results-and-limit-use-of-ocsp-rollout\":{\"branch\":\"enforce\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"firefox-backup-feature-gradual-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"link-previews-all-channel-rollout-without-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"windows-ui-automation-release-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fox-doodle-multi-action-cta-2025-rollout\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"encrypted-client-hello-fallback-mechanism\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"new-tab-14802025121163751-to-release"
		"\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"refactor-new-tab-telemetry-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"product-insight-telemetry-via-server-knobs-rollout-release\":{\"branch\":\"control-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"backgroundupdate-enable-unelevated-installations-rollout-3-release\":{\"branch\":\"enabled\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fx-accounts-ping-release-rollout-2\":{\"branch\":\""
		"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"roll-out-expanded-sign-in-pxi-toolbar-button-wcallout-signed-out\":{\"branch\":\"sign-in-with-call-out\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"sections-rollout-us\":{\"branch\":\"sections\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"unified-api-for-spocs-and-top-sites-controlled-rollout-for-release-133\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-card-updates\":{\"branch\":\"updated\",\"extra\":{\"type\":\""
		"nimbus-rollout\"}},\"smart-tab-groups-rollout\":{\"branch\":\"smart-tab-groups\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ohttp-merino-content-recs-rollout\":{\"branch\":\"enable-ohttp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"taskbar-tabs-discovery-global-rollout\":{\"branch\":\"delivery\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"link-previews-all-channel-rollout-with-onboarding\":{\"branch\":\"long-press-preview\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"1-callout-contextual-chatbot-suggestion-treatment-a-tab-switching-copy-rollout\":{\"branch\":\"treatment-a-tab-switching-copy\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"enable-nimbus-unenrollment-synchronization\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"account-adoption-pxi-menu-rollout-v2\":{\"branch\":\"treatment-a\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"ai-chatbot-page-summarization-mvp-treatment-a-callout-badge-rollout-v2\":{\"branch\":\""
		"treatment-a-callout-badge\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-foundation-donation-promotion-moments-page\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-nimbus\"}},\"private-window-visual-refresh-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"pdf-annotations-highlight-treatment-b-rollout\":{\"branch\":\"treatment-b\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"fast-udp-for-firefox-treatment-fast-udp-release-rollout\":{\"branch\":\""
		"treatment-fast-udp\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"address-autofill-desktop-pref-release-rollout\":{\"branch\":\"enable-address-autofill\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"mozilla-vpn-in-private-browsing-treatment-d-rollout-en-only\":{\"branch\":\"treatment-d\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"disable-enrollment-status-telemetry-for-firefox-desktop-via-nimbustelemetry\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}},\""
		"multiple-profile-switching-rollout-v2\":{\"branch\":\"treatment-a-multi-profiles\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"visual-search-rollout\":{\"branch\":\"google-lens-rollout\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"desktop-release-rollout-show-relay-to-all-browsers-next-sign-up-modal-cta\":{\"branch\":\"next-sign-up-modal-cta\",\"extra\":{\"type\":\"nimbus-rollout\"}},\"downsample-uptakeremotecontent-events\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\"}}}},\""
		"client_info\":{\"telemetry_sdk_build\":\"66.1.2\",\"client_id\":\"239171f7-8dd5-4379-b459-d37192315b39\",\"app_channel\":\"release\",\"app_display_version\":\"146.0.1\",\"app_build\":\"20251217121356\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"architecture\":\"x86_64\",\"locale\":\"en-US\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2025-01-18-06:00\",\"windows_build_number\":26100},\"metrics\":{\"counter\":{\"browser.engagement.tab_open_event_count\":1,\""
		"browser.engagement.active_ticks\":21,\"browser.engagement.uri_count\":7},\"boolean\":{\"urlbar.pref_suggest_online_available\":false,\"urlbar.pref_suggest_sponsored\":false,\"urlbar.pref_suggest_topsites\":true,\"search.engine.default.overridden_by_third_party\":false,\"usage.is_default_browser\":true,\"policies.is_enterprise\":false,\"urlbar.pref_suggest_online_enabled\":true,\"search.engine.private.overridden_by_third_party\":false,\"urlbar.pref_suggest_all\":false},\"string\":{\""
		"search.engine.default.load_path\":\"[app]google\",\"region.home_region\":\"US\",\"search.engine.default.display_name\":\"Google\",\"search.engine.private.partner_code\":\"\",\"search.engine.private.provider_id\":\"\",\"search.engine.private.display_name\":\"\",\"search.engine.default.partner_code\":\"firefox-b-1-d\",\"search.engine.private.load_path\":\"\",\"search.engine.default.provider_id\":\"google\"},\"uuid\":{\"legacy.telemetry.client_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\",\""
		"legacy.telemetry.profile_group_id\":\"b189d8eb-276a-459d-b5a0-e6f121498a13\"},\"quantity\":{\"browser.engagement.max_concurrent_tab_count\":20,\"urlbar.pref_max_results\":10},\"url\":{\"search.engine.private.submission_url\":\"blank:\",\"search.engine.default.submission_url\":\"https://www.google.com/search?client=firefox-b-1-d&q=\"},\"object\":{\"glean.attribution.ext\":{\"dlsource\":\"mozillaci\"},\"glean.distribution.ext\":{}}},\"events\":[{\"timestamp\":0,\"category\":\"session_restore\",\""
		"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"path_key\":\"clean\",\"loadfail_reason\":\"N/A\",\"can_load\":\"true\",\"glean_timestamp\":\"1767371435673\"}},{\"timestamp\":0,\"category\":\"session_restore\",\"name\":\"backup_can_be_loaded_session_file\",\"extra\":{\"path_key\":\"clean\",\"can_load\":\"true\",\"glean_timestamp\":\"1767371435673\",\"loadfail_reason\":\"N/A\"}},{\"timestamp\":4,\"category\":\"session_restore\",\"name\":\"shutdown_success_session_startup\",\"extra\":{\""
		"shutdown_ok\":\"false\",\"shutdown_reason\":\"N/A\",\"glean_timestamp\":\"1767371435677\"}},{\"timestamp\":4335,\"category\":\"webcompatreporting\",\"name\":\"reason_dropdown\",\"extra\":{\"glean_timestamp\":\"1767371440008\",\"setting\":\"required\"}},{\"timestamp\":4438,\"category\":\"extension\",\"name\":\"sidebar_toggle\",\"extra\":{\"addon_name\":\"Tree Style Tab\",\"glean_timestamp\":\"1767371440111\",\"addon_id\":\"treestyletab@piro.sakura.ne.jp\",\"opened\":\"true\",\"version\":\"old\"}},"
		"{\"timestamp\":4597,\"category\":\"extension\",\"name\":\"sidebar_toggle\",\"extra\":{\"glean_timestamp\":\"1767371440270\",\"addon_id\":\"treestyletab@piro.sakura.ne.jp\",\"version\":\"old\",\"addon_name\":\"Tree Style Tab\",\"opened\":\"true\"}},{\"timestamp\":5707,\"category\":\"nimbus_events\",\"name\":\"startup_database_consistency\",\"extra\":{\"glean_timestamp\":\"1767371441380\",\"db_active_count\":\"39\",\"total_store_count\":\"100\",\"primary\":\"database\",\"total_db_count\":\"100\",\""
		"store_active_count\":\"39\",\"trigger\":\"startup\"}},{\"timestamp\":6170,\"category\":\"doh\",\"name\":\"state_enabled\",\"extra\":{\"glean_timestamp\":\"1767371441844\",\"value\":\"null\"}},{\"timestamp\":6171,\"category\":\"doh\",\"name\":\"evaluate_v2_heuristics\",\"extra\":{\"evaluateReason\":\"startup\",\"filtering\":\"\",\"captiveState\":\"not_captive\",\"platform\":\"\",\"value\":\"enable_doh\",\"glean_timestamp\":\"1767371441844\",\"steeredProvider\":\"\",\"canaries\":\"\",\"networkID\":"
		"\"BSRa7eVovypoGVI1mdo7AVctKouWasUH8Arpx+DNVys=\",\"enterprise\":\"\"}},{\"timestamp\":7100,\"category\":\"normandy\",\"name\":\"enroll_failed_nimbus_experiment\",\"extra\":{\"reason\":\"feature-conflict\",\"value\":\"smart-tab-groups-rollout-beta\",\"glean_timestamp\":\"1767371442773\"}},{\"timestamp\":7100,\"category\":\"nimbus_events\",\"name\":\"enroll_failed\",\"extra\":{\"experiment\":\"smart-tab-groups-rollout-beta\",\"glean_timestamp\":\"1767371442774\",\"reason\":\"feature-conflict\"}},{\""
		"timestamp\":7126,\"category\":\"normandy\",\"name\":\"enroll_failed_nimbus_experiment\",\"extra\":{\"value\":\"account-spotlight-modal-global-rollout-v3\",\"reason\":\"feature-conflict\",\"glean_timestamp\":\"1767371442799\"}},{\"timestamp\":7126,\"category\":\"nimbus_events\",\"name\":\"enroll_failed\",\"extra\":{\"experiment\":\"account-spotlight-modal-global-rollout-v3\",\"glean_timestamp\":\"1767371442799\",\"reason\":\"feature-conflict\"}},{\"timestamp\":7177,\"category\":\"extensions.data\","
		"\"name\":\"sync_usage_quotas\",\"extra\":{\"items_over_quota\":\"0\",\"items_count\":\"8\",\"backend\":\"rust\",\"addon_id\":\"treestyletab@piro.sakura.ne.jp\",\"glean_timestamp\":\"1767371442850\",\"total_size_bytes\":\"780\"}},{\"timestamp\":7422,\"category\":\"nimbus_events\",\"name\":\"is_ready\",\"extra\":{\"glean_timestamp\":\"1767371443096\"}},{\"timestamp\":7629,\"category\":\"containers\",\"name\":\"container_profile_loaded\",\"extra\":{\"glean_timestamp\":\"1767371443302\",\"containers\""
		":\"4\"}},{\"timestamp\":7827,\"category\":\"upgrade_dialog\",\"name\":\"trigger_reason\",\"extra\":{\"value\":\"not-major\",\"glean_timestamp\":\"1767371443500\"}},{\"timestamp\":10426,\"category\":\"normandy\",\"name\":\"expose_nimbus_experiment\",\"extra\":{\"glean_timestamp\":\"1767371446099\",\"featureId\":\"newtabTrainhopAddon\",\"value\":\"new-tab-14802025121163751-to-release\",\"branchSlug\":\"rollout\"}},{\"timestamp\":10426,\"category\":\"nimbus_events\",\"name\":\"exposure\",\"extra\":{"
		"\"branch\":\"rollout\",\"feature_id\":\"newtabTrainhopAddon\",\"experiment\":\"new-tab-14802025121163751-to-release\",\"glean_timestamp\":\"1767371446099\"}},{\"timestamp\":10855,\"category\":\"extension\",\"name\":\"sidebar_toggle\",\"extra\":{\"version\":\"old\",\"addon_name\":\"Tree Style Tab\",\"addon_id\":\"treestyletab@piro.sakura.ne.jp\",\"glean_timestamp\":\"1767371446528\",\"opened\":\"true\"}},{\"timestamp\":20740,\"category\":\"network.dns\",\"name\":\"trr_confirmation_context\",\""
		"extra\":{\"results\":\"tt+\",\"attemptCount\":\"3\",\"networkID\":\"r2TaD1Gu4jbZp3yS5BK1UDxjnMY=\",\"glean_timestamp\":\"1767371456413\",\"contextReason\":\"pref-change\",\"time\":\"14864.085300\",\"trigger\":\"pref-change\",\"value\":\"2\",\"captivePortal\":\"1\"}},{\"timestamp\":62961,\"category\":\"network.dns\",\"name\":\"trr_confirmation_context\",\"extra\":{\"results\":\"+\",\"time\":\"2453.277500\",\"glean_timestamp\":\"1767371498634\",\"attemptCount\":\"1\",\"trigger\":\"retry-trr\",\""
		"value\":\"2\",\"networkID\":\"r2TaD1Gu4jbZp3yS5BK1UDxjnMY=\",\"captivePortal\":\"1\",\"contextReason\":\"success\"}},{\"timestamp\":726310,\"category\":\"network.dns\",\"name\":\"trr_confirmation_context\",\"extra\":{\"time\":\"4897.733200\",\"networkID\":\"r2TaD1Gu4jbZp3yS5BK1UDxjnMY=\",\"attemptCount\":\"1\",\"contextReason\":\"success\",\"glean_timestamp\":\"1767372161983\",\"captivePortal\":\"1\",\"value\":\"2\",\"trigger\":\"retry-trr\",\"results\":\"+\"}},{\"timestamp\":728768,\"category\":"
		"\"network.dns\",\"name\":\"trr_confirmation_context\",\"extra\":{\"time\":\"697.546900\",\"trigger\":\"retry-trr\",\"captivePortal\":\"1\",\"glean_timestamp\":\"1767372164441\",\"value\":\"2\",\"networkID\":\"r2TaD1Gu4jbZp3yS5BK1UDxjnMY=\",\"results\":\"+\",\"attemptCount\":\"1\",\"contextReason\":\"success\"}},{\"timestamp\":745384,\"category\":\"network.dns\",\"name\":\"trr_confirmation_context\",\"extra\":{\"trigger\":\"retry-trr\",\"contextReason\":\"success\",\"glean_timestamp\":\""
		"1767372181057\",\"value\":\"2\",\"captivePortal\":\"1\",\"attemptCount\":\"3\",\"results\":\"tt+\",\"time\":\"15471.055900\",\"networkID\":\"r2TaD1Gu4jbZp3yS5BK1UDxjnMY=\"}},{\"timestamp\":794817,\"category\":\"network.dns\",\"name\":\"trr_confirmation_context\",\"extra\":{\"trigger\":\"retry-trr\",\"value\":\"2\",\"glean_timestamp\":\"1767372230490\",\"networkID\":\"r2TaD1Gu4jbZp3yS5BK1UDxjnMY=\",\"captivePortal\":\"1\",\"contextReason\":\"success\",\"attemptCount\":\"3\",\"results\":\"tt+\",\""
		"time\":\"14895.960900\"}},{\"timestamp\":805680,\"category\":\"network.dns\",\"name\":\"trr_confirmation_context\",\"extra\":{\"results\":\"t+\",\"glean_timestamp\":\"1767372241353\",\"captivePortal\":\"1\",\"value\":\"2\",\"trigger\":\"retry-trr\",\"contextReason\":\"success\",\"networkID\":\"r2TaD1Gu4jbZp3yS5BK1UDxjnMY=\",\"attemptCount\":\"2\",\"time\":\"8305.362800\"}},{\"timestamp\":838339,\"category\":\"urlbar\",\"name\":\"abandonment\",\"extra\":{\"actions\":\"none,none,none,none,none,none,"
		"none,none,none,none\",\"sap\":\"urlbar\",\"groups\":\"top_site,top_site,top_site,top_site,top_site,top_site,top_site,recent_search,recent_search,recent_search\",\"search_engine_default_id\":\"google-b-1-d\",\"n_chars\":\"0\",\"available_semantic_sources\":\"none\",\"n_results\":\"10\",\"glean_timestamp\":\"1767372274012\",\"interaction\":\"topsites\",\"abandonment_type\":\"blur\",\"n_words\":\"0\",\"search_mode\":\"\",\"results\":\"search_engine,top_site,top_site,tab,top_site,tab,top_site,"
		"recent_search,recent_search,recent_search\"}},{\"timestamp\":875877,\"category\":\"doh\",\"name\":\"state_shutdown\",\"extra\":{\"value\":\"null\",\"glean_timestamp\":\"1767372311551\"}}]}", 
		LAST);

	web_submit_data("purchase.php", 
		"Action=https://blazedemo.com/purchase.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://blazedemo.com/reserve.php", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=flight", "Value=234", ENDITEM, 
		"Name=price", "Value=432.98", ENDITEM, 
		"Name=airline", "Value=United Airlines", ENDITEM, 
		"Name=fromPort", "Value=Philadelphia", ENDITEM, 
		"Name=toPort", "Value=Rome", ENDITEM, 
		LAST);

	lr_think_time(13);

	web_submit_form("confirmation.php", 
		"Snapshot=t44.inf", 
		ITEMDATA, 
		"Name=inputName", "Value=Peter McGuinness", ENDITEM, 
		"Name=address", "Value=2370 Cedar Hollow Rd", ENDITEM, 
		"Name=city", "Value=Georgetown", ENDITEM, 
		"Name=state", "Value=TX", ENDITEM, 
		"Name=zipCode", "Value=78628", ENDITEM, 
		"Name=cardType", "Value=Visa", ENDITEM, 
		"Name=creditCardNumber", "Value=1", ENDITEM, 
		"Name=creditCardMonth", "Value=11", ENDITEM, 
		"Name=creditCardYear", "Value=2017", ENDITEM, 
		"Name=nameOnCard", "Value=p", ENDITEM, 
		"Name=rememberMe", "Value=<OFF>", ENDITEM, 
		LAST);

	return 0;
}