package com.revature.demo;

public class Calculator {


    public int subtract(int a, int b){
        return (a - b);
    }

    public int add(int a, int b){
        return (a + b);
    }

    public int multiply(int a, int b){
        return (a * b);
    }

    public double divide(int a, int b) throws ArithmeticException{
        if(b == 0){
            throw new ArithmeticException("Cannot divide by 0");
        }
        return ((double)a/(double)b);
    }
}
