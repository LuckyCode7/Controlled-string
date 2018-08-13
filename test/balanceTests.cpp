#include <gtest/gtest.h>
#include "balance.hpp"

TEST(balance, check)
{
    EXPECT_EQ(isBalanced("()"), 1);
}
