package com.revature.sel;


import io.github.bonigarcia.wdm.WebDriverManager;
import org.junit.jupiter.api.*;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;

import static org.junit.jupiter.api.Assertions.assertTrue;

@DisplayName("Basic Selenium Test")
public class Test01SelBasics {

    private WebDriver driver;
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
    public void testBasic() {
        // Setup your WebDriverManager

        driver.get("https://www.selenium.dev/");

        //get page title

        String title = driver.getTitle();
        System.out.println("Title :: " + title);
//        Thread.sleep(5000);
        assertTrue(title.contains("Selenium"));

    }

    @Test
    public void testDocPage(){
        driver.get("https://www.selenium.dev/documentation/");

        String title = driver.getCurrentUrl();
        System.out.println("URL :: " + title);

        assertTrue(title.contains("documentation"));
    }



}
