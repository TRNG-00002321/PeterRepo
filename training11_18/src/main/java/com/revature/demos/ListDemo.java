package com.revature.demos;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

public class ListDemo {

    public static void main(String[] args) {
        List<Integer> myList = new ArrayList();

        myList.add(1);
        myList.add(0, 12);
        int egg = myList.get(0);
        System.out.println(myList.toString());
        System.out.println(egg);


        Iterator it = myList.iterator();

        while(it.hasNext()){
            System.out.println(it.next());
        }

//        for(int i = 0; i < myList.size(); i++){
//            System.out.println(myList.get(i));
//        }
//        for(int i: myList){
//            System.out.println(i);
//        }







    }
}
