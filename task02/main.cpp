#include "logic.h"

int main(){
	int  array[SIZE];
	int n;
	cout << "Input N :";
	cin >> n;

	for (int i = 0; i < SIZE; i++) {
		cout << "Input 10 numbers: ";
		cin >> array[i];
		system("cls");

	}
	cout << "Sum of the numbers which less then " << n << ": "
		<< sum_less_number(array, SIZE, n) << endl
		<< "equal " << n << ": " << sum_equal_numbers(array, SIZE, n) << endl;
	return 0;
}
