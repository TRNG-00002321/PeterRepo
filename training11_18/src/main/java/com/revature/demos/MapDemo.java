package com.revature.demos;

import java.util.HashMap;
import java.util.Map;
import java.util.Set;

public class MapDemo {

    public static void main(String[] args) {
        Map<String, Double> eggs = new HashMap<String, Double>();
        eggs.put("Brown", 1.50);
        eggs.put("Free-Range", 2.50);
        eggs.put("Organic", 3.50);
        eggs.put("White", 1.50);
        eggs.put("Xtra Large", 2.75);
        eggs.put("Organic", 4.00);
        eggs.put("Ostrich", 40.00);

        System.out.println(eggs.get("Organic"));
        Set<String> type = eggs.keySet();
        System.out.println(type);
        for(String s: type){
            System.out.println(s +" costs " +eggs.get(s));
        }


    }
}
