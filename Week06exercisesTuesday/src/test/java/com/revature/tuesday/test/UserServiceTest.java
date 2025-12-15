package com.revature.tuesday.test;
import com.revature.demo.models.User;
import com.revature.demo.service.EmailClient;
import com.revature.demo.service.UserRepository;
import com.revature.demo.service.UserService;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.mockito.Mock;
import org.mockito.InjectMocks;
import org.mockito.junit.jupiter.MockitoExtension;

import java.util.Optional;

import static org.mockito.Mockito.*;
import static org.junit.jupiter.api.Assertions.*;

@ExtendWith(MockitoExtension.class)  // Enables Mockito annotations
class UserServiceTest {

    @Mock
    private UserRepository repository;  // Mock the dependency

    @Mock
    private EmailClient emailClient;  // Mock the dependency

    @InjectMocks
    private UserService userService;  // Inject mocks automatically`


    @Test
    void getUser_existingUser_returnsUser() {
        // Arrange: Configure the mock
        User expectedUser = new User("John", "john@test.com");
        expectedUser.setId(1L);

        when(repository.findById(1L)).thenReturn(Optional.of(expectedUser));

        // Act: Call the method under test
        User actualUser = userService.getUser(1L);

        // Assert: Verify the result
        assertEquals(expectedUser, actualUser);
        assertEquals("John", actualUser.getName());
    }



}