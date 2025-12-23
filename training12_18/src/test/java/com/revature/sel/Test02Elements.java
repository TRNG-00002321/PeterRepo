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

import static org.junit.jupiter.api.Assertions.assertTrue;

@DisplayName("Element Selenium Test")
public class Test02Elements {

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

    @DisplayName("Test by Id")
    @Test
    public void testID(){
        driver.get(BASE_URL + "/login");
        WebElement userName = driver.findElement(By.id("username"));
        WebElement password = driver.findElement(By.id("password"));
        System.out.println(userName);
        System.out.println(password);

        assertTrue(userName.isDisplayed());
        assertTrue(password.isDisplayed());
    }

    @DisplayName("Test by Name")
    @Test
    public void testByName(){
        driver.get(BASE_URL + "/login");
        WebElement userName = driver.findElement(By.name("username"));
        WebElement password = driver.findElement(By.name("password"));
        System.out.println(userName);
        System.out.println(password);

        assertTrue(userName.isDisplayed());
        assertTrue(password.isDisplayed());
    }

    @DisplayName("Test by tag")
    @Test
    public void testByTag(){
        driver.get(BASE_URL + "/login");
        List<WebElement> tagList = driver.findElements(By.tagName("input"));
        System.out.println(tagList);

        for(WebElement e: tagList){
            System.out.println(e);
            assertTrue(e.isDisplayed());
        }
    }

    @DisplayName("Test Login Button")
    @Test
    public void testLoginButton(){
        driver.get(BASE_URL + "/login");
        //this is the login button
        List<WebElement> tagList = driver.findElements(By.className("radius"));
        System.out.println(tagList);

        for(WebElement e: tagList){
            String title = e.getText();
            System.out.println(title);
            assertTrue(title.contains("Login"));
        }
    }


}
