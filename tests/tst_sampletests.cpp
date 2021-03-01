#include "catch.hpp"
#include "MedianFinder/medianfinder.h"

TEST_CASE("Even Median TestCase", "[fancy]")
{
    std::vector<double> numbers = { -70, -50, 0, 30,  200000 };
    double testNumber = MedianFinder::findMedian(numbers);
    REQUIRE(testNumber==0);

}

TEST_CASE("Odd Median TestCase", "[fancy]")
{
    std::vector<double> numbers = { -70, 0, 30,  200000 };
    double testNumber = MedianFinder::findMedian(numbers);
    REQUIRE(testNumber == 15);

}