package com.revature.demos;

public class StringAPIDemo {

    public static void main(String[] args){
        String helloStr = " Hello World! ";
        System.out.println(helloStr + ", length: " + helloStr.length());
        String clip = helloStr.trim();
        System.out.println(clip + ", trimmed length: " + clip.length());
        System.out.println("charat 1: " + helloStr.charAt(1));
        String up = helloStr.toUpperCase();
        String low = helloStr.toLowerCase();
        System.out.println("Upper: " + up + " Lower: " + low);
        String together = up.concat(low);
        System.out.println("Both Concat: " + together);
        String comp = " Hello World! ";
        System.out.println("Equals(): " + helloStr.equals(comp));
        System.out.println("==: " + (helloStr == comp));
        System.out.println("Ignore Case(): "  + helloStr.equalsIgnoreCase(up));
        String a = helloStr.replace("o", "a");
        System.out.println("Replace: " + a);


    }
}
