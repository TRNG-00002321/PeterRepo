package com.revature;

import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class CharStreamsDemo {

    public static void main(String[] args) {
//        FileReader fIn = null;
        FileWriter fOut = null;

        try(FileReader fIn = new FileReader("plum.png")){
            fOut = new FileWriter("copy1.png");

            int c = 0;
            while((c=fIn.read())!=-1){
                fOut.write(c);
//                System.out.write(c);
            }
            fOut.close();


        } catch (FileNotFoundException e) {
            throw new RuntimeException(e);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }


    }
}
