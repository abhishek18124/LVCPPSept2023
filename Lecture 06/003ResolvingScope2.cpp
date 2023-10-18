#include<iostream>

using namespace std;

int x = 100;

int main() {

	cout << x << endl;

	int x = 10;

	cout << x << endl;

	{

		int x = 20;
		int y = 30;

		cout << x << " " << y << endl;

		{

			int z = 40;

			cout << x << " " << y << " " << z << endl;

		}

	}

	cout << x << endl;
	// cout << y << endl; // error

	return 0;
}