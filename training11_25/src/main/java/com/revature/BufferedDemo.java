package com.revature;

import java.io.*;

public class BufferedDemo {

    public static void main(String[] args) {
//        BufferedWriter bOut = null;
//        BufferedReader bIn = null;
        try(
                BufferedWriter bOut = new BufferedWriter(new FileWriter("copy.txt"));
                BufferedReader bIn = new BufferedReader(new FileReader("example.txt"))
        ){
            String l;
            while((l=bIn.readLine())!= null){
                System.out.println(l);
                bOut.write(l + '\n');
            }

        } catch (FileNotFoundException e) {
            throw new RuntimeException(e);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }


    }
}
