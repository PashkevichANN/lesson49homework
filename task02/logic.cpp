#include "logic.h"

int sum_less_number(int* array, int size, int n) {
	int sum = 0;
	for (int i = 0; i < size;i++) {
		if (array[i] < n) {
			sum++;
		}
	}

	return sum;
}

int sum_equal_numbers(int* array, int size, int n){
	int sum = 0;
	for (int i = 0; i < size;i++) {
		if (array[i] == n) {
			sum++;
		}
	}
	return sum;
}
