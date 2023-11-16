#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30};
	int n = sizeof(arr) / sizeof(int);

	for (int num = 0; num < (1 << n); num++) {

		// iterate over the 'n' bit binary of 'num'

		for (int k = 0; k < n; k++) {

			// check if the kth bit of 'num' is set or not

			if (((num >> k) & 1) == 1) {

				// kth bit of 'num' is set therefore include the arr[k] into subsequence

				cout << arr[k] << " ";

			}


		}

		cout << endl;

	}

	return 0;
}
