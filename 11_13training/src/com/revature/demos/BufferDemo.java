package com.revature.demos;

public class BufferDemo {
    public static void main(String[] args){
        StringBuffer sb = new StringBuffer("Horse");
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
