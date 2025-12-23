package com.revature.sel;

import io.github.bonigarcia.wdm.WebDriverManager;
import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import org.openqa.selenium.Alert;
import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;

import static org.junit.jupiter.api.Assertions.assertTrue;

public class TestAlerts {
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
    public void testAlertBasic(){
        driver.get(BASE_URL + "/javascript_alerts");

        driver.findElement(By.xpath("//button[normalize-space()='Click for JS Alert']")).click();

        Alert alert= driver.switchTo().alert();

        String alertM = alert.getText();
        assertTrue(alertM.contains("Alert"));

        alert.accept();

        assertTrue(driver.findElement(By.id("result")).getText().contains("clicked"));
    }

    @Test
    public void testPromptDialog(){
        driver.get(BASE_URL + "/javascript_alerts");

        driver.findElement(By.xpath("//button[normalize-space()='Click for JS Prompt']")).click();

        Alert prompt = driver.switchTo().alert();
        assert(prompt.getText().contains("JS prompt"));

        prompt.sendKeys("Eggbert");

        prompt.accept();
        assertTrue(driver.findElement(By.id("result")).getText().contains("Eggbert"));
    }
}
