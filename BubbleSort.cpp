#include "Header.h"

void bubblesort(int(&dataset)[5]) {
	int i, j;
	for (i = 0; i < 5; i++)
		for (j = 5 - 1; j > i; j--)
			if (dataset[j] < dataset[j - 1]) {
				int temp = dataset[j];
				dataset[j] = dataset[j - 1];
				dataset[j - 1] = temp;
			}
}