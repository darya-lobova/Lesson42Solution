#include "logic.h"

int main() {
	int array[DEFAULT_SIZE];
	int length;

	//input
	do {
		system("cls");
		cout << "Input size of array: ";
		cin >> length;
	} while (length <= 0);

	user_init(array, length);

	//logic
	reverse(array, length);

	//output
	print("Result: ");
	print(convert(array, length));

	return 0;
}