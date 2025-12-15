package com.revature.mock.service;

import com.revature.mock.models.PaymentDetails;
import com.revature.mock.models.PaymentResult;

import java.math.BigDecimal;

public interface PaymentGateway {
    PaymentResult charge(BigDecimal amount, PaymentDetails details);
    void refund(String transactionId, BigDecimal amount);  // void
}