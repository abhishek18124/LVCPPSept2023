#include<iostream>

using namespace std;

// int* f1() {
// 	int x = 10;
// 	return &x;
// }

int* f2() {
	int* xptr = new int;
	*xptr = 10;
	return xptr;
}

int main() {

	// int* xptr = f1(); // dangling pointer problem
	// cout << *xptr << endl;

	int* xptr = f2();
	cout << *xptr << endl;

	return 0;
}