package com.revature.demo;

import org.junit.jupiter.api.*;

public class CalcAddTest {

    @Test
    @DisplayName("Test Pos Add")
    void testAddPositive(){
        //Arrange
        Calculator calc = new Calculator();
        int n1 = 10;
        int n2 = 12;
        int expected = 22;
        int result;
        //Act
        result = calc.add(n1, n2);
        System.out.println("Test positive");
        //Assert
        Assertions.assertEquals(expected, result);
    }

    @Test
    @Disabled
    void testAddNegative(){
        //Arrange
        Calculator calc = new Calculator();
        int n1 = -10;
        int n2 = 12;
        int expected = 22;
        int result;
        //Act
        result = calc.add(n1, n2);
        System.out.println("Test negative");
        //Assert
        Assertions.assertNotEquals(expected, result);
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
        System.out.println("Before all methods");

    }

    @AfterAll
    public static void teardownClass(){
        System.out.println("After all methods");
    }
}
