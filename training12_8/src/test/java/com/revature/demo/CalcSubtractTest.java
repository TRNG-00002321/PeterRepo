package com.revature.demo;

import org.junit.jupiter.api.*;

public class CalcSubtractTest {

    @Test
    @DisplayName("Test Positive Subtraction")
    void testSubPos(){
        //Arrange
        Calculator calc = new Calculator();
        int n1 = 22;
        int n2 = 12;
        int expected = 10;
        int result;
        //Act
        result = calc.subtract(n1, n2);
        //Assert
        Assertions.assertEquals(expected, result);
    }

    @Test
    void testAddNegative(){
        Calculator calc = new Calculator();
        int n1 = 20;
        int n2 = -12;
        int expected = 32;
        int result;
        //Act
        result = calc.subtract(n1, n2);
        //Assert
        Assertions.assertEquals(expected, result);
    }

    @BeforeEach
    public void setup(){
        System.out.println("This is setup method beforeEach");
    }

    @AfterEach
    public void teardown(){
        System.out.println("This is the teardown method afterEach");
    }

    @BeforeAll
    public static void setupClass(){
        System.out.println("Before all Subtraction methods");

    }

    @AfterAll
    public static void teardownClass(){
        System.out.println("After all Subtraction methods");
    }
}
