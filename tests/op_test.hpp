#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "../headers/op.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Base* test = new Op(8);

    EXPECT_EQ(test->evaluate(), 8);

    delete test;
}

TEST(OpTest, OpZero) {
    Base* test = new Op(0);

    EXPECT_EQ(test->evaluate(), 0);

    delete test;
}

TEST(OpTest, OpNegative) {
    Base* test = new Op(-2);

    EXPECT_EQ(test->evaluate(), -2);

    delete test;
}

TEST(OpTest, OpLarge) {
    Base* test = new Op(8658946);

    EXPECT_EQ(test->evaluate(), 8658946);

    delete test;
}

TEST(OpTest, OpLargeNegative) {
    Base* test = new Op(-8658946);
    
    EXPECT_EQ(test->evaluate(), -8658946);

    delete test;
}

#endif //__OP_TEST_HPP__
