package com.revature.sel.pom;

import io.github.bonigarcia.wdm.WebDriverManager;
import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;

import static org.junit.jupiter.api.Assertions.assertTrue;

@DisplayName("POM Implementation")
public class TestPomImpl {
    private WebDriver driver;
    private final String BASE_URL = "https://the-internet.herokuapp.com";
    @BeforeEach
    public void setup(){
        WebDriverManager.chromedriver().setup();

        //init webdriver
        driver = new ChromeDriver();

        driver.manage().window().maximize();
        driver.get(BASE_URL + "/login");
    }
    @AfterEach
    public void teardown() {
        //        driver.quit();

        if (driver != null) {
            driver.quit();
        }
    }
    @Test
    public void testLoginValid(){
        LoginPage lp = new LoginPage(driver);
        SecurePage sp;

        sp = lp.loginAs("tomsmith", "SuperSecretPassword!");
        System.out.println(sp.getFlashMessage());
        assertTrue(sp.getFlashMessage().contains("secure"));
    }


}
