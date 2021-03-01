#include "medianfinder.h"
#include <stdexcept>




MedianFinder::MedianFinder()
{
}

double MedianFinder::findMedian(std::vector<double>& list)
{
    std::sort(list.begin(), list.end());
    int n = list.size();
    if (n % 2 == 0) {
        return (list[n / 2 -1] + list[n / 2])/2.0;
    }
    else {
        return list[n / 2 ];
    }
    return 1;
}