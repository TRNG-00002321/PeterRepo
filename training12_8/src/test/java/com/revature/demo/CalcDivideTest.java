package com.revature.demo;

import org.junit.jupiter.api.*;

public class CalcDivideTest {

    @Test
    @DisplayName("Test Pos Division")
    void testDivPositive(){
        //Arrange
        Calculator calc = new Calculator();
        int n1 = 120;
        int n2 = 12;
        double expected = 10;
        double result;
        //Act
        result = calc.divide(n1, n2);
        System.out.println("Test division positive");
        //Assert
        Assertions.assertEquals(expected, result);
    }

    @Test
    void testDivisionNegative(){
        //Arrange
        Calculator calc = new Calculator();
        int n1 = -120;
        int n2 = 12;
        double expected = -10;
        double result;
        //Act
        result = calc.divide(n1, n2);
        System.out.println("Test division negative");
        //Assert
        Assertions.assertEquals(expected, result);
    }

    @Test
    void testDivisionZero(){
        Calculator calc = new Calculator();
        int n1 = -120;
        int n2 = 0;
        System.out.println("Test zero division throw");

        Assertions.assertThrows(ArithmeticException.class, () -> {calc.divide(n1, n2);});
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
        System.out.println("Before all Division methods");

    }

    @AfterAll
    public static void teardownClass(){
        System.out.println("After all Division methods");
    }
}
