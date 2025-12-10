package com.revature.serialize;

import java.io.*;

public class ReadEmpObj {

    static void main(String[] args) {
        FileInputStream fIn = null;
        ObjectInputStream oIn = null;

        try{
            fIn = new FileInputStream("employee.dat");
            oIn = new ObjectInputStream(fIn);
            Employee e1 = null;
            try{
                while((e1 = (Employee)oIn.readObject())!=null){
                    System.out.println(e1);
                }
            }catch (EOFException e){
                System.out.println("Reached end of file");

            }

            oIn.close();
            fIn.close();



        } catch (FileNotFoundException e) {
            throw new RuntimeException(e);
        } catch (IOException e) {
            throw new RuntimeException(e);
        } catch (ClassNotFoundException e) {
            throw new RuntimeException(e);
        }
        finally{

        }


    }
}
