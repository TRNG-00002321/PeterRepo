package com.revature.assignments.calculator.user;
import com.revature.assignments.calculator.PeterCalc;

import java.util.Scanner;

public class CalcCaller {

    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int in1;
        int in2;
        System.out.print("Enter two integers: ");
        in1 = sc.nextInt();
        in2 = sc.nextInt();
        System.out.println("added = " + PeterCalc.addition(in1, in2));
        System.out.println("subtracted = " + PeterCalc.subtract(in1, in2));
        System.out.println("multiply = " + PeterCalc.multiply(in1, in2));
        System.out.println("divide = " + PeterCalc.divide(in1, in2));
    }

}
