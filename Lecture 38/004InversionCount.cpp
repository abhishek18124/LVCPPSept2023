// constraints : n <= 100

#include<iostream>

using namespace std;

int merge(int arr[], int s, int m, int e) {

	int i = s;
	int j = m + 1;

	int temp[100]; // based on constraints
	int k = s;

	int cnt = 0; // to track the cnt of inversions between elements of arr[s...m] and arr[m+1...e]

	while (i <= m and j <= e) {

		if (arr[i] < arr[j]) {
			temp[k] = arr[i];
			i++;
			k++;
		} else { // arr[i] > arr[j] -> you've found inversions
			cnt += m - i + 1;
			temp[k] = arr[j];
			j++;
			k++;
		}

	}

	while (i <= m) {

		temp[k] = arr[i];
		i++;
		k++;

	}

	while (j <= e) {

		temp[k] = arr[j];
		j++;
		k++;

	}

	for (int l = s; l <= e; l++) {
		arr[l] = temp[l];
	}

	return cnt;

}

int inversionCount(int arr[], int s, int e) {

	// base case

	if (s == e) {
		// count the no. of inversions in arr[s...s] or arr[e...e]
		return 0;
	}

	// recursive case

	// count the no. of inversions in the arr[s...e]

	int m = s + (e - s) / 2;

	// recursively count the no. of inversions in arr[s...m] and arr[m+1...e]

	int x = inversionCount(arr, s, m);
	int y = inversionCount(arr, m + 1, e);

	// count the no. of inversions b/w the arr[s...m] and arr[m+1...e]

	int z = merge(arr, s, m, e);

	return x + y + z;

}

int main() {

	int arr[] = {2, 7, 5, 8, 3, 4};
	int n = sizeof(arr) / sizeof(int);

	int s = 0;
	int e = n - 1;

	cout << inversionCount(arr, s, e) << endl;

	return 0;
}