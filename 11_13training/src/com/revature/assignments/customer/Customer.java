package com.revature.assignments.customer;

public class Customer {

    String name;
    double spent;
    int transactions;
    static int totaltransactions = 0;
    final String STORE_NAME = "RevMart";

    //construct a new customer with only a name and no transaction recorded
    public Customer(String name){
        this.name = name;
        this.spent = 0.0;
        this.transactions = 0;
        totaltransactions ++;
    }
    //construct a customer with an existing spending history
    public Customer(String name, double spentsofar, int transactions){
        this.name = name;
        this.spent = spentsofar;
        this.transactions = transactions;
        totaltransactions ++;
    }

    //returns the users data
    @Override
    public String toString() {
        return this.name + " has spent: " + this.spent + " over " + this.transactions + " transactions at " + STORE_NAME;
    }


    //returns the average transaction cot of the customer
    public double transactionCalc(){
        if(this.spent == 0.0){
            return 0.0;
        }
        return this.spent / this.transactions;
    }

    //overload and return average transaction cost after adding a new one
    public double transactionCalc(double newspend){
        this.spent += newspend;
        this.transactions++;
        totaltransactions++;
        return transactionCalc();
    }

    //return the users name
    public String whoName(){
        return this.name;
    }
    //change and return the users name
    public String whoName(String newName){
        this.name = newName;
        return this.name;
    }




}
