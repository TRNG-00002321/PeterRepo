package com.revature.assignment.employees;

public abstract class Employee {

    protected String name;
    protected double pay;


    public Employee(){
    }

    public Employee(String i_name){
        this.name = i_name;
        this.pay = 0;
    }

    public abstract double calcPayout(int time);


}
