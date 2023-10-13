#include "gtest/gtest.h"
#include "test_square_root.cpp"
#include "test_factorial.cpp"


int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}