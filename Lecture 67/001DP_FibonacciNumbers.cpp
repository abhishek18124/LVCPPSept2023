/*

given a number n, find the nth fibonacci no.

Example :
	Input : n = 7
	Output : 13

*/

#include<iostream>
#include<vector>

using namespace std;

int fibo(int n) {

	// base case

	if (n == 0 || n == 1) {
		return n;
	}

	// recursive case

	return fibo(n - 1) + fibo(n - 2);
}

int main() {

	int n = 7;

	cout << fibo(n) << endl;

	return 0;
}