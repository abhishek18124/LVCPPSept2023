// n <= 10

#include<iostream>

using namespace std;

void f(int n, char out[], int i) {

	// base case

	if (i == n) {

		out[i] = '\0';
		cout << out << endl;
		return;

	}

	// recursive case

	// take a sequence of n-i decisions for coins from 0 to n-1

	// take a decision for the ith coin

	// 1. ith coin shows head

	out[i] = 'H';
	f(n, out, i + 1);

	// 2. ith coin shows tail

	out[i] = 'T'; // backtracing
	f(n, out, i + 1);

}

int main() {

	int n = 4;

	char out[10];

	f(n, out, 0);

	return 0;
}