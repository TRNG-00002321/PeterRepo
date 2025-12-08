package com.revature.demo;

import org.junit.jupiter.api.*;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.Arguments;
import org.junit.jupiter.params.provider.CsvSource;
import org.junit.jupiter.params.provider.MethodSource;

import java.util.stream.Stream;

@TestMethodOrder(MethodOrderer.OrderAnnotation.class)
public class CalculatorParameterizedTest {
    Calculator calc = null;

    @BeforeEach public void setUp(){
        calc = new Calculator();
    }
    @ParameterizedTest(name = "Add {0} and {1} to get {2}")
    @CsvSource({
            "1, 2, 3",
            "3, 4, 7",
            "9, -8, 1"
    })
    @Order(2)
    public void testAddCsvPar(int a, int b, int expected){
        Assertions.assertEquals(expected, calc.add(a, b));
    }

    @ParameterizedTest(name = "Add {0} and {1} to get {2}")
    @MethodSource("testDataMethod")
    @Order(1)
    public void testAddMethod(int a, int b, int expected){
        Assertions.assertEquals(expected, calc.add(a, b));
    }

    static Stream<Arguments> testDataMethod(){
        return Stream.of(
                Arguments.of(1, 2, 3),
                Arguments.of(3, -4, -1),
                Arguments.of(5, 8, 13)
                );
    }

    @ParameterizedTest(name = "Do {0} - {1} to get {2}")
    @MethodSource("testSubMethod")
    @Order(2)
    public void testSubtraction(int a, int b, int expected){
        Assertions.assertEquals(expected, calc.subtract(a, b));
    }

    static Stream<Arguments> testSubMethod(){
        return Stream.of(
                Arguments.of(10, 5, 5),
                Arguments.of(6, 7, -1),
                Arguments.of(200, 199, 1)
        );
    }

    @ParameterizedTest(name = "Do {0} * {1} to get {2}")
    @MethodSource("testMultMethod")
    @Order(3)
    public void testMultiplication(int a, int b, int expected){
        Assertions.assertEquals(expected, calc.multiply(a, b));
    }

    static Stream<Arguments> testMultMethod(){
        return Stream.of(
                Arguments.of(14, 10, 140),
                Arguments.of(6, 7, 42),
                Arguments.of(-12, 12, -144)
        );
    }

    @ParameterizedTest(name = "Do {0} / {1} to get {2}")
    @MethodSource("testDivMethod")
    @Order(4)
    public void testDivision(int a, int b, double expected){
        Assertions.assertEquals(expected, calc.divide(a, b));
    }

    static Stream<Arguments> testDivMethod(){
        return Stream.of(
                Arguments.of(100, 10, 10.0),
                Arguments.of(12, 4, 3.0),
                Arguments.of(-40, 5, -8)
        );
    }

    @ParameterizedTest(name = "Do not divide by 0")
    @CsvSource({
            "100, 0",
            "-100, 0"
    })
    @Order(5)
    public void testDivisionZero(int a, int b){
        Assertions.assertThrows(ArithmeticException.class, ()->{calc.divide(a, b);});
    }



}




