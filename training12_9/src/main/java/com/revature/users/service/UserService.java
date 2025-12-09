package com.revature.users.service;

import com.revature.users.dao.UserRepository;
import com.revature.users.model.User;

public class UserService {
    private UserRepository userRep;

    public UserService(UserRepository userRep){
        this.userRep = userRep;
    }

    public User getUserById(Long id){
        return userRep.findById(id);
    }

    public User getUserByEmail(String email){
        return userRep.findByEmail(email);
    }

    public boolean register(User user){
        //return false if exists
        if(userRep.findById(user.getId()) != null){
            return false;
        }
        else {
            userRep.save(user);
            return true;
        }
    }


}
