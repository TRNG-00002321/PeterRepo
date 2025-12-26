

from behave import given, when, then
from behave.exception import StepNotImplementedError

from selenium import webdriver
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.common.by import By
from selenium.webdriver.support.wait import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC

BASE_URL = "https://the-internet.herokuapp.com"


@given(u'the application is running')
def step_run(context):
    print("")
    options = Options()
    options.add_argument("--start-maximized")
    context.driver = webdriver.Chrome(options=options)
    context.wait = WebDriverWait(context.driver, 10)

    context.driver.get(BASE_URL)

    heading=context.wait.until(EC.visibility_of_element_located((By.TAG_NAME, "h1")))

    assert "Welcome to the-internet" in heading.text

@given(u'the test database is created with Users')
def test_db_exists(context):
    return True


@given(u'User is on the login page')
def step_username(context):
    context.driver.get(BASE_URL + "/login")
    heading = context.wait.until(EC.visibility_of_element_located((By.TAG_NAME, "h2")))

    assert "Login" in heading.text


@when(u'User enters username "tomsmith"')
def step_password(context):
    username_input = context.wait.until(EC.visibility_of_element_located((By.ID, "username")))

    username_input.clear()
    username_input.send_keys("tomsmith")


@when(u'User enters password "SuperSecretPassword!"')
def step_click(context):
    p_input = context.wait.until(EC.visibility_of_element_located((By.ID, "password")))

    p_input.clear()
    p_input.send_keys("SuperSecretPassword!")


@when(u'User clicks login')
def step_impl(context):
    login_input = context.wait.until(EC.visibility_of_element_located((By.CLASS_NAME, "radius")))

    login_input.click()


@then(u'User is redirected to secured area page')
def step_redirect(context):
    context.wait.until(EC.url_contains("/secure"))
    assert "/secure" in context.driver.current_url


@then(u'Page is associated with account Tom')
def step_flash(context):
    flash = context.wait.until(EC.visibility_of_element_located((By.ID,"flash")))
    assert "logged in" in flash.text

    context.driver.quit()
