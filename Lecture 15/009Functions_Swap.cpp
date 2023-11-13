#include<iostream>

using namespace std;

// void mySwap(int a, int b) {

// 	int temp = a;
// 	a = b;
// 	b = temp;

// 	cout << a << " " << b << endl;


// }

void mySwap(int& a, int& b) {

	int temp = a;
	a = b;
	b = temp;

	// cout << a << " " << b << endl;

}

int main() {

	int a = 10;
	int b = 20;

	mySwap(a, b);

	cout << a << " " << b << endl;

	return 0;
}