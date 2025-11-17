package com.revature.training.persondemo;

public class PersonManager {


    public static void main(String[] args){
        Person p1 = new Person("Eggbert", 40);
        Person p2 = new Person();
        p2.setAge(25);
        p2.setName("Johnny");

        System.out.println("Person 1: " + p1);
        System.out.println("Person 2: name = " + p2.getName() + ", age = " + p2.getAge());

        Person p3 = new Person("Eggbert", 40);
        System.out.println(p1.equals(p2));
        System.out.println(p1.equals(p3));
    }

}
