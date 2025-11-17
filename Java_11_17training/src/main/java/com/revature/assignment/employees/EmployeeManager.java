package com.revature.assignment.employees;
import java.util.Scanner;
public class EmployeeManager {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String eType = "";
        double wage;
        int time;
        String name = "";
        String inp = "";

        System.out.println("Hello! What's your name?");
        name = sc.next();
        System.out.println("Welcome to the working world "+name+"! Are you salaried or contracted?");
        eType = sc.next();
        if(eType.equalsIgnoreCase("SALARIED")){
            System.out.println("Enter your yearly salary");
            wage = Double.parseDouble(sc.next());
            System.out.println("Enter your required amount of days worked. For 52 weeks of 5 days this is 260 days.");
            time = Integer.parseInt(sc.next());
            SalariedEmployee emp1 = new SalariedEmployee(name, wage, time);
            do{
                System.out.println("Enter Q to quit, T to enter time for a pay period, B to add a benefit, or P to add PTO");
                inp = sc.next();
                if(inp.equalsIgnoreCase("T")){
                    System.out.println("Enter days worked in the period");
                    time = Integer.parseInt(sc.next());
                    System.out.println("You earned " + emp1.calcPayout(time) + " dollars");
                }
                if(inp.equalsIgnoreCase("P")){
                    System.out.println("Enter the amount of days being taken off your schedule");
                    time = Integer.parseInt(sc.next());
                    emp1.addPaidTimeOff(time);
                    System.out.println("Congratulations! Your pay per day will be increased to compensate");
                }
                if(inp.equalsIgnoreCase("B")){
                    System.out.println("Enter the benefit you'd like to add");
                    String b = sc.next();
                    emp1.addBenefits(b);
                }

            }while(!inp.equalsIgnoreCase("Q"));

        }
        else if(eType.equalsIgnoreCase("CONTRACTED")){
            System.out.println("Enter your hourly wage");

            wage = Double.parseDouble(sc.next());
            ContractualEmployee emp1 = new ContractualEmployee(name, wage);
            do{
                System.out.println("Enter Q to quit, or T to enter time for a pay period");
                inp = sc.next();
                if(inp.equalsIgnoreCase("T")){
                    System.out.println("Enter hours worked in the period");
                    time = Integer.parseInt(sc.next());
                    if(time > 40){
                        System.out.println("You worked overtime for " + (time - 40) + " hours");
                    }
                    System.out.println("You earned " + emp1.calcPayout(time) + " dollars");
                }

            }while(!inp.equalsIgnoreCase("Q"));


        }
        else{
            System.out.println("Enjoy unemployment!");
        }



    }
}
