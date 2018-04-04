#include "Header.h"

void main() {
	// Declare variables
	int dataset[5];
	float mean, median, mode, std;

	// Request for user inputs
	for (int i = 0; i < 5; ++i) {
		cout << "Please enter number " << i + 1 << " : ";
		cin >> dataset[i];
	}

	// Sort array using bubble sort
	bubblesort(dataset);

	// Calculate statistical information
	mean = getMean(dataset);
	median = getMedian(dataset);
	mode = getMode(dataset);
	std = getStd(dataset, mean);

	// Print results
	cout << "--------------------------" << endl;
	cout << "Statistical Information" << endl;
	cout << "--------------------------" << endl;
	cout << "Mean: " << mean << endl;
	cout << "Median: " << median << endl;
	cout << "Mode: " << mode << endl;
	cout << "Standard Deviation: " << std << endl;

	system("pause");
}