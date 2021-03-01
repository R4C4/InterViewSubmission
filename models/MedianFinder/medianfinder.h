#ifndef MEDIANFINDER_H
#define MEDIANFINDER_H

#include <QString>

#include <MedianFinderExport.h>

class MedianFinder_DLL MedianFinder
{
public:
    MedianFinder();
    double findMedian(const std::vector<double>& file);
};

#endif // SAMPLE_CLASS
