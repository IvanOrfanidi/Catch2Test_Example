#include <catch2/catch_all.hpp>

#include <include/equal.h>

TEST_CASE("TestEqual", "[equal_true]")
{
    // arrange
    const int a = 1;
    const int b = 1;

    // act
    const bool res = equal(a, b);

    // assert
    REQUIRE(res);
}

TEST_CASE("TestEqual", "[equal_false]")
{
    // arrange
    const int a = 1;
    const int b = 2;

    // act
    const bool res = equal(a, b);

    // assert
    REQUIRE_FALSE(res);
}
