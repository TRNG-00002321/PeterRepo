package com.revature.example.daodemo;

import com.revature.example.daodemo.dao.ContactDAO;
import com.revature.example.daodemo.dao.ContactsJDBCImpl;
import com.revature.example.daodemo.model.Contacts;
import com.revature.example.daodemo.service.ContactsService;
import com.revature.example.daodemo.service.ContactsServiceImpl;
import com.revature.example.daodemo.util.ConnectionUtil;

import java.sql.Connection;

public class Main {

    public static void main(String[] args) {
        ContactsService contactsService=new ContactsServiceImpl();
        Contacts contact=contactsService.getContact(0);
        System.out.println(contact);
    }
}
