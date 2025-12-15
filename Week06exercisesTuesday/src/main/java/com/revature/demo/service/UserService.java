package com.revature.demo.service;

import com.revature.demo.models.User;

import java.util.Optional;

public class UserService {

    private UserRepository userRep;
    private EmailClient emailCli;

    public UserService(UserRepository userRep) {
        this.userRep = userRep;
    }

    public User getUser(Long id){
        Optional<User> egg = userRep.findById(id);
        return egg.orElseGet(() -> new User(null, null));
    }
}
