package com.revature.assignments.customer.main;
import com.revature.assignments.customer.Customer;
public class Main {
    public static void main(String[] args) {
        Customer c1 = new Customer("Yanice");
        Customer c2 = new Customer("Eggbert", 200.20, 3);
        System.out.println(c2.toString());
        System.out.println(c1.transactionCalc());
        System.out.println(c1.transactionCalc(35.9));
        System.out.println(c2.whoName());
        System.out.println(c2.whoName("Laurel"));
        System.out.println(c2.toString());
        System.out.println(c1.toString());


    }

}
