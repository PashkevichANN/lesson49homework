#include "logic.h"

int sum_even_numbers(int* array, int size) {
	int sum =0;
	for (int i = 0; i < size;i++) {
		if (array[i] % 2 == 0) {
			sum++;
		}
	}

	return sum;
}

int sum_positive_numbers(int* array, int size) {
	int sum = 0;
	for (int i = 0; i < size;i++) {
		if (array[i] > 0) {
			sum++;
		}
	}
	return sum;
}

int sum_zero(int* array, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] == 0) {
			sum++;
		}
	}
	return sum;
}
int sum_odd_numbers(int* array, int size) {
	int sum = 0;
	for (int i = 0; i < size;i++) {
		if (array[i] % 2 != 0) {
			sum++;
		}
	}
	return sum;
}

int sum_negative_numbers(int* array, int size) {
	int sum = 0;
	for (int i = 0; i < size;i++) {
		if (array[i] < 0) {
			sum++;
		}
	}
	return sum;
}