#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "../headers/base.hpp"
#include "../headers/op.hpp"
#include "../headers/div.hpp"


TEST(DivTest, DivTwelve) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(4);
	y = new Op(8);
	test = new Div(x, y);
	EXPECT_EQ(test->evaluate(), 0.5);
	EXPECT_EQ(test->stringify(), "(4 / 8)");

	delete test, x, y;
}

TEST(DivTest, DivOneNegative) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(-6);
	y = new Op(4);
	test = new Div(x, y);
	EXPECT_EQ(test->evaluate(), -1.5);

	delete test, x, y;
}

TEST(DivTest, DivTwoNegatives) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(-6);
	y = new Op(-4);
	test = new Div(x, y);
	EXPECT_EQ(test->evaluate(), 1.5);

	delete test, x, y;
}

TEST(DivTest, StringNegative) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(3.5);
	y = new Op(-6);
	test = new Div(x, y);
	EXPECT_EQ(test->stringify(), "(3.5 / -6)");

	delete test, x, y;
}

TEST(DivTest, largeNumber) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(965478264);
	y = new Op(6);
	test = new Div(x, y);
	EXPECT_EQ(test->evaluate(), 160913044);
	EXPECT_EQ(test->stringify(), "(965478264 / 6)");

	delete test, x, y;
}

TEST(DivTest, largeNegNumber) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(965478264);
	y = new Op(-6);
	test = new Div(x, y);
	EXPECT_EQ(test->evaluate(), -160913044);
	EXPECT_EQ(test->stringify(), "(965478264 / -6)");
}


#endif //__DIV_TEST_HPP__
