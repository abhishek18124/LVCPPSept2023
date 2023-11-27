// contraints : n <= 100, k <= 9

#include<iostream>

using namespace std;

int main() {

	int arr[] = {1, 0, 3, 2, 3, 1, 2, 0, 2};
	int n = sizeof(arr) / sizeof(int);

	int k = 3; // denotes the maximum element in the array

	int freq[10];

	// n steps

	for (int i = 0; i < n; i++) {

		freq[arr[i]]++;

	}

	for (int i = 0; i <= k; i++) {
		cout << freq[i] << " ";
	}

	cout << endl;

	// k-steps

	for (int i = 1; i <= k; i++) {
		// freq[i] = freq[i] + freq[i - 1];

		freq[i] += freq[i - 1];
	}

	for (int i = 0; i <= k; i++) {
		cout << freq[i] << " ";
	}

	cout << endl;

	// k-steps

	for (int i = k; i >= 1; i--) {
		freq[i] = freq[i - 1];
	}

	freq[0] = 0;

	for (int i = 0; i <= k; i++) {
		cout << freq[i] << " ";
	}

	cout << endl;

	// n-steps

	int out[100];

	for (int i = 0; i < n; i++) {

		int x = arr[i];

		int pos = freq[x];

		out[pos] = x;

		freq[x]++;

		// out[freq[arr[i]]] = arr[i];
		// freq[arr[i]]++;

		// out[freq[arr[i]]++] = arr[i];


	}

	// total steps = 2n + 2k ~ O(n+k)
	// total space = k due to freq[] and n due to out[] ~ O(n+k)

	for (int i = 0; i < n; i++) {

		cout << out[i] << " ";

	}

	cout << endl;


	return 0;
}