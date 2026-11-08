#include "logic.h"

int calculete_geometric_mean(int* array, int size) {
	long product_of_numbers = 1;
	for (int i = 0; i < size; i++) {
		product_of_numbers *= array[i];
	}
	int geometric_mean = pow(product_of_numbers, 1.0 / size);

	return geometric_mean;
}

int calculate_larger_numbers(int* array, int size) {
	int sum = 0;
	int number = calculete_geometric_mean(array, size);

	for (int i = 0; i < size;i++) {
		if (array[i] > number){
			sum++;
		}
	}
	return sum;
}