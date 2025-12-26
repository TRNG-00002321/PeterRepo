package com.revature.cuc.steps;

import io.cucumber.java.After;
import io.cucumber.java.Before;
import io.cucumber.java.BeforeAll;
import io.cucumber.java.en.And;
import io.cucumber.java.en.Given;
import io.cucumber.java.en.Then;
import io.cucumber.java.en.When;
import org.junit.jupiter.api.AfterEach;
import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;

import static org.junit.jupiter.api.Assertions.assertTrue;

public class LoginStep {

    private WebDriver driver;
    private final String BASE_URL = "https://the-internet.herokuapp.com";

    @Before
    public void setup(){
        driver = new ChromeDriver();
        driver.manage().window().maximize();

    }
    @After
    public void teardown(){
        if(driver != null){
            driver.quit();
        }
    }



    @Given("the application is running")
    public void theApplicationIsRunning() throws InterruptedException {
        // Write code here that turns the phrase above into concrete actions
        System.out.println("the application is running");
        driver.get(BASE_URL);
        Thread.sleep(5);
        assertTrue(driver.getCurrentUrl().contains("the-internet"));
    }

    @And("the test database is created with Users")
    public void theTestDatabaseIsCreatedWithUsers() {
        // Write code here that turns the phrase above into concrete actions
        System.out.println("the test database is created with Users");
    }

    @Given("User is on the login page")
    public void userIsOnTheLoginPage() {
        // Write code here that turns the phrase above into concrete actions
        System.out.println("User is on the login page");
        driver.get(BASE_URL + "/login");
    }

    @When("User enters Tom")
    public void userEntersTom() {
        // Write code here that turns the phrase above into concrete actions
        System.out.println("User enters Tom");
        driver.findElement(By.name("username")).sendKeys("tomsmith");
    }

    @And("User enters Pass123")
    public void userEntersPass() {
        // Write code here that turns the phrase above into concrete actions
        driver.findElement(By.name("password")).sendKeys("SuperSecretPassword!");
    }

    @And("User clicks login")
    public void userClicksLogin() {
        // Write code here that turns the phrase above into concrete actions
        driver.findElement(By.className("radius")).click();
    }

    @Then("User is redirected to secured area page")
    public void userIsRedirectedToSecuredAreaPage() {
        // Write code here that turns the phrase above into concrete actions
        assertTrue(driver.getCurrentUrl().contains("/secure"));
    }

    @And("Page is associated with account Tom")
    public void pageIsAssociatedWithAccountTom() {
        // Write code here that turns the phrase above into concrete actions
        assertTrue(driver.findElement(By.id("flash")).getText().contains("secure"));
    }
}
