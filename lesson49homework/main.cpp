#include "logic.h"

int main() {
	int array[SIZE];

	for (int i = 0; i < SIZE; i++) {
		cout << "Input 10 numbers: ";
		cin >> array[i];
		system("cls");

	}

	cout << "Sum of the even numbers: " << sum_even_numbers(array, SIZE) << endl
		<< "positive numbers: " << sum_positive_numbers(array, SIZE) << endl
		<< "zero: " << sum_zero(array, SIZE) << endl
		<< "odd numbers: " << sum_odd_numbers(array, SIZE) << endl
		<< "negative numbers: " << sum_negative_numbers(array, SIZE) << endl;


	return 0;
}