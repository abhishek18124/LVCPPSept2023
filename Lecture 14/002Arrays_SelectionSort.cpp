#include<iostream>

using namespace std;

int main() {

	int arr[] = {50, 40, 10, 30, 20};
	int n = sizeof(arr) / sizeof(int);

	// iterate over the passes of selection sort algorithm

	for (int i = 0; i < n - 1; i++) {

		// in the ith pass, place the smallest element in the unsorted
		// part of the arr[] to its correct position in the arr[]

		int minIdx = i;

		for (int j = i + 1; j < n; j++) {

			if (arr[j] < arr[minIdx]) {
				minIdx = j;
			}

		}

		swap(arr[minIdx], arr[i]);


	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}