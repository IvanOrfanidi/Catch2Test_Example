#include <catch2/catch_all.hpp>

#include <include/area_of_circle.h>

TEST_CASE("TestAreaOfCircle", "[AreaOfCircle_true]")
{
    // arrange
    const float r = 1.23;

    const float area = 4.7529155;

    // act
    const float res = calculateAreaOfCircle(r);

    // assert
    REQUIRE(area == Catch::Approx(res).epsilon(0.001));
}
