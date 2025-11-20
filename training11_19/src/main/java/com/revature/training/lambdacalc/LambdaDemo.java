package com.revature.training.lambdacalc;

public class LambdaDemo {
    public static void main(String[] args) {
        Calculator calc = (int n1, int n2)->{return (n1 * n2);};
        Calculator subt = (n1, n2)->(n1-n2);
        System.out.println(calc.operation(4,8) + " " + subt.operation(11,3));

        printResult(10, 9, ((x,y)->x+y));
        printResult(90, 10, ((a, b)->a/b));
    }

    public static void printResult(int a, int b, Calculator func){

        int reuslt = func.operation(a, b);
        System.out.println(reuslt);

    }

}
