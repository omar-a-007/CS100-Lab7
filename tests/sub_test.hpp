#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "../headers/sub.hpp"

/* OLD! From the Composite Lab! Only use as reference.
TEST(SubTest, SubTwelve) {
	Base* num1 = new Op(4);
	Base* num2 = new Op(8);
        Base* test = new Sub(num1, num2);
        EXPECT_EQ(test->evaluate(), -4);
}

TEST(StringTest, SubTwelve) {
        Base* num1 = new Op(4);
        Base* num2 = new Op(8);
        Base* test = new Sub(num1, num2);
        EXPECT_EQ(test->stringify(), "(4.000000 - 8.000000)");
}

TEST(SubNegative, SubTen) {
        Base* num1 = new Op(4);
        Base* num2 = new Op(-6);
        Base* test = new Sub(num1, num2);
        EXPECT_EQ(test->evaluate(), 10);
}

TEST(StringNegative, SubTen) {
        Base* num1 = new Op(4);
        Base* num2 = new Op(-6);
        Base* test = new Sub(num1, num2);
        EXPECT_EQ(test->stringify(), "(4.000000 - -6.000000)");
}
*/


#endif //__SUB_TEST_HPP__

