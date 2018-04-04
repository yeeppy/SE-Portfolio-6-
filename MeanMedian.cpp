#include "Header.h"

float getMean(int dataset[5]) {
	int sum = 0;
	for (int i = 0; i < 5; ++i) {
		sum += dataset[i];
	}
	float mean = (float)sum / 5;
	return mean;
}

float getMedian(int dataset[5]) {
	float median = dataset[5 / 2];
	return median;
}