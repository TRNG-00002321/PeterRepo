package com.revature.playwright;

import org.junit.jupiter.api.Test;

import java.util.regex.Pattern;

import static com.microsoft.playwright.assertions.PlaywrightAssertions.assertThat;

public class LoginTest extends BaseTest{
    @Test
    public void LoginValid(){
        navigateTo("/login");

        page.locator("#username").fill("tomsmith");
        page.locator("#password").fill("SuperSecretPassword!");
        page.locator("//button[@type='submit']").click();

        assertThat(page).hasURL(Pattern.compile(".*secure"));
        assertThat(page.locator("#flash")).containsText("secure");
    }

    @Test
    public void LoginInvalid(){
        navigateTo("/login");

        page.locator("//button[@type='submit']").click();

        assertThat(page).hasURL(Pattern.compile(".*login"));

    }


}
