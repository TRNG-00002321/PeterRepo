package com.revature.serialize;

import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;

public class WriteEmpObj {

    static void main(String[] args) {

        Employee emp1 = new Employee(101, "Andrew", "Plano", "Trainee");

        FileOutputStream fOut = null;
        ObjectOutputStream oOut = null;
        try{
            fOut = new FileOutputStream("employee.dat");
            oOut = new ObjectOutputStream(fOut);
            oOut.writeObject(emp1);


        } catch (FileNotFoundException e) {
            throw new RuntimeException(e);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }

    }
}
