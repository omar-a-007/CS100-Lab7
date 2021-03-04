#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "../headers/op.hpp"
#include "../headers/sub.hpp"


TEST(SubTest, SubTwelve) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(8);
	y = new Op(4);
	test = new Sub(x, y);
	EXPECT_EQ(test->evaluate(), 4);
	EXPECT_EQ(test->stringify(), "(8 - 4)");

	delete test, x, y;
}

TEST(SubTest, SubOneNegative) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(4);
	y = new Op(-6);
	test = new Sub(x, y);
	EXPECT_EQ(test->evaluate(), 10);

	delete test, x, y;
}

TEST(SubTest, SubTwoNegatives) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(-6);
	y = new Op(-4);
	test = new Sub(x, y);
	EXPECT_EQ(test->evaluate(), -2);

	delete test, x, y;
}

TEST(SubTest, StringNegative) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(3.5);
	y = new Op(-6);
	test = new Sub(x, y);
	EXPECT_EQ(test->stringify(), "(3.5 - -6)");

	delete test, x, y;
}

TEST(SubTest, largeNumber) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(965478264);
	y = new Op(6);
	test = new Sub(x, y);
	EXPECT_EQ(test->evaluate(), 965478258);
	EXPECT_EQ(test->stringify(), "(965478264 - 6)");
}

TEST(SubTest, largeNegNumber) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(6);
	y = new Op(-965478264);
	test = new Sub(x, y);
	EXPECT_EQ(test->evaluate(), 965478270);
	EXPECT_EQ(test->stringify(), "(6 - -965478264)");
}


#endif //__SUB_TEST_HPP__

