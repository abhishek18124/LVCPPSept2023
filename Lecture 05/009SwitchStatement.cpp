#include<iostream>

using namespace std;

int main() {

	int marks;
	cout << "enter your marks (0-100) : ";
	cin >> marks;

	char grade;

	if (marks >= 91 and marks <= 100) {
		// cout << "Grade A" << endl;
		grade = 'A';
	} else if (marks >= 81 and marks <= 90) {
		// cout << "Grade B" << endl;
		grade = 'B';
	} else if (marks >= 71 and marks <= 80) {
		// cout << "Grade C" << endl;
		grade = 'C';
	} else if (marks >= 61 and marks <= 70) {
		// cout << "Grade D" << endl;
		grade = 'D';
	} else if (marks >= 51 and marks <= 60) {
		// cout << "Grade E" << endl;
		grade = 'E';
	} else {
		// cout << "Grade F" << endl;
		grade = 'F';
	}


	// if (grade == 'A') {
	// 	cout << "excellent" << endl;
	// } else if (grade == 'B') {
	// 	cout << "very good" << endl;
	// } else if (grade == 'C') {
	// 	cout << "good" << endl;
	// } else if (grade == 'D') {
	// 	cout << "average" << endl;
	// } else if (grade == 'E') {
	// 	cout << "poor" << endl;
	// } else {
	// 	cout << "very poor" << endl;
	// }

	switch (grade) {

	case 'A' : cout << "excellent" << endl; break;
	case 'B' : cout << "very good" << endl; break;
	case 'C' : cout << "good" << endl; break;
	case 'D' : cout << "average" << endl; break;
	case 'E' : cout << "poor" << endl; break;
	case 'F' : cout << "very poor" << endl; break;
		// default : cout << "very poor" << endl; break;

	}


	return 0;
}