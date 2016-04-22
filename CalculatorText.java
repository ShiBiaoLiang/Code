package com.bjsxt_junit4.text;

import static org.junit.Assert.*;

import org.junit.Test;

import com.bjsxt_junit4.Calculator;
import com.bjsxt_junit4.T;

public class CalculatorText {

	@Test
	public void test() {
		int f =new Calculator().add(5,3,4);
		assertEquals(3, f);
	}

}
