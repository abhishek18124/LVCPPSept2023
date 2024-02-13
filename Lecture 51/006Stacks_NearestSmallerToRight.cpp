#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;


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

	int A[] = {2, 5, 1, 3, 6, 4, 0};
	int n = sizeof(A) / sizeof(int);

	vector<int> v = nearestSmallerRight(A, n);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	return 0;
}