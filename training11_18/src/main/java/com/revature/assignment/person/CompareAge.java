package com.revature.assignment.person;

import java.util.Comparator;

public class CompareAge implements Comparator<Person> {

    public int compare(Person a, Person b)
    {
        return a.getAge() - b.getAge();
    }
}