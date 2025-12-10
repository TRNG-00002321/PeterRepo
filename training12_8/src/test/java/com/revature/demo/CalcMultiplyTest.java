package com.revature.demo;

import org.junit.jupiter.api.*;

public class CalcMultiplyTest {

    @Test
    @DisplayName("Test Pos Multiply")
    void testMultPositive(){
        //Arrange
        Calculator calc = new Calculator();
        int n1 = 10;
        int n2 = 12;
        int expected = 120;
        int result;
        //Act
        result = calc.multiply(n1, n2);
        System.out.println("Test multiply positive");
        //Assert
        Assertions.assertEquals(expected, result);
    }

    @Test
    void testMultiplyNegative(){
        //Arrange
        Calculator calc = new Calculator();
        int n1 = -10;
        int n2 = 12;
        int expected = -120;
        int result;
        //Act
        result = calc.multiply(n1, n2);
        System.out.println("Test multiply negative");
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
        System.out.println("Before all multiplication methods");

    }

    @AfterAll
    public static void teardownClass(){
        System.out.println("After all multiplication methods");
    }
}
