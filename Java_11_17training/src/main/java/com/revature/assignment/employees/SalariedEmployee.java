package com.revature.assignment.employees;

public class SalariedEmployee extends Employee implements EmployeeBenefits{

    //calculate payouts using days and salary
    private String benefits;
    private int daysOfWork;
    public SalariedEmployee(){

    }
    public SalariedEmployee(String i_name, double yearly, int workyear){
        super(i_name);
        pay = yearly;
        daysOfWork = workyear;
    }

    public int addPaidTimeOff(int days){
        daysOfWork -= days;
        if(daysOfWork <=0 ){
            System.out.println("Congratulations on your passive employment!");
            daysOfWork = 0;
        }
        return daysOfWork;
    }

    @Override
    public double calcPayout(int days) {
        return pay * ((double) days / daysOfWork);
    }

    @Override
    public void addBenefits(String benefit) {
        if (benefits != null){
            benefits += ", ";
        }
        else{
            benefits = "";
        }
        benefits += benefit;
        System.out.println("Your benefits include: " + benefits);
    }
}
