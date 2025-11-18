package com.revature.assignment.person;

import java.util.Comparator;

public class CompareName implements Comparator<Person> {

    public int compare(Person a, Person b)
    {
        return a.getName().compareTo( b.getName() );
    }
}
