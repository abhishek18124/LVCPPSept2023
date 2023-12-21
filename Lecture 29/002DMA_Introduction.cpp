#include<iostream>

using namespace std;

int main() {

	int* ptr = new int;

	*ptr = 500;

	cout << *ptr << endl;

	delete ptr; // to avoid memory leak

	ptr = new int;

	*ptr = 1000;

	cout << *ptr << endl;

	delete ptr;

	return 0;
}