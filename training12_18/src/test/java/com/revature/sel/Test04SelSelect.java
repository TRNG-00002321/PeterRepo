package com.revature.sel;

import io.github.bonigarcia.wdm.WebDriverManager;
import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.support.ui.Select;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class Test04SelSelect {

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
    public void teardown(){
        //        driver.quit();

        if(driver != null){
            driver.quit();
        }
//        driver.close();

    }

    @Test
    public void testSel(){
        driver.get(BASE_URL + "/dropdown");

        WebElement dropDown = driver.findElement(By.id("dropdown"));

        Select dropper = new Select(dropDown);

//        dropper.selectByVisibleText("Option 1");
        dropper.selectByValue("1");
        WebElement e = dropper.getFirstSelectedOption();
//        assertEquals("Option 1", e.text());

        assertEquals("1", e.getAttribute("value"));

    }
}
