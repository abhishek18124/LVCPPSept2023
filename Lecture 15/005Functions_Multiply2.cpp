#include<iostream>

using namespace std;

int multiply(int a, int b) {
	return a * b;
}

int main() {

	int a = 4;
	int b = 5;

	cout << multiply(a, b) << endl;

	int c = 3;
	int d = 7;

	cout << multiply(c, d) << endl;

	return 0;
}