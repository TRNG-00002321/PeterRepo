package com.revature.training.address;

public class PersonMain {
    public static void main(String[] args) {
        Person p1 = new Person("Alice", "111-123-4567",
                new Address("Weird Blvd", "Dallas", 77777));
        Person p2 = new Person("Bob", "111-123-9876");

        System.out.println(p1.toString());
        System.out.println(p2.toString());



    }
}
