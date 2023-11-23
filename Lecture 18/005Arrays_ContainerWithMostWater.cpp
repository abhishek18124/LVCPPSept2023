#include<iostream>
#include<algorithm>

using namespace std;

// time : O(n^2)

int maxArea(int height[], int n) {

	int maxSoFar = 0; // INT_MIN

	for (int i = 0; i <= n - 2; i++) {
		for (int j = i + 1; j <= n - 1; j++) {

			// compute the area of the container formed using the ith and jth line

			int width_ij = j - i;
			int height_ij = min(height[i], height[j]);
			int area_ij = width_ij * height_ij;

			maxSoFar = max(maxSoFar, area_ij);

		}
	}

	return maxSoFar;

}

// time : O(n)
// space : O(1);

int maxAreaOptimised(int height[], int n) {

	int maxSoFar = 0; // INT_MIN

	int i = 0;
	int j = n - 1;

	while (i < j) {

		// compute the area of the container formed using the ith and jth line

		int width_ij = j - i;
		int height_ij = min(height[i], height[j]);
		int area_ij = width_ij * height_ij;

		maxSoFar = max(maxSoFar, area_ij);

		if (height[i] < height[j]) {
			i++;
		} else {
			j--;
		}

	}

	return maxSoFar;

}

int main() {

	int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
	int n = sizeof(height) / sizeof(int);

	cout << maxArea(height, n) << endl;
	cout << maxAreaOptimised(height, n) << endl;

	return 0;
}