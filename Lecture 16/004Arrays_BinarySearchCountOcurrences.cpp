#include<iostream>

using namespace std;

// time : O(logn)

int upperBound(int arr[], int n, int t) {

	int s = 0;
	int e = n - 1;

	int ans = -1;

	while (s <= e) {

		int m = s + (e - s) / 2;

		if (arr[m] == t) {

			ans = m;

			// continue the search in the right half i.e. [m+1, e]
			s = m + 1;

		} else if (t > arr[m]) {

			// reduce the search space from [s, e] to [m+1, e]

			s = m + 1;

		} else { // t < arr[m]

			// reduce the search space from [s, e] to [s, m-1]

			e = m - 1;

		}

	}

	return ans;

}


int lowerBound(int arr[], int n, int t) {

	int s = 0;
	int e = n - 1;

	int ans = -1;

	while (s <= e) {

		int m = s + (e - s) / 2;

		if (arr[m] == t) {

			ans = m;

			// continue the search in the left half i.e. [s, m-1]
			e = m - 1;

		} else if (t > arr[m]) {

			// reduce the search space from [s, e] to [m+1, e]

			s = m + 1;

		} else { // t < arr[m]

			// reduce the search space from [s, e] to [s, m-1]

			e = m - 1;

		}

	}

	return ans;

}

int main() {

	int arr[] = {20, 20, 30, 30, 30, 30, 30, 40, 40};
	int n = sizeof(arr) / sizeof(int);

	int t = 100;

	// cout << upperBound(arr, n, t) - lowerBound(arr, n, t) + 1 << endl;

	int lb = lowerBound(arr, n, t);
	int ub = upperBound(arr, n, t);

	if (lb == -1) { // or ub == -1
		// 't' is not present in the arr[]
		cout << 0 << endl;
	} else {
		cout << (ub - lb + 1) << endl;
	}

	return 0;
}