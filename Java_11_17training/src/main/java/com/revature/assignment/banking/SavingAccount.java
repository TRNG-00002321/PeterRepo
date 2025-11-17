package com.revature.assignment.banking;

public class SavingAccount extends BankAccount implements InterestInterface{



    public SavingAccount(){

    }

    public SavingAccount(String inid, String inname, double inbalance){
        super(inid, inname, inbalance);
    }

    @Override
    public double withdraw(double amount) throws WithdrawalException, IllegalArgumentException{
        if(amount < 0){
            throw new IllegalArgumentException("Cannot withdraw negative dollars from a savings account");
        }
        double balance = super.getBalance();

        balance -= amount;
        if(balance < 5000){
            throw new WithdrawalException("Withdrawal failed, insufficient funds");
        }
        else {
            super.setBalance(balance);
        }
        return balance;
    }

    @Override
    public double calculateInterest(){
        double balance = super.getBalance();
        balance *= 1.05;
        super.setBalance(balance);
        return balance;
    }
}
