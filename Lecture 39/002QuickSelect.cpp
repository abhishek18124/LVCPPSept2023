#include<iostream>

using namespace std;

int partition(int arr[], int s, int e) {

	int j = s;
	int i = s - 1;

	int pivot = arr[e];

	while (j < e) {

		if (arr[j] < pivot) {

			i++;
			swap(arr[i], arr[j]);

		}

		j++;

	}

	swap(arr[i + 1], arr[e]);

	return i + 1;

}

int quickSelect(int arr[], int s, int e, int k) {

	// 1. partition the arr[] around the pivot element i.e. arr[e]

	int pi = partition(arr, s, e);

	if (pi == k) {

		return arr[pi]; // arr[k]

	} else if (k < pi) {

		// you are trying to search for an element which is less than pivot
		// and you can find this element in the left partition only

		return quickSelect(arr, s, pi - 1, k);

	} else { // k > pi

		// you are trying to search for an element which is greater than pivot
		// and you can find this element in the right partition only

		return quickSelect(arr, pi + 1, e, k);
	}

}

int main() {

	int arr[] = {2, 7, 5, 3, 8, 4}; // 2 3 4 5 7 8
	int n = sizeof(arr) / sizeof(int);

	int k = 0;

	int s = 0;
	int e = n - 1;

	cout << quickSelect(arr, s, e, k) << endl;

	return 0;
}