#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "../headers/div.hpp"

/* OLD! From the Composite Lab! Only use as reference.
TEST(DivTest, DivEvalPos) {
	Base* four = new Op(4);
	Base* eight = new Op(8);
	Base* test = new Div(eight, four);
	EXPECT_EQ(test->evaluate(), 2);
}

TEST(DivTest, DivStringifyPos) {
	Base* four = new Op(4);
	Base* eight = new Op(8);
	Base* test = new Div(four, eight);
	EXPECT_EQ(test->stringify(), "(4.000000 / 8.000000)");
}

TEST(DivTest, DivEvalNeg) {
	Base* four = new Op(4);
	Base* negeight = new Op(-8);
	Base* test = new Div(negeight, four);
	EXPECT_EQ(test->evaluate(), -2);
}

TEST(DivTest, DivStringifyNeg) {
	Base* four = new Op(4);
	Base* negsix = new Op(-6);
	Base* test = new Div(four, negsix);
	EXPECT_EQ(test->stringify(), "(4.000000 / -6.000000)");
}
*/

#endif //__DIV_TEST_HPP__
