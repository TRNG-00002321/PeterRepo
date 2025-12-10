package com.revature.stringtest;


import com.revature.users.model.User;
import com.revature.users.service.StringUtils;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.CsvSource;
import org.junit.jupiter.params.provider.ValueSource;

import static org.junit.jupiter.api.Assertions.*;

public class StringUtilsTest {
/*
Assignment :
Task 1: Test reverse()
Task 2: Test isEmpty()
Task 3: Test findFirst() with Null Handling
Task 4: Test split() with Array Assertions
Task 5: Master assertAll()
Write a single test that validates a User object using assertAll:
*/



    @Test
    public void reverse_positive(){
        String testString = "Reginald";
        String expected = "dlanigeR";

        String real = StringUtils.reverse(testString);
        assertEquals(expected, real);
    }


    @Test
    public void isEmpty_emptyString(){
        String testString = "";
        boolean expected = true;
        boolean real = StringUtils.isEmpty(testString);
        assertEquals(expected, real);
    }

    @Test
    public void isEmpty_nonEmptyString(){
        String testString = "egg";
        boolean expected = false;
        boolean real = StringUtils.isEmpty(testString);
        assertEquals(expected, real);
    }

    @Test
    public void findFirst_nonEmpty_positive(){
        String[] testString ={"egg", "Reginald", "horse"};
        String expected = "egg";
        String real = StringUtils.findFirst(testString, "e");
        assertEquals(expected, real);
    }
    @Test
    public void findFirst_nonEmpty_negative(){
        String[] testString ={"egg", "Reginald", "horse"};
        String real = StringUtils.findFirst(testString, "lm");
        assertNull(real);
    }
    @Test
    public void findFirst_empty_negative(){
        String[] testString = {};
        String real = StringUtils.findFirst(testString, "lm");
        assertNull(real);
    }


    @Test
    public void split_nonempty_positive(){
        String testString = "Hello,My,Name,Is";
        String[] expected = {"Hello", "My", "Name", "Is"};
        String[] real = StringUtils.split(testString, ",");
        assertArrayEquals(expected, real);
    }
    @Test
    public void split_empty_negative(){
        String testString = null;
        String[] expected = {};
        String[] real = StringUtils.split(testString, ",");
        assertArrayEquals(expected, real);
    }

    @ParameterizedTest
    @ValueSource(strings = {"1,john@gmail.com,John"})
    public void parseCsv_validUser_positive(String a){
        System.out.println(a);
        User newUser;
        User expectedUser = new User(1L, "john@gmail.com", "John");
        newUser = StringUtils.parseUser(a);
        assertAll(
                ()->assertEquals(expectedUser.getId(), newUser.getId()),
                ()->assertEquals(expectedUser.getName(), newUser.getName()),
                ()->assertEquals(expectedUser.getEmail(), newUser.getEmail())
        );

    }



}
