#include<iostream>
#include<stack>
#include<vector>

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

int main() {

	int A[] = {0, 3, 5, 4, 1, 6, 2};
	int n = sizeof(A) / sizeof(int);

	vector<int> v = nearestSmallerLeft(A, n);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;


	return 0;
}