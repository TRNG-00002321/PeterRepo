package com.revature.assignments;
import java.util.Scanner;
public class FactorialFinder {

    public static int factRecursive(int target){
        int newtar = target - 1;
        if (newtar > 1){
            newtar = factRecursive(target-1);
        }
        return target * newtar;
    }

    public static int factLoop(int target){
        int total = 1;
        for(int i = target; i > 1; i--){
            total *= i;
        }
        return total;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int target;
        System.out.print("Please enter the number to factorial: ");
        target = sc.nextInt();
        System.out.println(target + "! = " + factRecursive(target));
        System.out.println(target + "! = " + factLoop(target));

    }

}
