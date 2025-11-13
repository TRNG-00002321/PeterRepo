package com.revature.assignments.logic;

public class ControlStatements {

    public static void main(String[] args) {
        //if statement
        if(1 == 1){
            System.out.println("1 == 1 is true");
        }


        //for loop wth continue on 3
        for(int i = 0; i < 5; i++){
            if(i == 3){ continue; }
            System.out.print(i);
        }
        System.out.println();

        int a = 1;
        //switch statment with breaks
        switch(a){
            case 1:
                System.out.println("Case 1");
                break;
            case 2:
                System.out.println("Case 2");
                break;
            default:
                System.out.println("Default");
        }
        int i = 0;
        //while loops
        while(i < 10){
            i++;
            System.out.println(i);
        }

        int j = 100;
        //do while always executes at least once
        do{
            j++;
            System.out.println(j);

        }while(j < 10);




    }
}
