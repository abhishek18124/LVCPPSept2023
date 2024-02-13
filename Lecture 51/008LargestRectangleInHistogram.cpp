#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> nearestSmallerLeft(int A[], int n) {

	vector<int> v;
	stack<int> s; // to be used as a monotonic stack ( track indices )

	for (int i = 0; i <= n - 1; i++) {

		// find the index of the nearest smaller element to the left of A[i]

		while (!s.empty() and A[s.top()] >= A[i]) {
			s.pop();
		}

		if (s.empty()) {
			// A[i] doesn't have any smaller elements to its left
			v.push_back(-1);
		} else {
			// A[s.top()] < A[i]
			v.push_back(s.top());
		}

		s.push(i);

	}

	return v;

}

vector<int> nearestSmallerRight(int A[], int n) {

	vector<int> v;
	stack<int> s; // to be used as a monotonic stack ( track indices )

	for (int i = n - 1; i >= 0; i--) {

		// find the index of the nearest smaller element to the right of A[i]

		while (!s.empty() and A[s.top()] >= A[i]) {
			s.pop();
		}

		if (s.empty()) {
			// A[i] doesn't have any smaller elements to its right
			v.push_back(n);
		} else {
			// A[s.top()] < A[i]
			v.push_back(s.top());
		}

		s.push(i);

	}

	reverse(v.begin(), v.end());

	return v;

}


int main() {

	// time : 3n steps ~ O(n)
	// space: O(n)

	int h[] = {2, 1, 5, 6, 2, 3};
	int n = sizeof(h) / sizeof(int);

	// 1. for each element in h[], find the index of nearest smaller element to the right
	vector<int> nsr = nearestSmallerRight(h, n);

	// 2. for each element in h[], find the index of nearest smaaller element to the left
	vector<int> nsl = nearestSmallerLeft(h, n);

	// 3. find the area of the largest rectangle in the histogram
	int maxArea = 0;
	for (int i = 0; i < n; i++) {
		// find the area of the largest rectangle whose height is h[i]
		int best_width = (nsr[i] - nsl[i]) - 1;
		int best_area = h[i] * best_width;
		maxArea = max(maxArea, best_area);
	}

	cout << maxArea << endl;

	return 0;
}