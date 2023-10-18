#include<iostream>
#include<climits>

using namespace std;

int main() {

	int marks;
	cout << "enter your marks : ";
	cin >> marks;

	if (marks > 40) cout << "pass" << endl; else cout << "fail" << endl;

	marks > 40 ? cout << "pass" << endl : cout << "fail" << endl ;

	return 0;
}