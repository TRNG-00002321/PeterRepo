package com.revature.assignment;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

public class LinkedListT {


    public static void main(String[] args) {
        List<Integer> myList = new LinkedList<>();
        List<Integer> aList = new ArrayList<>();
        myList.add(1);
        myList.add(1);
        myList.add(2);
        myList.add(3);
        myList.add(5);

        aList.addAll(myList);

        Iterator it = myList.iterator();

        for(int i = myList.size()-1; i >= 0; i--){
            System.out.println(myList.get(i));
        }

        if(myList.contains(1)){
            System.out.println("Contains 1");
        }
        else{
            System.out.println("Does not contain 1");
        }
        myList.remove(1);
        myList.remove(myList.size()-1);
        aList.removeAll(myList);
        while(!myList.isEmpty()){
            System.out.println(myList.get(0));
            myList.remove(0);
        }
        for(int i = 0; i < aList.size(); i++){
            System.out.println(aList.get(i));
        }
        aList.clear();
        if(aList.isEmpty()){
            System.out.println("Is empty");
        }
        else{
            System.out.println("Not empty");
        }





    }



}
