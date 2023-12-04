#include<iostream>

using namespace std;

int main() {

	int x = 10;
	int* xptr = &x;

	cout << "xptr = " << xptr << endl;

	xptr++;

	cout << "xptr = " << xptr << endl;

	int y = 20;
	int* yptr = &y;

	cout << "yptr = " << yptr << endl;

	yptr = yptr + 3;

	cout << "yptr = " << yptr << endl;

	int z = 30;
	int* zptr = &z;

	cout << "zptr = " << zptr << endl;

	zptr = zptr + 4;

	cout << "zptr = " << zptr << endl;


	return 0;
}