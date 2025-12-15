package com.revature.mock.service;

import com.revature.mock.models.Order;

public interface NotificationService {
    void sendOrderConfirmation(Order order);  // void
    void sendShippingUpdate(Order order, String status);  // void
}
