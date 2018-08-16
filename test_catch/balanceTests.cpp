#include "catch.hpp"
#include "../inc/balance.hpp"

SCENARIO("Bracket balance test")
    {
        GIVEN("empty string")
        {
            std::string str = "";
            WHEN("call function balance")
            {
                THEN("Expect false")
                {
                    REQUIRE_FALSE(balance(str));
                }
            }
        }
    }

