package com.revature.assignment.employees;

public class ContractualEmployee extends Employee{

    //calculate payouts using hours
    //define hourly wage
    private int overtime;

    public ContractualEmployee(String i_name, double i_wage){
        super(i_name);
        this.pay = i_wage;
        this.overtime = 40;
    }
    public ContractualEmployee(String i_name, double i_wage, int ot){
        super(i_name);
        this.pay = i_wage;
        this.overtime = ot;
    }

    @Override
    public double calcPayout(int hours) {
        int ot = hours - overtime;
        double otpay = 0;
        if(ot > 0)
            otpay *= 2 * pay;
        return (hours * pay) + otpay;
    }
}
