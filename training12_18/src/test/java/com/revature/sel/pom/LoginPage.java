package com.revature.sel.pom;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.WebDriverWait;

import java.time.Duration;

public class LoginPage {
    private WebDriver driver;
    private WebDriverWait wait;

    private By username = By.id("username");
    private By password = By.id("password");
    private By loginButton = By.xpath("//button[@type='submit']");
    private By flashMessage = By.id("flash");

    public LoginPage(WebDriver wd){
        driver = wd;
        wait = new WebDriverWait(driver, Duration.ofSeconds(10));
    }


    public LoginPage enterUname(String name){
        wait.until(ExpectedConditions.visibilityOfElementLocated(username));
        driver.findElement(username).clear();
        driver.findElement(username).sendKeys(name);
        return this;
    }
    public LoginPage enterPword(String code){
        wait.until(ExpectedConditions.visibilityOfElementLocated(password));
        driver.findElement(password).clear();
        driver.findElement(password).sendKeys(code);
        return this;
    }

    public SecurePage submitLogin(){
        wait.until(ExpectedConditions.visibilityOfElementLocated(loginButton));

        driver.findElement(loginButton).click();
        return new SecurePage(driver);
    }

    public SecurePage loginAs(String uname, String pword){
        return enterUname(uname).enterPword(pword).submitLogin();
    }





}
