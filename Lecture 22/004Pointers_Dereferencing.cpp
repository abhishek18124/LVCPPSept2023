#include<iostream>

using namespace std;

int main() {

	int x = 10;
	int *xptr = &x;

	cout << "x = " << x << endl;
	cout << "sizeof(x) = " << sizeof(x) << endl;
	cout << "xptr = " << xptr << endl;
	cout << "sizeof(xptr) = " << sizeof(xptr) << endl;
	cout << "*xptr = " << *xptr << endl;

	int y = 20;
	int* yptr = &y;

	cout << x + y << endl;
	cout << (*xptr) + (*yptr) << endl;

	int z = 255;
	char* zptr = (char*)&z;
	cout << (int)*zptr << endl;

	return 0;
}