#include<iostream>

using namespace std;

void greet() {
	cout << "namaste" << endl;
}

int add(int a, int b) {
	return a + b;
}

bool ascending(int a, int b) {
	return a > b; // return true if a > b otherwise return false
}

int main() {

	// cout << (void*)&main << endl;

	// cout << (void*)&greet << endl;

	// cout << (void*)&add << endl;

	// cout << (void*)&ascending << endl;

	// cout << (void*)greet << endl;

	// cout << (void*)add << endl;

	// cout << (void*)ascending << endl;

	void (*gptr)() = &greet; // greet

	int (*aptr)(int, int) = &add; // add

	bool (*ascptr)(int, int) = &ascending; // ascending

	(*gptr)(); // gptr is dereferenced explicitly

	gptr(); // gptr is dereferenced implicitly

	greet();

	cout << (*aptr)(2, 3) << endl;

	cout << aptr(2, 3) << endl;

	cout << add(2, 3) << endl;

	cout << (*ascptr)(2, 3) << endl;

	cout << ascptr(2, 3) << endl;

	cout << ascending(2, 3) << endl;

	return 0;
}