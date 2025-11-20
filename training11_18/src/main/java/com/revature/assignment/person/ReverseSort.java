package com.revature.assignment.person;

import java.util.*;

public class ReverseSort {
    public static void main(String[] args) {
        List<String> names = new ArrayList<>();

        names.add("Tenma");
        names.add("Grimmer");
        names.add("Johann");

        System.out.println("Unsorted:");
        for(String s: names){
            System.out.println(s);
        }

        Collections.sort(names);
        System.out.println("Sorted:");
        for(String s: names){
            System.out.println(s);
        }

        Collections.sort(names, Collections.reverseOrder());
        System.out.println("Reverse Sorted:");
        for(String s: names){
            System.out.println(s);
        }


    }
}
