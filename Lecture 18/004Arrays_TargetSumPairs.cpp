#include<iostream>
#include<algorithm>

using namespace std;

// time  : O(n^2)
// space : O(1)

int targetSumPairs(int arr[], int n, int t) {

	int cnt = 0;

	for (int i = 0; i <= n - 2; i++) {

		for (int j = i + 1; j <= n - 1; j++) {

			int pairSum = arr[i] + arr[j];
			if (pairSum == t) {
				cout << arr[i] << " " << arr[j] << endl;
				cnt++;
			}

		}

	}

	return cnt;

}

//time : O(n)

int targetSumPairsOptimised(int arr[], int n, int t) {

	int cnt = 0;

	int s = 0;
	int e = n - 1;

	while (s < e) {

		int pairSum = arr[s] + arr[e];

		if (pairSum == t) {

			cnt++;
			s++;
			e--;

		} else {

			if (pairSum > t) {

				e--;

			} else {

				s++;

			}

		}

	}

	return cnt;

}

int main() {

	int arr[] = {10, 20, 30, 40, 50, 60};
	int n = sizeof(arr) / sizeof(int);
	int t = 60;

	cout << targetSumPairs(arr, n, t) << endl;

	cout << targetSumPairsOptimised(arr, n, t) << endl;

	return 0;
}