package com.revature.mock.models;

import java.math.BigDecimal;

public class Product {
    private BigDecimal val;
    public Product(String laptop, String macBookPro, BigDecimal bigDecimal) {
        val = bigDecimal;
    }

    public BigDecimal getVal() {
        return val;
    }

    public void setVal(BigDecimal val) {
        this.val = val;
    }
}
