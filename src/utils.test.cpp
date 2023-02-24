#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>

#include "utils.hpp"

TEST_CASE("Check the return value of returnOne", "[return_one]") {
    REQUIRE(returnOne() == 1);
}

