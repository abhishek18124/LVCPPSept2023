#include<iostream>

using namespace std;


int main() {

	int x = 10;

	cout << x << endl;

	int& y = x;

	cout << y << endl;

	y++;

	cout << x << endl;

	cout << y << endl;

	x++;

	cout << x << endl;

	cout << y << endl;

	return 0;
}