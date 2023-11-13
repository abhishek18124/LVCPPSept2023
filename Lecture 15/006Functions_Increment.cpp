#include<iostream>

using namespace std;

void f(int a) {

	cout << "inside f() before ++ a = " << a << endl;

	a++;

	cout << "inside f() after ++ a = " << a << endl;

}

int main() {

	int a = 10;

	cout << "inside main() before f() a = " << a << endl;

	f(a);

	cout << "inside main() after f() a = " << a << endl;

	return 0;
}