#ifndef MEDIANFINDER_H
#define MEDIANFINDER_H

#include <QString>

#include <MedianFinderExport.h>

class MedianFinder_DLL MedianFinder
{
public:
    MedianFinder();
    static double findMedian(std::vector<double>& list);
};

#endif // SAMPLE_CLASS
