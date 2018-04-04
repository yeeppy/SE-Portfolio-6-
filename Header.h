#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cmath>

using namespace std;

void bubblesort(int(&dataset)[5]);
float getMean(int dataset[5]);
float getMedian(int dataset[5]);
float getMode(int dataset[5]);
float getStd(int dataset[5], float mean);

#endif