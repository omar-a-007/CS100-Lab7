#ifndef __MULT_TEST_HPP__
#define _MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "../headers/mult.hpp"

/* OLD! From the Composite Lab! Only use as reference.
TEST(MultTest, MultEvaluateNonZero) {
    Base* eight = new Op(8);
    Base* five = new Op(5);
    Base* test = new Mult(eight, five);
    EXPECT_EQ(test->evaluate(), 40);
}

TEST(MultTest, MultEvaluateNegative) {
    Base* negEight = new Op(-8);
    Base* five = new Op(5);
    Base* test = new Mult(negEight, five);
    EXPECT_EQ(test->evaluate(), -40);
}

TEST(MultTest, MultStringifyTwoOps) {
    Base* eight = new Op(8);
    Base* five = new Op(5);
    Base* test = new Mult(eight, five);
    EXPECT_EQ(test->stringify(), "(8.000000 * 5.000000)");
}

TEST(MultTest, MultStringifyNegative) {
    Base* negEight = new Op(-8);
    Base* five = new Op(5);
    Base* test = new Mult(negEight, five);
    EXPECT_EQ(test->stringify(), "(-8.000000 * 5.000000)");
}
*/

#endif //__MULT_TEST_HPP__
