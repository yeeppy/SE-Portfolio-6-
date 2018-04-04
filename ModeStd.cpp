#include "Header.h"

float getMode(int dataset[5]) {
	int counter = 1;
	int max = 0;
	int mode = dataset[0];
	for (int pass = 0; pass < 5 - 1; pass++) {
		if (dataset[pass] == dataset[pass + 1]) {
			counter++;
			if (counter > max) {
				max = counter;
				mode = dataset[pass];
			}
		}
		else {
			counter = 1;
		}
	}
	return (float)mode;
}

float getStd(int dataset[5], float mean) {
	float temp = 0.0f;
	for (int j = 0; j < 5; ++j) {
		temp = temp + (float)pow(dataset[j] - mean, 2);
	}
	float std = (float)sqrt(temp / (5 - 1));
	return std;
}