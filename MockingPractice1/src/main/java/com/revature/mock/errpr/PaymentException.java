package com.revature.mock.errpr;

public class PaymentException extends Exception{
    public PaymentException(String gatewayTimeout) {
        super(gatewayTimeout);
    }
}
