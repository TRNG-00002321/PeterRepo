package com.revature.training.address;

import java.util.Optional;

public class Person {
    private String name;
    private String phone;
    private Address address;

    public Person(String name, String phone, Address address) {
        this.name = name;
        this.phone = phone;
        this.address = address;
    }
    public Person(String name, String phone){
        this.name = name;
        this.phone = phone;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getPhone() {
        return phone;
    }

    public void setPhone(String phone) {
        this.phone = phone;
    }

    public Address getAddress() {
        Optional<Address> checkA = Optional.ofNullable(this.address);
        if(checkA.isPresent())
            return address;
        else
            return null;
    }

    public void setAddress(Address address) {
        this.address = address;
    }

    @Override
    public String toString() {
        Optional<Address> checkA = Optional.ofNullable(this.address);
        if(checkA.isPresent()){
            return "Person{" +
                    "name='" + name + '\'' +
                    ", phone='" + phone + '\'' +
                    ", address=" + address +
                    '}';
        }else{
            return "Person{" +
                    "name='" + name + '\'' +
                    ", phone='" + phone + '\'' +
                    ", HOMELESS" +
                    '}';
        }

    }
}
