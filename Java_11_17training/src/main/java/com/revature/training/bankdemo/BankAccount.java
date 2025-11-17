package com.revature.training.bankdemo;

public abstract class BankAccount {
    private String id;
    private String name;
    private double balance;


    public BankAccount(){

    }
    public BankAccount(String inid, String inname, double inbalance){
        this.id = inid;
        this.name = inname;
        this.balance = inbalance;
    }

    public double getBalance() {
        return balance;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public double deposit(double addition){
        balance = balance + addition;
        return balance;
    }

    public abstract double withdraw(double amount);

    @Override
    public String toString() {
        return "BankAccount{" +
                "id='" + id + '\'' +
                ", name='" + name + '\'' +
                ", balance=" + balance +
                '}';
    }


}
