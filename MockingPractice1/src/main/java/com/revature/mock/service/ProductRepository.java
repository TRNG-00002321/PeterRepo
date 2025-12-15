package com.revature.mock.service;

import com.revature.mock.models.Product;

import java.util.List;
import java.util.Optional;

public interface ProductRepository {
    Optional<Product> findById(String sku);
    List<Product> findByCategory(String category);
}
