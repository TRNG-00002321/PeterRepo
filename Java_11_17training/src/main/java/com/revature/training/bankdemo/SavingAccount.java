package com.revature.training.bankdemo;

public class SavingAccount extends  BankAccount{



    public SavingAccount(){

    }

    public SavingAccount(String inid, String inname, double inbalance){
        super(inid, inname, inbalance);
    }

    @Override
    public double withdraw(double amount) {
        double balance = super.getBalance();
        balance -= amount;
        super.setBalance(balance);
        return balance;
    }
}
