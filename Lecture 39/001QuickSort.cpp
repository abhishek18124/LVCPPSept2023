// constraints : n <= 100

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

void quickSort(int arr[], int s, int e) {

	// base case

	if (s >= e) {
		return;
	}

	// recursive case

	// 1. partition the arr[] around the pivot i.e. arr[e]

	int pi = partition(arr, s, e);

	// 2. recursively sort the left partition arr[s...pi-1]
	quickSort(arr, s, pi - 1);

	// 3. recursively sort the right partition arr[pi+1...e]
	quickSort(arr, pi + 1, e);

}

int main() {

	int arr[] = {60, 50, 20, 10, 40, 30};
	int n = sizeof(arr) / sizeof(int);

	quickSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}