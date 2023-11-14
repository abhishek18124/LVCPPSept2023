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


int main() {

	int arr[] = {20, 20, 30, 30, 30, 30, 30, 40, 40};
	int n = sizeof(arr) / sizeof(int);

	int t = 10;

	cout << upperBound(arr, n, t) << endl;

	return 0;
}