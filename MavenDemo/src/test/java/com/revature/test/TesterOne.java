package com.revature.test;

import com.revature.demo.Calculator;
import org.junit.Test;
import org.junit.jupiter.api.Assertions;

public class TesterOne {
    @Test
    public void testCalcAdd() {
        Assertions.assertEquals(10, Calculator.add(5, 5));
    }

}
