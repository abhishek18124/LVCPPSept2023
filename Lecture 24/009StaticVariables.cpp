#include<iostream>

using namespace std;

void f() {

	static int x = 5; // static variables are initialised only once

	x++;

	cout << x << endl;

}

int main() {

	f();
	f();
	f();

	return 0;
}