package com.revature.example.daodemo.dao;

import com.revature.example.daodemo.model.Contacts;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class ContactsJDBCImplementation implements ContactDAO{
    Connection conn = null;
    public Contacts getContact(int id){
        conn = ConnectionUtil.dbConnection();
        Contacts contact = null;
        String getContact = "select * from contacts where id = ?";
        try {
            PreparedStatement prep = conn.prepareStatement(getContact);
            prep.setInt(1, 3);
            ResultSet res = prep.executeQuery();
            while(res.next()){
                contact = new Contacts(res.getInt(1), res.getString(2), res.getString(3));
            }
            return contacts;
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
        return contact;
    }



}
