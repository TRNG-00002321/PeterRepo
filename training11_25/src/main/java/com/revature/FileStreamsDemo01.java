package com.revature;


import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

public class FileStreamsDemo01 {
    public static void main(String[] args) {
        FileInputStream fileInputStream = null;
        FileOutputStream fOut = null;
        try {
            fileInputStream=new FileInputStream("plum.png");
            fOut = new FileOutputStream("copy.png");
            int c;
//            int c = fileInputStream.read();
//            System.out.print(c);
            while((c = fileInputStream.read())!= -1){
//                System.out.write(c);
                fOut.write(c);
//                System.out.print((char)c);
            }
            fileInputStream.close();
            fOut.close();


        } catch (FileNotFoundException e) {
            throw new RuntimeException(e);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }


    }
}
