package com.revature.assignment.banking;

public class CheckingAccount extends BankAccount{

    public CheckingAccount(){

    }
    public CheckingAccount(String inid, String inname, double inbalance){
        super(inid, inname, inbalance);
    }


    @Override
    public double withdraw(double amount) throws WithdrawalException, IllegalArgumentException{
        if(amount < 0){
            throw new IllegalArgumentException("Cannot withdraw negative dollars from a checking account");
        }

        double surcharge = 0.01 * amount;
        double balance = super.getBalance();
        balance -= (surcharge+amount);
        if(balance < 5000){
            throw new WithdrawalException("Withdrawal failed, insufficient funds");
        }
        else {
            super.setBalance(balance);
        }
        return balance;
    }
}
