package com.revature.assignments.calculator;

import java.util.Scanner;

public class PeterCalc {
    public PeterCalc(){
    }

    //adds 2 values
    public static int addition(int val1, int val2){
        return val1 + val2;
    }

    //subtracts 2 values
    public static int subtract(int val1, int val2){
        return val1 - val2;
    }

    //multiplies 2 values
    public static int multiply(int val1, int val2){
        return val1 * val2;
    }

    //divides 2 values, returns integer floor
    public static int divide(int val1, int val2){
        return (int)(val1 / val2);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int in1;
        int in2;
        System.out.print("Enter two integers: ");
        in1 = sc.nextInt();
        in2 = sc.nextInt();
        System.out.println("added = " + addition(in1, in2));
        System.out.println("subtracted = " + subtract(in1, in2));
        System.out.println("multiply = " + multiply(in1, in2));
        System.out.println("divide = " + divide(in1, in2));


    }
}
