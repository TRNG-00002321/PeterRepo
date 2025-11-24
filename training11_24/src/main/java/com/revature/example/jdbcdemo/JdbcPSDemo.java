package com.revature.example.jdbcdemo;

import java.sql.*;

public class JdbcPSDemo {

    static void main() {
        Connection conn = null;
        ResultSet res = null;
        PreparedStatement prep = null;
        try{
            conn = DriverManager.getConnection("jdbc:mysql://127.0.0.1:3306/Chinook", "root", "password");
            String insQuery ="insert into Playlist(playlistid, name) value(?,?)";
            prep = conn.prepareStatement(insQuery);
            prep.setString(2, "MyPlaylist");
            prep.setInt(1, 181);
//            prep.execute();
            prep.close();

            String selQuery = "select * from Playlist where name like ?";
            prep = conn.prepareStatement(selQuery);
            prep.setString(1, "Grunge");
            res = prep.executeQuery();
            while(res.next()){
                System.out.println(res.getInt(1)+ " "+ res.getString(2));
            }
            prep.close();

        }
        catch (SQLException e) {
            throw new RuntimeException(e);
        }
    }
}
