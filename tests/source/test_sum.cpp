#include <catch2/catch_all.hpp>

#include <include/sum.h>

TEST_CASE("TestSuml", "[sum_eq]")
{
    // arrange
    const int a = 2;
    const int b = 3;

    // act
    const auto res = sum(a, b);

    // assert
    CHECK(res == 5);
}

TEST_CASE("TestSuml", "[sum_ne]")
{
    // arrange
    const int a = 1;
    const int b = 2;

    // act
    const auto res = sum(a, b);

    // assert
    CHECK_FALSE(res == 4);
}