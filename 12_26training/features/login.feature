Feature: User Auth
  As a Registered User
  I want to log into my account
  So I can securely access my information


  #background runs before all features
Background:
  Given the application is running
  And the test database is created with Users


Scenario: Successful Login With Valid Credentials
  Given User is on the login page
  When User enters username "tomsmith"
  And User enters password "SuperSecretPassword!"
  And User clicks login
  Then User is redirected to secured area page
  And Page is associated with account Tom
