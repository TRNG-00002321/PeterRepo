package com.revature.example.daodemo;

import com.revature.example.daodemo.dao.ContactsJDBCImplementation;
import com.revature.example.daodemo.dao.ContactDAO;
import com.revature.example.daodemo.model.Contacts;

public class Main {
    public static void main() {
        ContactDao contactDAO = new ContactsJDBCImplementation();
        Contacts c = contactDAO.getContact(1);
    }
}
