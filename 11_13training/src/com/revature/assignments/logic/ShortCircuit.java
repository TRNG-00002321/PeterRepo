package com.revature.assignments.logic;

import java.util.Scanner;

public class ShortCircuit {
    //Takes 3 values as input and prints the greatest
    public static void main(String[] args) {

        int v1,v2,v3;
        //temp assignment
        v1 = 10; v2 = 13; v3 = 9;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter 3 integers: ");
        v1 = sc.nextInt();
        v2 = sc.nextInt();
        v3 = sc.nextInt();


        int greatest;
        if(v1 > v2 && v1 > v3){
            greatest = v1;
        }
        else if (v2 > v3){
            greatest = v2;
        }
        else{
            greatest = v3;
        }
        System.out.println(greatest + " is the greatest");

    }



}
