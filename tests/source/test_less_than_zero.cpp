#include <catch2/catch_all.hpp>

#include <list>
#include <vector>

#include <include/less_than_zero.h>

template <class T>
struct vectorIntTestItem {
    const std::vector<T> data = { 1, 0, -2, 0, 5, -1 };

    const size_t zeros = 2;
};

template <class T>
struct vectorFloatingPointTestItem {
    const std::vector<T> data = { 1.01, 0, -2, -0.5, 5, 0, -1.002 };

    const size_t zeros = 3;
};

template <class T>
struct listIntTestItem {
    const std::list<T> data = { 1, 0, -2, 0, 5, -1 };

    const size_t zeros = 2;
};

template <class T>
struct listFloatingPointTestItem {
    const std::list<T> data = { 1.01, 0, -2, -0.1, 5, 0, -1.002 };

    const size_t zeros = 3;
};

using LessThanZeroTypesT = std::tuple<
    // Vectors
    vectorIntTestItem<int>,
    vectorFloatingPointTestItem<double>,
    vectorFloatingPointTestItem<float>,
    // Lists
    listIntTestItem<int>,
    listFloatingPointTestItem<double>,
    listFloatingPointTestItem<float>>;

TEMPLATE_LIST_TEST_CASE("FXLessThanZero", "[LessThanZero]", LessThanZeroTypesT)
{
    // arrange
    TestType TestItem;

    // act
    const size_t res = less_than_zero(TestItem.data);

    CHECK(res == TestItem.zeros);
}
