package com.revature.example.daodemo.dao;

import com.revature.example.daodemo.model.Contacts;

import java.util.ArrayList;
import java.util.List;

public interface ContactDAO {

    public default List<Contacts> getAllContact(){
        System.out.println("Egg");
        List<Contacts> e = new ArrayList<>();
        return e;
    }
    public Contacts getContact(int id);
    public default void save(Contacts contact){

    }
    public default Contacts update(int id){
        return null;
    }
    public default void delete(int id){

    }
}
