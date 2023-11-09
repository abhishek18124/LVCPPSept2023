#include<iostream>

using namespace std;

int main() {

	int arr[] = {50, 40, 30, 20, 10};
	int n = sizeof(arr) / sizeof(int);

	int cnt = 0; // to count no. of comparations done across all the n-1 passes

	// iterate over the passes of bubble sort algorithm

	for (int i = 1; i <= n - 1; i++) {

		// in the ith pass of the bubble sort algorithm, place the
		// largest element in the unsorted part of the arr[] to its
		// correct position

		for (int j = 0; j < n - i; j++) {

			cnt++;

			if (arr[j] > arr[j + 1]) {

				swap(arr[j], arr[j + 1]);

			}

		}

	}

	cout << cnt << endl;

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}