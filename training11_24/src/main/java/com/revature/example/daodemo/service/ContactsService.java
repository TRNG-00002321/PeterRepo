package com.revature.example.daodemo.service;

import com.revature.example.daodemo.model.Contacts;

import java.util.List;

public interface ContactsService {
    public default List<Contacts> getAllContacts() {
        return null;
    }

    public default Contacts getContact(int id) {
        return null;
    }

    public default void save(Contacts contacts) {

    }

    public default Contacts update(int id, String column, String value) {
        return null;
    }

    public default void delete(int id) {

    }
}