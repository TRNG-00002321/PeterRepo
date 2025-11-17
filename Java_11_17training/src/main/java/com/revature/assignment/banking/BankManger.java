package com.revature.assignment.banking;

public class BankManger {

    public static void main(String[] args) throws WithdrawalException {
        CheckingAccount c1 = new CheckingAccount("C01","Peter", 8000000.00);
        SavingAccount s1 = new SavingAccount("S01", "Peter", 0);
        System.out.println(c1.toString());
        System.out.println(s1.toString());
        try{
            c1.withdraw(320000);
            c1.withdraw(-100);
        }catch (WithdrawalException | IllegalArgumentException e){
            System.out.println(e.getMessage());
        }
        try{
            c1.deposit(-1000);
        }catch (IllegalArgumentException e){
            System.out.println(e.getMessage());
        }
        c1.deposit(1000);
        System.out.println(c1.toString());
        s1.deposit(4000);
        try{
            s1.withdraw(200.5);
        }catch (WithdrawalException | IllegalArgumentException e){
            System.out.println(e.getMessage());
        }


        System.out.println(s1.toString());

        System.out.println("First Interest: " + s1.calculateInterest());
        System.out.println("Second Interest: " + s1.calculateInterest());
        System.out.println(s1.toString());

    }
}
