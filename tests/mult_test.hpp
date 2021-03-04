#ifndef __MULT_TEST_HPP__
#define _MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "../headers/op.hpp"
#include "../headers/mult.hpp"

TEST(MultTest, MultTwelve) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(4);
	y = new Op(8);
	test = new Mult(x, y);
	EXPECT_EQ(test->evaluate(), 32);
	EXPECT_EQ(test->stringify(), "(4 * 8)");
}

TEST(MultTest, MultOneNegative) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(4);
	y = new Op(-6);
	test = new Mult(x, y);
	EXPECT_EQ(test->evaluate(), -24);
}

TEST(MultTest, MultTwoNegatives) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(-4);
	y = new Op(-6);
	test = new Mult(x, y);
	EXPECT_EQ(test->evaluate(), 24);
}

TEST(MultTest, StringNegative) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(3.5);
	y = new Op(-6);
	test = new Mult(x, y);
	EXPECT_EQ(test->stringify(), "(3.5 * -6)");
}

TEST(MultTest, largeNumber) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(965478264);
	y = new Op(6);
	test = new Mult(x, y);
	EXPECT_EQ(test->evaluate(), 5792869584);
	EXPECT_EQ(test->stringify(), "(965478264 * 6)");
}

TEST(MultTest, largeNegNumber) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(965478264);
	y = new Op(-6);
	test = new Mult(x, y);
	EXPECT_EQ(test->evaluate(), -5792869584);
	EXPECT_EQ(test->stringify(), "(965478264 * -6)");
}

TEST(MultTest, multByZero) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(-65486135);
	y = new Op(0);
	test = new Mult(x, y);
	EXPECT_EQ(test->evaluate(), 0);
	EXPECT_EQ(test->stringify(), "(-65486135 * 0)");
}

#endif //__MULT_TEST_HPP__