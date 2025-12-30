package com.revature.playwright;

import com.microsoft.playwright.*;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;
import java.nio.file.Paths;

public class TestPW04Tracing {


    @DisplayName("Test Basic Trace")
    @Test
    public void testBasicDemo(){

        try(Playwright playwright = Playwright.create()){
            Browser browser = playwright.chromium().launch();
            BrowserContext context = browser.newContext();

            //trace bfore prform anything
            context.tracing().start(
                    new Tracing.StartOptions()
                            .setScreenshots(true)
                            .setSnapshots(true)
                            .setSources(true)
            );
            System.out.println("Tracing Started");
            //perform test

            Page page = context.newPage();

            page.navigate("https://the-internet.herokuapp.com/login");
            page.locator("#username").fill("tomsmith");
            page.locator("#password").fill("SuperSecretPassword!");
            page.locator("button[type='submit']").click();

            page.waitForURL("**/secure");

            context.tracing().stop(
                    new Tracing.StopOptions()
                            .setPath(Paths.get("target/traces/login-trace.zip"))
            );
            context.close();
            browser.close();
            System.out.println("Tracing finished");
        }
    }

    @Test
    public void demoAdvancedTracing() {
        try (Playwright playwright = Playwright.create()) {
            Browser browser = playwright.chromium().launch();
            BrowserContext context = browser.newContext();

            // Start with title for organization
            context.tracing().start(new Tracing.StartOptions()
                    .setScreenshots(true)
                    .setSnapshots(true)
                    .setSources(true)
                    .setTitle("Login Flow Test")  // Shows in Trace Viewer
            );

            System.out.println("Contxt begin trace");

            Page page = context.newPage();

            page.navigate("https://the-internet.herokuapp.com/");

            context.tracing().startChunk();

            page.locator("text='Form Authentication'").click();
            page.locator("#username").fill("tomsmith");
            page.locator("#password").fill("SuperSecretPassword!");
            page.locator("//button[@type='submit']").click();

            // Save this chunk separately
            context.tracing().stopChunk(new Tracing.StopChunkOptions()
                    .setPath(Paths.get("target/traces/demo-login.zip"))
            );

            // Test scenario 2
            context.tracing().startChunk();

            page.locator("a[href='/logout']").click();
            page.waitForURL("**/login");

            context.tracing().stopChunk(new Tracing.StopChunkOptions()
                    .setPath(Paths.get("target/traces/demo-logout.zip"))
            );            // Final cleanup
            context.tracing().stop();
            context.close();
            browser.close();



        }
    }
}
