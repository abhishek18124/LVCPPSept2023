// contraints : m <= 99

#include<iostream>

using namespace std;

int main() {

	int arr[100];

	int m;
	cin >> m;

	for (int i = 0; i <= m; i++) {
		arr[i] = 1;
	}

	arr[0] = 0; // 0 is neither prime nor composite
	arr[1] = 0; // 1 is neither prime nor composite

	// // 1st approach

	// for (int i = 2; i <= m; i++) {

	// 	if (arr[i] == 1) {

	// 		// i is a prime number

	// 		for (int j = 2 * i; j <= m; j += i) {

	// 			arr[j] = 0;

	// 		}

	// 	}

	// }

	// // 2nd approach

	// for (int i = 2; i <= m; i++) {

	// 	if (arr[i] == 1) {

	// 		// i is a prime number

	// 		for (int j = i * i; j <= m; j += i) {

	// 			arr[j] = 0;

	// 		}

	// 	}

	// }

	// 3rd approach

	for (int i = 2; i * i <= m; i++) { // i <= sqrt(m)

		if (arr[i] == 1) {

			// i is a prime number

			for (int j = i * i; j <= m; j += i) {

				arr[j] = 0;

			}

		}

	}


	for (int i = 2; i <= m; i++) {

		if (arr[i] == 1) {

			// i is a prime number

			cout << i << " ";

		}

	}

	cout << endl;

	return 0;
}