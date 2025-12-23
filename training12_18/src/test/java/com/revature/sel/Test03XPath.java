package com.revature.sel;

import io.github.bonigarcia.wdm.WebDriverManager;
import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.Test;
import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;

import static org.junit.jupiter.api.Assertions.assertTrue;

public class Test03XPath {



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

    @Test
    public void testAbsPath(){
        String path = "/html/body/div[2]/div/h2";

        driver.get(BASE_URL);
        WebElement fromPath = driver.findElement(By.xpath(path));
        System.out.println(fromPath + " " + fromPath.getText());
        assertTrue(fromPath.isDisplayed());

    }

    @Test
//    @Disabled
    public void testRelPath(){

        driver.get(BASE_URL + "/login");
        WebElement fromPath = driver.findElement(By.xpath("//input[@id='password']"));
        System.out.println(fromPath + " " + fromPath.getText());
        assertTrue(fromPath.isDisplayed());

    }
}
