package com.revature.demos;

public class BuilderDemo {

    public static void main(String[] args){
        StringBuilder sb = new StringBuilder("Horse");
        String sc = "Horse";
        System.out.println(sb);
        sb.append(" eats Hay");
        System.out.println(sb);
        String hay = sb.substring(11,14);
        System.out.println(hay);
        sb.deleteCharAt(9);
        System.out.println(sb);
        sb.insert(5, "s");
        System.out.println(sb);
        sb.setCharAt(5, 'y');
        System.out.println(sb);
    }
}
