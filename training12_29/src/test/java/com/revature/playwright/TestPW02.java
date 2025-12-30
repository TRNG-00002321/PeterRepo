package com.revature.playwright;

import com.microsoft.playwright.Locator;
import com.microsoft.playwright.Page;
import com.microsoft.playwright.options.AriaRole;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;

import static com.microsoft.playwright.assertions.PlaywrightAssertions.assertThat;

@DisplayName("Playwright Element Locate and Interact")
public class TestPW02 extends BaseTest{
    @DisplayName("Playwright Interactions")
    @Test
    public void demoWaits(){
        navigateTo("/dynamic_loading/1");

        page.locator("#start button").click();

        String res = page.locator("#finish h4").textContent();

        System.out.println("Result: " + res);


    }

    @DisplayName("Playwright Locators")
    @Test
    public void demoLocators(){
        navigateTo("/login");

        Locator byId = page.locator("#username");
        Locator byText = page.locator("text=login");
        Locator byRole = page.getByRole(AriaRole.BUTTON, new Page.GetByRoleOptions().setName("Login"));
        Locator byPlaceHolder = page.getByPlaceholder("User name");
    }

    @DisplayName("Element Interactions")
    @Test
    public void demoElements(){
        navigateTo("/login");
        page.locator("#username").fill("tomsmith");
        page.locator("button[type='submit']").click();
        assertThat(page.locator("#flash")).containsText("secure");
    }
}
