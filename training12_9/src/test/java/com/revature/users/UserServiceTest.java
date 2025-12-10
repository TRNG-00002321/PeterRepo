package com.revature.users;

import com.revature.mock.WeatherApiClient;
import com.revature.users.dao.UserRepository;
import com.revature.users.model.User;
import com.revature.users.service.UserService;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.mockito.InjectMocks;
import org.mockito.Mock;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertNull;
import static org.mockito.Mockito.*;

import org.mockito.Mockito;
import org.mockito.Mockito.*;
import org.mockito.junit.jupiter.MockitoExtension;


@ExtendWith(MockitoExtension.class)
public class UserServiceTest {
    @Mock //annotation instantiates as a mock
    private UserRepository userRep;
    @InjectMocks //injects dependencies for us automatically, in this case userRep
    private UserService userServ;

    private User existingUser;
    private User newUser;

    @BeforeEach
    public void setup(){
        existingUser = new User(1L, "dart@yahoo.com", "Joe");
        newUser = new User(2L, "wong@gmail.com", "Cory");
    }


    @Test
    public void findUserById_doesExist_positive(){
        when(userRep.findById(1L)).thenReturn(existingUser);

        User foundUser = userServ.getUserById(1L);

        assertEquals("Joe", foundUser.getName());
        verify(userRep, times(1)).findById(1L);
    }

    @Test
    public void findUserById_notExists_negative(){
        when(userRep.findById(1L)).thenReturn(null);

        User foundUser = userServ.getUserById(1L);
        assertNull(foundUser);
        verify(userRep, times(1)).findById(1L);
    }

    @Test
    public void register_newUser_positive(){
        when(userRep.findById(newUser.getId())).thenReturn(null);

        userServ.register(newUser);

        verify(userRep, times(1)).save(newUser);
        verify(userRep, times(1)).findById(newUser.getId());
    }

    @Test
    public void register_newUser_negative(){
        when(userRep.findById(newUser.getId())).thenReturn(existingUser);

        userServ.register(newUser);

        verify(userRep, times(0)).save(newUser);
        verify(userRep, times(1)).findById(newUser.getId());
    }


}
