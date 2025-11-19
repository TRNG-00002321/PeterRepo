package com.revature.training.lamdawork;

import com.revature.training.lambdacalc.LambdaDemo;

public class LambdaImp {

    public static void main(String[] args) {
//        //For the printing only
//        LambdaContainer ld = ()-> System.out.println("Hello");
//        ld.printOnly();


//        //One argument
//        LambdaContainer ld = (String arg1)-> {System.out.println("Hello " + arg1.toUpperCase());};
//        ld.printUpper("eggbert");

        //Concat
        LambdaContainer ld = (first, last) -> {
            System.out.println("Hello " + first.concat(last));
        };
        ld.printConcat("John", "Basic");


    }
}
