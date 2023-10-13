// Copyright 2023 - Nestor Neto

#include "gtest/gtest.h"

#include "test_square_root.cpp" // NOLINT
#include "test_factorial.cpp"  // NOLINT

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
