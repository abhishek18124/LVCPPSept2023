#include<iostream>

using namespace std;

int main() {

	int p;
	cout << "Enter the value of principle : ";
	cin >> p;

	int r;
	cout << "Enter the value of rate :" ;
	cin >> r;

	int t;
	cout << "Enter the value of time : ";
	cin >> t;

	cout << "simple interest = " << p*r*t / 100 << endl;
	cout << "simple interest = " << (p * r * t) / 100 << endl;

	cout << "simple interest = " << (p * r * t * 1.0) / 100 << endl;
	cout << "simple interest = " << (p * r * t) / 100.0 << endl;
	cout << "simple interest = " << ((float)p * r * t) / 100 << endl;
	cout << "simple interest = " << (p * r * t) / (float)100 << endl;
	cout << "simple interest = " << (float)(p * r * t) / 100 << endl;

	float si = (p * r * t) / 100.0;
	cout << "simple interest = " << si << endl;

	// int x = 3.14;  // implicit type-casting
	// cout << x << endl;

	return 0;
}