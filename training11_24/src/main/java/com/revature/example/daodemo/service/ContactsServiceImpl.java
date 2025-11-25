package com.revature.example.daodemo.service;

import com.revature.example.daodemo.dao.ContactDAO;
import com.revature.example.daodemo.dao.ContactsJDBCImpl;
import com.revature.example.daodemo.model.Contacts;

import java.util.List;

public class ContactsServiceImpl implements ContactsService{
    public Contacts getContact(int id) {

        ContactDAO c =new ContactsJDBCImpl();
        if(id>0) {
            Contacts contacts = c.getContact(id);
            return contacts;
        }
        return null;
    }

    @Override
    public List<Contacts> getAllContacts() {
        ContactDAO c = new ContactsJDBCImpl();
        return c.getAllContacts();
    }


    @Override
    public void save(Contacts contacts) {
        ContactDAO c = new ContactsJDBCImpl();
        c.save(contacts);
    }

    @Override
    public void delete(int id) {
        ContactDAO c = new ContactsJDBCImpl();
        c.delete(id);
    }


    @Override
    public Contacts update(int id, String column, String value) {
        ContactDAO c = new ContactsJDBCImpl();
        return c.update(id, column, value);
    }
}
