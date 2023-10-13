// Copyright 2023 - Nestor Neto

#include <unit_tests_examples/square_root.hpp>

#include "gtest/gtest.h"

class SquareRootTest : public ::testing::Test {
 protected:
    SquareRoot root;
};

TEST_F(SquareRootTest, SquareRootOfPositive) {
    ASSERT_EQ(6, root.getSquareRoot(36.0));
    ASSERT_EQ(18.0, root.getSquareRoot(324.0));
    ASSERT_EQ(25.4, root.getSquareRoot(645.16));
    ASSERT_EQ(0, root.getSquareRoot(0.0));
}

TEST_F(SquareRootTest, SquareRootOfZero) {
    ASSERT_EQ(-1.0, root.getSquareRoot(-15.0));
    ASSERT_EQ(-1.0, root.getSquareRoot(-0.2));
}
