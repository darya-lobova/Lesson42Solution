#include <iostream>
#define DEFAULT_SIZE 100

using namespace std;

int main() {
	int array[DEFAULT_SIZE];
	int length;

	//input
	do {
		system("cls");
		cout << "Input size of array: ";
		cin >> length;
	} while (length <= 0);

	cout << "Input length of array: ";

	for (int index = 0; index < length; index++)
	{
		cin >> array[index];
	}
	
	//logic
	int n = length / 2;
	for (int index = 0; index < n; index++)
	{
		int temp = array[index];
		array[index] = array[length - 1 - index];
		array[length - 1 - index] = temp;
	}

	//output
	cout << "Result: ";
	for (int index = 0; index < length; index++)
	{
		cout << array[index] << " ";
	}


	return 0;
}