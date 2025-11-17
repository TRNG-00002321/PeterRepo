package com.revature.training.bankdemo;

public class BankManger {

    public static void main(String[] args) {
        CheckingAccount c1 = new CheckingAccount("C01","Peter", 8000000.00);
        SavingAccount s1 = new SavingAccount("S01", "Peter", 0);
        System.out.println(c1.toString());
        System.out.println(s1.toString());
        c1.withdraw(320000);
        c1.deposit(1000);
        System.out.println(c1.toString());
        s1.deposit(10000);
        s1.withdraw(7200.5);
        System.out.println(s1.toString());

    }
}
