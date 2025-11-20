package com.revature.assignment.person;

import java.util.*;

public class PersonList {

    public static void main(String[] args) {

        List<Person> pList = new ArrayList<>();
        pList.add(new Person(5, "Anna", 25));
        pList.add(new Person(1, "Alice", 27));
        pList.add(new Person(2, "Bob", 40));
        pList.add(new Person(4, "Johann", 25));
        pList.add(new Person(3, "Eggbert", 21));



        Iterator it = pList.iterator();
        while(it.hasNext()){
            System.out.println(it.next());
        }
        System.out.println("\nSorted by ID:");
        Collections.sort(pList);
        for(Person p: pList){
            System.out.println(p);
        }
        System.out.println("\nSorted by Name:");
        Collections.sort(pList, new CompareName());
        for(Person p: pList){
            System.out.println(p);
        }
        System.out.println("\nSorted by Age:");
        Collections.sort(pList, new CompareAge());
        for(Person p: pList){
            System.out.println(p);
        }



    }


}
