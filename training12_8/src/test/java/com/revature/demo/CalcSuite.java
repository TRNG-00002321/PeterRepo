package com.revature.demo;


import org.junit.platform.suite.api.SelectClasses;
import org.junit.platform.suite.api.Suite;

@Suite
@SelectClasses( {CalcAddTest.class, CalcSubtractTest.class, CalcMultiplyTest.class, CalcDivideTest.class} )
public class CalcSuite {

}
