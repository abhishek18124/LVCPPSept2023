#include<iostream>

using namespace std;

int main() {

	int a = -14;
	int b = 3;

	cout << (a % b) << endl; // output depends on the sign of numerator

	a = 17;
	b = -2;

	cout << (a % b) << endl; // output depends on the sign of the numerator

	a = -17;
	b = -5;

	cout << (a % b) << endl; // output depends on the sign of the numerator

	return 0;
}