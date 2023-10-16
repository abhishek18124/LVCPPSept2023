#include<iostream>

using namespace std;

int main() {

	int a = 10;
	int b = 5;

	cout << "a+b = " << a + b << endl;
	cout << "a-b = " << a - b << endl;
	cout << "a*b = " << a*b << endl;
	cout << "a/b = " << a / b << endl;
	cout << "a%b = " << a % b << endl;

	int c = 10;
	int d = 3;

	cout << "c/d = " << (c * 1.0) / d << endl;
	cout << "c/d = " << c / (d * 1.0) << endl;
	cout << "c/d = " << (float)c / d << endl;
	cout << "c/d = " << c / (float)d << endl;
	cout << "c/d = " << float(c) / d << endl;
	cout << "c/d = " << c / float(d) << endl;
	cout << "c/d = " << float(c / d) << endl;

	cout << -c << endl;

	cout << "3+5*4 = " << 3 + 5 * 4 << endl;
	cout << "8-4/2 = " << 8 - 4 / 2 << endl;
	cout << "(3+5)*4 = " << (3 + 5) * 4 << endl;
	cout << "(8-4)/2 = " << (8 - 4) / 2 << endl;
	cout << "100/10*10 = " << 100 / 10 * 10 << endl;
	cout << "5-2+3 = " << 5 - 2 + 3 << endl;

	return 0;
}