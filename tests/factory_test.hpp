#ifndef __FACTORY_TEST_HPP__
#define __FACTORY_TEST_HPP__

#include <gtest/gtest.h>

#include "../headers/base.hpp"
#include "../headers/op.hpp"
#include "../headers/rand.hpp"
#include "../headers/add.hpp"
#include "../headers/sub.hpp"
#include "../headers/mult.hpp"
#include "../headers/div.hpp"
#include "../headers/pow.hpp"

#include "../headers/factory_calculator.hpp"

using namespace std;

TEST(FactoryTest, singleOperand)
{
    Factory_Calculator calc;
    char* expr[2] = {"./calc", "+3.5"};

    Base* test = calc.parse(expr, 2);
    EXPECT_EQ(test->evaluate(), 3.5);
    EXPECT_EQ(test->stringify(), "3.5");
}

TEST(FactoryTest, negOperand)
{
    Factory_Calculator calc;
    char* expr[2] = {"./calc", "-2"};

    Base* test = calc.parse(expr, 2);
    EXPECT_EQ(test->evaluate(), -2);
    EXPECT_EQ(test->stringify(), "-2");
}

TEST(FactoryTest, largeOperand)
{
    Factory_Calculator calc;
    char* expr[2] = {"./calc", "9995343.5235"};

    Base* test = calc.parse(expr, 2);
    EXPECT_EQ(test->evaluate(), 9995343.5235);
    EXPECT_EQ(test->stringify(), "9995343.5235");
}

TEST(FactoryTest, largeNegOperand)
{
    Factory_Calculator calc;
    char* expr[] = {"./calc", "-9995343.5235"};

    Base* test = calc.parse(expr, 2);
    EXPECT_EQ(test->evaluate(), -9995343.5235);
    EXPECT_EQ(test->stringify(), "-9995343.5235");
}

TEST(FactoryTest, composite)
{
    Factory_Calculator calc;
    char* expr[] = {"./calc", "-5", "+", "4"};

    Base* test = calc.parse(expr, 4);
    EXPECT_EQ(test->evaluate(), -1);
    EXPECT_EQ(test->stringify(), "(-5 + 4)");
}

TEST(FactoryTest, complexComposite)
{
    Factory_Calculator calc;
    char* expr[] = {"./calc", "3", "+", "-5", "*", "8", "**", "2", "/", "3.5"};

    Base* test = calc.parse(expr, 10);
    EXPECT_NEAR(test->evaluate(), 73.142, 0.001);
    EXPECT_EQ(test->stringify(), "((((3 + -5) * 8) ** 2) / 3.5)");
}


TEST(FactoryTest, invalidEntry1)
{
    Factory_Calculator calc;
    char* expr[] = {"./calc", "3", "+", "+", "5"};

    Base* test = calc.parse(expr, 5);
    EXPECT_EQ(test, nullptr);
}


TEST(FactoryTest, invalidEntry2)
{
    Factory_Calculator calc;
    char* expr[] = {"./calc", "3", "+", "5", "5"};

    Base* test = calc.parse(expr, 5);
    EXPECT_EQ(test, nullptr);
}

TEST(FactoryTest, invalidEntry3)
{
    Factory_Calculator calc;
    char* expr[] = {"./calc", "*", "3", "+", "5"};

    Base* test = calc.parse(expr, 5);
    EXPECT_EQ(test, nullptr);
}

TEST(FactoryTest, invalidEntry4)
{
    Factory_Calculator calc;
    char* expr[] = {"./calc", "3", "+"};

    Base* test = calc.parse(expr, 3);
    EXPECT_EQ(test, nullptr);
}

#endif