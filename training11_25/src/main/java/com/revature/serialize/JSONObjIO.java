package com.revature.serialize;

import com.fasterxml.jackson.core.JsonGenerationException;
import com.fasterxml.jackson.core.type.TypeReference;
import com.fasterxml.jackson.databind.JsonMappingException;
import com.fasterxml.jackson.databind.ObjectMapper;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class JSONObjIO {

    static void main(String[] args) {


        //WRITING
        ObjectMapper mapper = new ObjectMapper();
        try {
            FileOutputStream fOut = new FileOutputStream("employee.json");
            Employee e0 = new Employee(101, "Peter", "Plano", "QEA Trainee");
            Employee e1 = new Employee(102, "Eggbert", "Plano", "Falling");
            List<Employee> l1 = new ArrayList<>();
            l1.add(e0);
            l1.add(e1);
            mapper.writeValue(fOut, l1);
        } catch (FileNotFoundException e) {
            throw new RuntimeException(e);
        } catch (JsonMappingException e) {
            throw new RuntimeException(e);
        } catch (JsonGenerationException e) {
            throw new RuntimeException(e);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }

        //READING

        try {
            FileInputStream fIn = new FileInputStream("employee.json");
            Employee e = null;
            List<Employee> eL;
            eL = mapper.readValue(fIn, ArrayList.class);
            System.out.println(eL);
        } catch (FileNotFoundException e) {
            throw new RuntimeException(e);
        } catch (JsonMappingException e) {
            throw new RuntimeException(e);
        } catch (JsonGenerationException e) {
            throw new RuntimeException(e);
        } catch (IOException e) {
            throw new RuntimeException(e);
        }


    }
}
