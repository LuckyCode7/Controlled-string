#include <gtest/gtest.h>
#include "../src/balance.hpp"

TEST(balance, check)
{
    EXPECT_EQ(balance("()"), 1);
}
