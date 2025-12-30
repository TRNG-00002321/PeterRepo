package com.revature.playwright;

import com.microsoft.playwright.Browser;
import com.microsoft.playwright.Page;
import com.microsoft.playwright.Playwright;
import com.microsoft.playwright.options.LoadState;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;

import java.nio.file.Path;
import java.nio.file.Paths;

public class TestPW05Visual {

    @DisplayName("Visual Demo")
    @Test
    public void testVisuals(){
        try(Playwright playwright = Playwright.create()){
            Browser browser = playwright.chromium().launch();
            Page page = browser.newPage();

            page.navigate("https://the-internet.herokuapp.com/login");

            page.waitForLoadState(LoadState.NETWORKIDLE);
//
//            Path baselinePath = Paths.get("target/visual_tests/baseline/login.png");
//
//            page.screenshot(
//                    new Page.ScreenshotOptions().setPath(baselinePath)
//            );

            Path currentPath = Paths.get("target/visual_tests/current/login.png");

            page.screenshot(
                    new Page.ScreenshotOptions()
                            .setPath(currentPath)
            );
            //now can use tools to compare the creenshot with the baseline ones




        }
    }
}
