// n <= 8

#include<iostream>

using namespace std;

void f(int n, char out[], int i, int openCnt, int closeCnt) {

	// base case

	if (i == 2 * n) {

		out[i] = '\0';
		cout << out << endl;
		return;

	}

	// recursive case

	// you've to take decisions for the remaining positions i to 2n-1

	// make a decision for the ith position

	// 1. use '(' for the ith position

	if (openCnt < n) {
		out[i] = '(';
		f(n, out, i + 1, openCnt + 1, closeCnt);
	}

	// 2. use ')' for the ith position

	if (closeCnt < n) {
		out[i] = ')'; // backtracking
		f(n, out, i + 1, openCnt, closeCnt + 1);
	}

}

int main() {

	int n = 3;

	char out[100];

	f(n, out, 0, 0, 0);

	return 0;
}