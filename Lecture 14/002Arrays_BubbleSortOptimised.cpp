#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 50, 40};
	int n = sizeof(arr) / sizeof(int);

	int cnt = 0; // to count no. of comparations done across all the n-1 passes

	// iterate over the passes of bubble sort algorithm

	for (int i = 1; i <= n - 1; i++) {

		// in the ith pass of the bubble sort algorithm, place the
		// largest element in the unsorted part of the arr[] to its
		// correct position

		bool flag = false; // assume no swaps will be done in the ith pass

		for (int j = 0; j < n - i; j++) {

			cnt++;

			if (arr[j] > arr[j + 1]) {

				swap(arr[j], arr[j + 1]);
				flag = true;

			}

		}

		if (flag == false) {

			// your assumption that no swaps will be done in the ith pass is correct therefore you don't need to run bubble sort for any more passes

			break;

		}



	}

	cout << cnt << endl;

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}