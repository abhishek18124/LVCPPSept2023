#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

// time : numOps <= 2n ~ O(n)
// space: O(n) due to the stack<int> e.g. A[] = {1, 2, 3, 4, 5, ...}

vector<int> nearestGreaterRight(int A[], int n) {

	vector<int> v;
	stack<int> s; // to be used as a monotonic stack

	for (int i = n - 1; i >= 0; i--) {

		// find the nearest greater element to the right of A[i]

		while (!s.empty() and s.top() <= A[i]) {
			s.pop();
		}

		if (s.empty()) {
			// A[i] doesn't have any greater elements to its right
			v.push_back(-1);
		} else {
			// s.top() > A[i]
			v.push_back(s.top());
		}

		s.push(A[i]);

	}

	reverse(v.begin(), v.end());

	return v;

}

int main() {

	int A[] = {5, 3, 6, 7, 2, 1, 4};
	int n = sizeof(A) / sizeof(int);

	vector<int> v = nearestGreaterRight(A, n);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	return 0;
}