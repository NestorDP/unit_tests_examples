#include <unit_tests_examples/factorial.hpp>
#include "gtest/gtest.h"

class FactorialTest : public ::testing::Test {
  protected:
    Factorial fac;
};

TEST_F(FactorialTest, FactorialOfNegative) {
    ASSERT_EQ(-1, fac.getFactorial(-10));
}

TEST_F(FactorialTest, FactorialOfPositive) {
    ASSERT_EQ(6, fac.getFactorial(3));
    ASSERT_EQ(120, fac.getFactorial(5));
}

TEST_F(FactorialTest, FactorialOfZero) {
    ASSERT_EQ(1, fac.getFactorial(0));
}