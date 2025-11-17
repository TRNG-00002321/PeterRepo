package com.revature.training.persondemo;

import java.util.Objects;

public class Person {
    private String name;
    private int age;

    public Person(){

    }

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    @Override
    public String toString(){
        return "Person Object: Name = " + this.name + ", Age = " + Integer.toString(this.age);
    }

    //TODO: firt check null, thn same type of class, then finlly convert input objct
    //to our class and compare the values
    @Override
    public boolean equals(Object o){
        if(o == null || o.getClass() != getClass()) return false;
        Person temp = (Person) o;
        if(temp.age == this.age && this.name.equals(temp.name)){
            return true;
        }
        return false;
    }

    @Override
    public int hashCode(){
        return Objects.hashCode(this.age);
    }
}
