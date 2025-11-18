package com.revature.assignment;

import java.util.LinkedList;
import java.util.PriorityQueue;
import java.util.Queue;

public class QueuePractice {
    public static void main(String[] args) {
        Queue<Integer> egg = new PriorityQueue<>();
        egg.offer(1);
        egg.add(4);
        egg.add(2);
        egg.offer(3);



        System.out.println(egg);
        System.out.println(egg.peek());


        System.out.println(egg.poll());
        System.out.println(egg);
        egg.remove();
        System.out.println(egg);


    }


}
