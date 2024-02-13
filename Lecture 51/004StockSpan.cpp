#include<iostream>
#include<stack>
#include <vector>

using namespace std;

vector<int> stockSpan(int A[], int n) {

	vector<int> span;

	stack<pair<int, int>> s; // {value, index}

	for (int i = 0; i < n; i++) {

		// find the index of the nearest greater element to the left of A[i]

		while (!s.empty() and s.top().first <= A[i]) {
			s.pop();
		}

		int j;

		if (s.empty()) {
			// A[i] doesn't have any greater elements to its left
			j = -1;
		} else {
			j = s.top().second;
		}

		span.push_back(i - j);

		s.push({A[i], i}); // s.push(make_pair(A[i], i))

	}

	return span;

}

vector<int> stockSpan2(int A[], int n) {

	vector<int> span;

	stack<int> s; // indices

	for (int i = 0; i < n; i++) {

		// find the index of the nearest greater element to the left of A[i]

		while (!s.empty() and A[s.top()] <= A[i]) {
			s.pop();
		}

		int j;

		if (s.empty()) {
			// A[i] doesn't have any greater elements to its left
			j = -1;
		} else {
			j = s.top();
		}

		span.push_back(i - j);

		s.push(i);

	}

	return span;

}


int main() {

	int A[] = {100, 80, 60, 70, 60, 75, 85};
	int n = sizeof(A) / sizeof(int);

	vector<int> span = stockSpan2(A, n);

	for (int i = 0; i < span.size(); i++) {
		cout << span[i] << " ";
	}

	cout << endl;

	return 0;
}