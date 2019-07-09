//!testgcd.cpp
#include "gcd.h"
#include <gtest/gtest.h>

TEST(GcdTest, IntTest)
{
    EXPECT_EQ(1, Gcd(2, 5));
    EXPECT_EQ(2, Gcd(2, 5));
    EXPECT_EQ(2, Gcd(2, 4));
    EXPECT_EQ(3, Gcd(6, 9));
}

int main(int argc, char **argv)
{
    //	testing::GTEST_FLAG(output) = "xml:";
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
