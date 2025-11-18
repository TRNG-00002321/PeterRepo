package com.revature.demos;

import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.Set;
import java.util.TreeSet;

public class SetDemo {
    public static void main(String[] args) {
//        Set<String> names = new TreeSet<>();
        Set<String> names = new LinkedHashSet<>();

        names.add("Tenma");
        names.add("Grimmer");
        names.add("Johann");
        names.add("Johann");

        System.out.println(names);

        for(String s: names){
            System.out.println(s);
        }


    }
}
