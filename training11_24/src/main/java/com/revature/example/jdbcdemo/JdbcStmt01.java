package com.revature.example.jdbcdemo;
import java.sql.*;

public class JdbcStmt01 {

    public static void main(String[] args){
        Connection conn = null;
        Statement statement = null;
        ResultSet resSet = null;
        //STEP 1: LOAD THE DRIVER
        try {
//            Class.forName("com.mysql.cj.jdbc.Driver");
            //STEP 2: CREATE CONNECTION
            conn = DriverManager.getConnection("jdbc:mysql://127.0.0.1:3306/Chinook", "root", "password");

            //STEP 3: STATEMENT OBJ
            statement = conn.createStatement();
            String selquery = "select * from Track";
            //STEP 4: EXECUTE AND COLLECT RESULT
            resSet = statement.executeQuery(selquery);
            //STEP 5: PROCESS THE RESULTSET
            while(resSet.next()){
                System.out.println(resSet.getInt(1) + ": "
                        + resSet.getString(2)
                        + ", " + resSet.getString("Composer"));
            }

        }
//        catch (ClassNotFoundException e) {
//            e.printStackTrace();
//        }
        catch (SQLException e) {
            throw new RuntimeException(e);
        }
        System.out.println("DB connected");

    }
}
