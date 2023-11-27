// contraints : n <= 100, k <= 9

#include<iostream>

using namespace std;

int main() {

	int arr[] = {1, 0, 3, 2, 3, 1, 2, 0, 2};
	int n = sizeof(arr) / sizeof(int);

	int k = 3; // denotes the maximum element in the array

	int freqMap[10];

	memset(freqMap, 0, sizeof(freqMap));

	// 1. build the freqMap - n-steps

	for (int i = 0; i < n; i++) {

		// int x = arr[i];
		// freqMap[x]++;

		freqMap[arr[i]]++;

	}

	// for (int i = 0; i <= k; i++) { // 0<=arr[i]<=k therefore size of freqMap is k+1 i.e. range of valid indices is from 0 to k
	// 	cout << freqMap[i] << " ";
	// }

	// cout << endl;

	// 2. print the sorted arr[] using freqMap - n-steps

	for (int i = 0; i <= k; i++) {

		int y = freqMap[i];

		// print 'i' y times

		for (int j = 1; j <= y; j++) {
			cout << i << " ";
		}

	}

	cout << endl;

	// total = n+n = 2n steps ~ O(n)

	// space : k+1 ~ O(k) due to freqMap

	return 0;
}