package com.revature.training.streams;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Stream;

public class EmployeeMain {
    public static void main(String[] args) {

        List<Employee> empL = new ArrayList<>();
        empL.add(new Employee(1, "John", 20000.00));
        empL.add(new Employee(2, "Alice", 30000.00));
        empL.add(new Employee(3, "Matt", 15000.00));
        empL.add(new Employee(4, "Bob", 40000.00));
        empL.add(new Employee(5, "Erin", 14000.00));

        System.out.println("\nEnhanced For Loop\n");
        for(Employee e: empL){
            System.out.println(e.toString());
        }


        System.out.println("\nStream forEach()\n");
        //forEach is a method of stream but exists in List as well
        empL.stream().forEach(System.out::println);
        empL.forEach(x -> System.out.println(x.toString()));


        System.out.println("\nStream map() two ways\n");
        empL.stream().forEach(x-> System.out.print(x.getName().toUpperCase() + " "));
        System.out.print("\n");
        List<String> empNameUp = empL.stream().map(x -> x.getName().toUpperCase()).toList();
        empNameUp.forEach(x -> System.out.print(x + " "));
        System.out.println();


        System.out.println("\nSalary over 20,000\n");
        List<Employee> hiSal = empL.stream().filter(x -> x.getSalary() > 20000.00).toList();
        hiSal.forEach(System.out::println);




    }
}
