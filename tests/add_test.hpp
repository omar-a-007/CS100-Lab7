#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "../headers/op.hpp"
#include "../headers/add.hpp"

TEST(AddTest, AddTwelve) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(4);
	y = new Op(8);
	test = new Add(x, y);
	EXPECT_EQ(test->evaluate(), 12);
	EXPECT_EQ(test->stringify(), "(4 + 8)");
}

TEST(AddTest, AddOneNegative) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(4);
	y = new Op(-6);
	test = new Add(x, y);
	EXPECT_EQ(test->evaluate(), -2);
}

TEST(AddTest, AddTwoNegatives) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(-4);
	y = new Op(-6);
	test = new Add(x, y);
	EXPECT_EQ(test->evaluate(), -10);
}

TEST(AddTest, StringNegative) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(3.5);
	y = new Op(-6);
	test = new Add(x, y);
	EXPECT_EQ(test->stringify(), "(3.5 + -6)");
}

TEST(AddTest, largeNumber) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(965478264);
	y = new Op(6);
	test = new Add(x, y);
	EXPECT_EQ(test->evaluate(), 965478270);
	EXPECT_EQ(test->stringify(), "(965478264 + 6)");
}

TEST(AddTest, largeNegNumber) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(6);
	y = new Op(-965478264);
	test = new Add(x, y);
	EXPECT_EQ(test->evaluate(), -965478258);
	EXPECT_EQ(test->stringify(), "(6 + -965478264)");
}


#endif //__OP_TEST_HPP__
