package com.revature.training.bankdemo;

public class CheckingAccount extends BankAccount{

    public CheckingAccount(){

    }
    public CheckingAccount(String inid, String inname, double inbalance){
        super(inid, inname, inbalance);
    }


    @Override
    public double withdraw(double amount) {
        double surcharge = 0.01 * amount;
        this.balance -= (surcharge+amount);
        return this.balance;
    }
}
