#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "../headers/op.hpp"
#include "../headers/pow.hpp"

TEST(PowTest, PowEvalPos) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(4);
	y = new Op(8);
	test = new Pow(x, y);
	EXPECT_EQ(test->evaluate(), 65536);
	EXPECT_EQ(test->stringify(), "(4 ** 8)");
}


TEST(PowTest, PowLargeNum) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(4);
	y = new Op(16);
	test = new Pow(x, y);
	EXPECT_EQ(test->evaluate(), 4294967296);
	EXPECT_EQ(test->stringify(), "(4 ** 16)");
}

TEST(PowTest, PowOneNegativeExp) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(10);
	y = new Op(-2);
	test = new Pow(x, y);
	EXPECT_EQ(test->evaluate(), 0.01);
}

TEST(PowTest, PowEvalNegEvenExp) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;

	x = new Op(4);
	y = new Op(-2);
	test = new Pow(x, y);
	EXPECT_EQ(test->evaluate(), 0.0625);
}

TEST(PowTest, PowEvalNegOddExp) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;

	x = new Op(4);
	y = new Op(-3);
	test = new Pow(x, y);
	EXPECT_EQ(test->evaluate(), 0.015625);

}

TEST(PowTest, PowTwoNegatives) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(-10);
	y = new Op(-2);
	test = new Pow(x, y);
	EXPECT_EQ(test->evaluate(), 0.01);
}

TEST(PowTest, StringNegative) {
	Base *test = nullptr, *x = nullptr, *y = nullptr;
	
	x = new Op(-3.5);
	y = new Op(6);
	test = new Pow(x, y);
	EXPECT_EQ(test->stringify(), "(-3.5 ** 6)");
}

#endif //__POW_TEST_HPP__
