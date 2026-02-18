#include <iostream>
using namespace std;

int main() {
	int const SIZE = 10;
	int array[SIZE];

	cout << "Input your numbers: ";
	for (int index = 0; index < SIZE; index++)
	{
		cin >> array[index];
	}

	int positive_sum = 0;
	int negative_sum = 0;

	for (int index = 0; index < SIZE; index++)
	{
		positive_sum += array[index] > 0 ? array[index] : 0;
	}

	for (int index = 0; index < SIZE; index++)
	{
		if (array[index] < 0) {
			negative_sum += array[index];
		}
	}

	cout << "Sum of positive elements: " << positive_sum << ".\n";
	cout << "Sum of negative elements: " << negative_sum << ".\n";

	return 0;
}