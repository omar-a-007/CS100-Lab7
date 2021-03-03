#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "../headers/pow.hpp"

/* OLD! From the Composite Lab! Only use as reference.
TEST(PowTest, PowEvalPos) {
	Base* four = new Op(4);
	Base* eight = new Op(8);
	Base* test = new Pow(eight, four);
	EXPECT_EQ(test->evaluate(), 4096);
}

TEST(PowTest, PowStringifyPos) {
	Base* four = new Op(4);
	Base* eight = new Op(8);
	Base* test = new Pow(four, eight);
	EXPECT_EQ(test->stringify(), "(4.000000 ** 8.000000)");
}

TEST(PowTest, PowEvalNegEvenExp) {
	Base* four = new Op(4);
	Base* negeight = new Op(-8);
	Base* test = new Pow(negeight, four);
	EXPECT_EQ(test->evaluate(), 4096);
}

TEST(PowTest, PowEvalNegOddExp) {
	Base* three = new Op(3);
	Base* negeight = new Op(-8);
	Base* test = new Pow(negeight, three);
	EXPECT_EQ(test->evaluate(), -512);

}

TEST(PowTest, PowEvalNegExp) {
	Base* twenty = new Op(20);
	Base* negtwo = new Op(-2);
	Base* test = new Pow(twenty, negtwo);
	EXPECT_EQ(test->evaluate(), 0.0025);
}

TEST(PowTest, PowStringifyNeg) {
	Base* four = new Op(4);
	Base* negeight = new Op(-8);
	Base* test = new Pow(negeight, four);
	EXPECT_EQ(test->stringify(), "(-8.000000 ** 4.000000)");
}
*/

#endif //__POW_TEST_HPP__
