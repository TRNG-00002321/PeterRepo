package com.revature.playwright;


import com.microsoft.playwright.*;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;

import java.nio.file.Paths;
import java.util.regex.Pattern;

import static com.microsoft.playwright.assertions.PlaywrightAssertions.assertThat;

@DisplayName("Test Screenshots and Video")
public class TestPW03ScreenShot {

    @DisplayName("Screenshot Demo")
    @Test
    public void testScreenshotDemo(){
        try(Playwright playwright = Playwright.create()){
            Browser browser = playwright.chromium().launch();
            Page page = browser.newPage();

            page.navigate("https://playwright.dev/");

            page.screenshot(new Page.ScreenshotOptions()
                    .setPath(Paths.get("target/screenshots/basic.png"))
                    .setFullPage(true));
        }
    }

    @DisplayName("Screenshot Element")
    @Test
    public void testScreenhotElement(){
        try(Playwright playwright = Playwright.create()){
            Browser browser = playwright.chromium().launch();
            Page page = browser.newPage();

            page.navigate("https://playwright.dev/");

            page.locator("text=Get Started").screenshot(new Locator.ScreenshotOptions()
                    .setPath(Paths.get("target/screenshots/element.png")));
        }
    }

    @DisplayName("Video Demo")
    @Test
    public void testVideo(){
        try(Playwright playwright = Playwright.create()){
            Browser browser = playwright.chromium().launch(
                    new BrowserType.LaunchOptions().setHeadless(true)
            );
            BrowserContext context = browser.newContext(
                    new Browser.NewContextOptions()
                            .setRecordVideoDir(Paths.get("target/videos/"))
                            .setRecordVideoSize(1280, 720)
            );

            Page page = context.newPage();
            System.out.println("Recording started");

            page.navigate("https://the-internet.herokuapp.com/login");

            //todo
            page.locator("#username").fill("tomsmith");
            page.locator("#password").fill("SuperSecretPassword!");
            page.locator("//button[@type='submit']").click();

            assertThat(page).hasURL(Pattern.compile(".*secure"));

            context.close();
            System.out.println("Recording ceased");
        }
    }

}
