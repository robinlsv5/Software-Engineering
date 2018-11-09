//
// Created by robinbakker on 2-10-2018.
//
#include <gtest/gtest.h>
#include <gtest/gmock.h>
#include <Calculator.h>

using testing::eq;

namespace
{
   Calculator calculator;

    TEST(testint, add1)
    {
       EXPECT_EQ(10, calculator.add(5,5));
    }

    TEST(testint, divide)
    {
        EXPECT_EQ(1, calculator.divide(9,9));
    }
}