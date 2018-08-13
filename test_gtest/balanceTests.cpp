#include <gtest/gtest.h>
#include "../inc/balance.hpp"

TEST(balance, correct)
{
    EXPECT_EQ(balance("()"), 1);
    EXPECT_EQ(balance("({})"), 1);
    EXPECT_EQ(balance("[({})]"), 1);
    EXPECT_EQ(balance("([])"), 1);
    EXPECT_EQ(balance("()[]"), 1);
    EXPECT_EQ(balance("{}()"), 1);
}

TEST(balance, incorrect)
{
    EXPECT_EQ(balance(""), 0);
    EXPECT_EQ(balance("("), 0);
    EXPECT_EQ(balance(")"), 0);
    EXPECT_EQ(balance("()["), 0);
}
