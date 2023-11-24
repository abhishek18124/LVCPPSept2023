// contraints : n <= 10, m <= 10

#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 30, 50, 70, 80};
	int brr[] = {20, 40, 60};

	int n = sizeof(arr) / sizeof(int);
	int m = sizeof(brr) / sizeof(int);

	int crr[20];

	int i = 0; // to iterate over arr[]
	int j = 0; // to iterate over brr[]
	int k = 0; // to iterate over crr[]

	// time  : O(n+m)
	// space : O(n+m)

	while (i <= n - 1 and j <= m - 1) {

		if (arr[i] < brr[j]) {

			crr[k] = arr[i];
			i++;
			k++;

		} else {

			crr[k] = brr[j];
			j++;
			k++;

		}

	}

	while (i <= n - 1) {

		crr[k] = arr[i];
		i++;
		k++;

	}

	while (j <= m - 1) {

		crr[k] = brr[j];
		j++;
		k++;

	}

	for (int l = 0; l < m + n; l++) {
		cout << crr[l] << " ";
	}

	cout << endl;

	return 0;
}

