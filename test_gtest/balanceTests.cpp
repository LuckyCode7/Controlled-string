#include <gtest/gtest.h>
#include "../inc/balance.hpp"

TEST(balance, correct)
{
    EXPECT_TRUE(balance("()"));
    EXPECT_TRUE(balance("({})"));
    EXPECT_TRUE(balance("[({})]"));
    EXPECT_TRUE(balance("([])"));
    EXPECT_TRUE(balance("()[]"));
    EXPECT_TRUE(balance("{}()"));
}

TEST(balance, incorrect)
{
    EXPECT_FALSE(balance(""));
    EXPECT_FALSE(balance("("));
    EXPECT_FALSE(balance(")"));
    EXPECT_FALSE(balance("()["));
}
