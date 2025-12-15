package com.revature.mock;

import com.revature.mock.errpr.PaymentException;
import com.revature.mock.models.Order;
import com.revature.mock.models.PaymentDetails;
import com.revature.mock.models.Product;
import com.revature.mock.service.OrderService;
import com.revature.mock.service.PaymentGateway;
import com.revature.mock.service.ProductRepository;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.mockito.InjectMocks;
import org.mockito.Mock;
import org.mockito.Mockito;
import org.mockito.junit.jupiter.MockitoExtension;

import java.math.BigDecimal;
import java.util.List;
import java.util.Optional;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.mockito.ArgumentMatchers.any;
import static org.mockito.Mockito.when;

@ExtendWith(MockitoExtension.class)
public class BasicStubbing {
    @Mock
    ProductRepository productRepository;
    @InjectMocks
    OrderService orderService;

    @Mock
    PaymentGateway paymentGateway;

    @Test
    void calculateOrderTotal_multipleProducts_returnsCorrectSum() {


        // Arrange: Stub product lookups
        Product laptop = new Product("LAPTOP", "MacBook Pro", new BigDecimal("1999.99"));
        Product mouse = new Product("MOUSE", "Magic Mouse", new BigDecimal("79.99"));

        when(productRepository.findById("LAPTOP")).thenReturn(Optional.of(laptop));
        when(productRepository.findById("MOUSE")).thenReturn(Optional.of(mouse));


        // Act
        BigDecimal total = orderService.calculateTotal(List.of("LAPTOP", "MOUSE"));

        // Assert
        assertEquals(new BigDecimal("2079.98"), total);
    }


    @Test
    void processPayment_gatewayTimeout_throwsPaymentException() {
        // Arrange: Payment gateway times out
        when(paymentGateway.charge(any(), any()))
                .thenThrow(new PaymentException("Gateway timeout"));
        PaymentDetails pd = new PaymentDetails();
        Order o = new Order();
        // Act & Assert
        assertThrows(PaymentException.class, () -> {
            orderService.processPayment(o, pd);
        });
    }
}
