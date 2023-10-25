#include<iostream>
#include<climits>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	int ans = 0; // to store the unique number
	int num;

	for (int i = 1; i <= n; i++) {
		cin >> num;
		ans = ans ^ num;
	}

	cout << ans << endl;

	return 0;
}