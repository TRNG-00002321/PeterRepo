package com.revature.sel;

import io.github.bonigarcia.wdm.WebDriverManager;
import org.junit.jupiter.api.*;
import org.openqa.selenium.By;
import org.openqa.selenium.NoSuchElementException;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.FluentWait;
import org.openqa.selenium.support.ui.Wait;
import org.openqa.selenium.support.ui.WebDriverWait;

import java.time.Duration;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class TestWaits {


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
    @DisplayName("No waits")
    public void withoutWait(){
        driver.get(BASE_URL + "/dynamic_loading/1");
        driver.findElement(By.xpath("//button[text()='Start']")).click();

        WebElement result = driver.findElement(By.id("finish"));
        System.out.println(result.getText());
//        assertEquals("Hello World!", result.getText());

    }
    @Test
    @DisplayName("Thread waits")
    @Disabled
    public void withThreadWait() throws InterruptedException {
        driver.get(BASE_URL + "/dynamic_loading/1");
        driver.findElement(By.xpath("//button[text()='Start']")).click();
        Thread.sleep(5000);
        WebElement result = driver.findElement(By.id("finish"));
        assertEquals("Hello World!", result.getText());

    }

    @Test
    @DisplayName("Test Implicit")
    @Disabled
    public void implicitWait(){

        //Set implicit wait
        driver.manage().timeouts().implicitlyWait(Duration.ofSeconds(10));
        driver.findElement(By.xpath("//button[text()='Start']")).click();

        driver.get(BASE_URL + "/dynamic_loading/1");

        WebElement result = driver.findElement(By.id("finish"));
        assertEquals("Hello World!", result.getText());

    }


    @DisplayName("Explicit wait")
    @Test
    public void explicitWait(){


        driver.get(BASE_URL + "/dynamic_loading/1");
        driver.findElement(By.xpath("//button[text()='Start']")).click();

        WebDriverWait wait = new WebDriverWait(driver, Duration.ofSeconds(10));
        WebElement result = wait.until(
                ExpectedConditions.visibilityOfElementLocated(By.id("finish"))
        );
        assertEquals("Hello World!", result.getText());

    }

    @DisplayName("Fluent wait")
    @Test
    public void fluentWait(){
        driver.get(BASE_URL + "/dynamic_loading/1");
        driver.findElement(By.xpath("//button[text()='Start']")).click();

        Wait<WebDriver> fluentWait = new FluentWait<>(driver)
                .withTimeout(Duration.ofSeconds(10))
                .pollingEvery(Duration.ofMillis(500))
                .ignoring(NoSuchElementException.class)
                .withMessage("Waiting for resource");
        WebElement result = fluentWait.until(
                ExpectedConditions.visibilityOfElementLocated(By.id("finish"))
        );
        assertEquals("Hello World!", result.getText());


    }

}
