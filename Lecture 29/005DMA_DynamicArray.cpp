#include<iostream>

using namespace std;

int* resize(int* arr, int c) {
	cout << "resizing from "
	     << c*sizeof(int) << "B to "
	     << 2 * c*sizeof(int) << "B" << endl;

	int* brr = new int[2 * c];

	for (int i = 0; i < c; i++) {
		brr[i] = arr[i];
	}

	delete [] arr;

	return brr;
}

int main() {

	int* arr = new int[1];
	int c = 1; // to store the maximum capacity of the dynamic array
	int i = 0; // to store the size of the dynamic array

	int x; // to store the integer value read from the user

	while (true) {

		cout << ">> ";
		cin >> x;

		if (x < 0) {
			break;
		}


		if (i == c) {

			// you've exhausted the capacity of the vector (dynamic array)

			arr = resize(arr, c);
			c = 2 * c;

		}

		arr[i] = x;
		i++;

	}

	// print the dynamic array

	for (int j = 0; j < i; j++) {
		cout << arr[j] << " ";
	}

	cout << endl;

	return 0;

}