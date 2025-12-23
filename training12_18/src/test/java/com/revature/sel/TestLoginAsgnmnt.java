package com.revature.sel;
import io.github.bonigarcia.wdm.WebDriverManager;
import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;
import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;

import java.util.List;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

public class TestLoginAsgnmnt {



    private WebDriver driver;
    private final String BASE_URL = "https://the-internet.herokuapp.com";
    @BeforeEach
    public void setup(){
        WebDriverManager.chromedriver().setup();

        //init webdriver
        driver = new ChromeDriver();

        driver.manage().window().maximize();
    }
    @AfterEach
    public void teardown() {
        //        driver.quit();

        if (driver != null) {
            driver.quit();
        }
    }

//
//    @Test
//
//    @DisplayName("Complete login form interaction")
//
//    void completeForm_loginFlow() throws InterruptedException {
//
//
//        driver.get(BASE_URL + "/login");
//
//        // Find elements
//        WebElement uname = driver.findElement(By.id("username"));
//        WebElement pword = driver.findElement(By.id("password"));
//        List<WebElement> tagList = driver.findElements(By.className("radius"));
//        WebElement login = tagList.get(0);
//
//        // Verify elements are displayed and enabled
//        assert(uname.isDisplayed());
//        assert(uname.isEnabled());
//        assert(pword.isDisplayed());
//        assert(pword.isEnabled());
//        assert(login.isDisplayed());
//        assert(login.isEnabled());
//
//        // Clear and enter credentials
//
//        String username="tomsmith";
//
//        String password="SuperSecretPassword!";
//
//        uname.sendKeys(username);
//        pword.sendKeys(password);
//
//        // Verify input values
//        assertEquals(username, uname.getAttribute("value"));
//        assertEquals(password, pword.getAttribute("value"));
//
//        // Click login
//        login.click();
//
//        // Verify success (check for success message or URL)
//
//        String flashText = driver.findElement(By.id("flash")).getText();
//        assertTrue(flashText.contains("You logged into a secure area!") &&
//                driver.getCurrentUrl().contains("secure"));
//
//    }
    @Test
    public void clickInteractionTest() throws InterruptedException{
        driver.get(BASE_URL + "/login");

        WebElement usernameInput = driver.findElement(By.id("username"));
        if(usernameInput.isDisplayed() && usernameInput.isEnabled()){
            usernameInput.clear();
            usernameInput.sendKeys("tomsmith");
            assertEquals("tomsmith", usernameInput.getAttribute("value"));
        }

        WebElement passwordInput = driver.findElement(By.id("password"));
        if(passwordInput.isDisplayed() && passwordInput.isEnabled()){
            passwordInput.clear();
            passwordInput.sendKeys("SuperSecretPassword!");
            assertEquals("SuperSecretPassword!", passwordInput.getAttribute("value"));
        }

        WebElement loginButton = driver.findElement(By.xpath("//i[@class='fa fa-2x fa-sign-in']"));
        loginButton.click();

        WebElement loginPageText = driver.findElement(By.xpath("//h4[@class='subheader']"));
        assertTrue(loginPageText.getText().contains("Welcome to the Secure Area. When you are done click logout below.") &&
                driver.getCurrentUrl().contains("secure"));
    }


}
