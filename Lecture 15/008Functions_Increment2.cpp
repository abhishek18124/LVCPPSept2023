#include<iostream>

using namespace std;

void f(int& x) {

	cout << "inside f() before ++ x = " << x << endl;

	x++;

	cout << "inside f() after ++ x = " << x << endl;

}

int main() {

	int a = 10;

	cout << "inside main() before f() a = " << a << endl;

	f(a);

	cout << "inside main() after f() a = " << a << endl;

	return 0;
}