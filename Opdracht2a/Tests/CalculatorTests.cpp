//
// Created by robinbakker on 2-10-2018.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Calculator.h"

using testing::Eq;

namespace
{
   Calculator calculator;

    TEST(testint, add1)
    {
       EXPECT_EQ(10.3, calculator.add(5.0,5.3));
    }

    TEST(testint, add2)
    {
        EXPECT_EQ(10, calculator.add(5,5));
    }

    TEST(testint, divide)
    {
        EXPECT_EQ(1, calculator.divide(9,9));
    }

    TEST(testint, divide1)
    {
        EXPECT_EQ(1, calculator.divide(3.3,3.3));
    }
}