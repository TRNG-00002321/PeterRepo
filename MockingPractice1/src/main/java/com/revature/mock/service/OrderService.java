package com.revature.mock.service;

import com.revature.mock.models.Order;
import com.revature.mock.models.PaymentDetails;
import com.revature.mock.models.Product;

import java.math.BigDecimal;
import java.util.List;
import java.util.Optional;

public class OrderService {

    ProductRepository pRep;
    public OrderService(ProductRepository pRep){
        this.pRep = pRep;
    }
    public BigDecimal calculateTotal(List<String> products){
        BigDecimal total = BigDecimal.valueOf(0.0);
        for(String i: products){
            Optional<Product> egg = pRep.findById(i);
            if(egg.isPresent()){
                total = total.add(egg.get().getVal());
            }
        }

        return total;
    }


    public void processPayment(Order o, PaymentDetails p){
        
    }
}
