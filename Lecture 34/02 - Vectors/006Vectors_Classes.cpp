#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class customer {

public:

	string name;
	int age;
	char gender;
	double credits;

	customer(string name, int age, char gender, double credits) {
		this->name = name;
		this->age = age;
		this->gender = gender;
		this->credits = credits;
	}
};

// return true if you want 'a' to be ordered before 'b' in the sorted sequence

bool age_comparator(customer a, customer b) {

	// do sorting in the increasing order based on age

	if (a.age < b.age) {
		return true;
	}

	return false;

}

// return true if you want 'a' to be ordered before 'b' in the sorted sequence

bool credits_comparator(customer a, customer b) {

	// do sorting in the decreasing order based on credits

	if (a.credits > b.credits) {
		return true;
	}

	return false;

}

class ageComparator {

public:

	bool operator()(customer a, customer b) {
		if (a.age < b.age) {
			return true;
		}

		return false;
	}

};

class creidtComparator {

public:

	bool operator()(customer a, customer b) {
		if (a.credits > b.credits) {
			return true;
		}

		return false;
	}

};

int main() {

	vector<customer> v;

	v.push_back(customer("Ramanujan", 32, 'M', 1729));
	v.push_back(customer("JC Bose", 78, 'M', 2500));
	v.push_back(customer("Aryabhata", 74, 'M', 0));
	v.push_back(customer("Vikram", 52, 'M', 1500));
	v.push_back(customer("Homi", 56, 'M', 1000));

	// sort(v.begin(), v.end(), age_comparator); // age_comparator is a function pointer
	sort(v.begin(), v.end(), ageComparator()); // ageComparator() is anonymous function object of hte ageComparator class

	for (customer c : v) {
		cout << c.name << " " << c.age << " " << c.gender << " " << c.credits << endl;
	}

	cout << endl;

	// sort(v.begin(), v.end(), credits_comparator); // credits_comparator is a function pointer
	sort(v.begin(), v.end(), creidtComparator()); // creditComparator() is a anonymous function object of creditComparator class

	for (customer c : v) {
		cout << c.name << " " << c.age << " " << c.gender << " " << c.credits << endl;
	}

	cout << endl;

	return 0;
}