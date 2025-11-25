package com.revature.example.daodemo.dao;

import com.revature.example.daodemo.model.Contacts;
import com.revature.example.daodemo.util.ConnectionUtil;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

public class ContactsJDBCImpl implements ContactDAO {
    Connection connection=null;

    public List<Contacts> getAllContacts(){
        connection= ConnectionUtil.dbConnection();
        List<Contacts> contactsList= new ArrayList<>();
        Contacts contacts=null;
        String getAll = "select * from contacts";
        try{
            PreparedStatement prep = connection.prepareStatement(getAll);
            ResultSet res = prep.executeQuery();
            while(res.next()){
                contacts=new Contacts(res.getInt(1),res.getString(2),
                        res.getString(3),res.getString(4));
                contactsList.add(contacts);
            }

        }catch(SQLException e){
            throw new RuntimeException(e);
        }
        return contactsList;
    }

    public Contacts getContact(int id){
        connection= ConnectionUtil.dbConnection();
        Contacts contacts=null;
        String getContact="select * from contacts where id=?";
        try {
            PreparedStatement preparedStatement=connection.prepareStatement(getContact);
            preparedStatement.setInt(1,id);
            ResultSet resultSet=preparedStatement.executeQuery();
            while (resultSet.next()){
                contacts=new Contacts(resultSet.getInt(1),resultSet.getString(2),
                        resultSet.getString(3),resultSet.getString(4));
            }
        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
        return contacts;
    }

    public void save(Contacts contacts){
        connection= ConnectionUtil.dbConnection();
        String intoContact="insert into contacts(id, name, email, phone) value(?,?,?,?)";
        try {
            PreparedStatement preparedStatement=connection.prepareStatement(intoContact);
            preparedStatement.setInt(1, contacts.getId());
            preparedStatement.setString(2, contacts.getName());
            preparedStatement.setString(3, contacts.getEmail());
            preparedStatement.setString(4, contacts.getPhone());
            preparedStatement.executeQuery();

        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }


    public Contacts update(int id, String column, String value){
        connection = ConnectionUtil.dbConnection();
        String updateContact="update contacts set ?=? where id=?";
        try {
            PreparedStatement preparedStatement=connection.prepareStatement(updateContact);
            preparedStatement.setInt(3, id);
            preparedStatement.setString(1, column);
            preparedStatement.setString(2, value);
            preparedStatement.executeQuery();

        } catch (SQLException e) {
            throw new RuntimeException(e);
        }
        return getContact(id);
    }



    public void delete(int id){
        connection = ConnectionUtil.dbConnection();
        String destroy="delete contacts where id=?";
        try {
            PreparedStatement preparedStatement=connection.prepareStatement(destroy);
            preparedStatement.setInt(1, id);
            preparedStatement.executeQuery();

        } catch (SQLException e) {
            throw new RuntimeException(e);
        }

    }






}
