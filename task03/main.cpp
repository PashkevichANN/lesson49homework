#include "logic.h"

int main() {
	int  array[SIZE];
	
	for (int i = 0; i < SIZE; i++) {
		cout << "Input 10 numbers: ";
		cin >> array[i];
		system("cls");
	}

		cout << "Numbers, which larger than geometric mean of array: "
			<< calculate_larger_numbers(array, SIZE);
	return 0;
}
