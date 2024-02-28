/*

	STL implementation of the min_heap data structure with custom comparator.


*/

#include<iostream>
#include<queue>

using namespace std;

class customer {
public:
	string name;
	int age;
	double credits;

	customer(string name, int age, double credits) {
		this->name = name;
		this->age = age;
		this->credits = credits;
	}
};

// class ageComparator {
// public:

// 	// return true if you want 'a' to be ordered before 'b'

// 	bool operator()(customer a, customer b) {

// 		if (a.age < b.age) {

// 			return true;

// 		}

// 		return false;

// 	}
// };

class ageComparator {
public:

	// return false if you want 'a' to be given higher priority than 'b'

	bool operator()(customer a, customer b) {

		if (a.age < b.age) {

			return false;

		}

		return true;

	}
};

class creditComparator {

public:

	// return false if you want a to be given higher priority than b

	bool operator()(customer a, customer b) {

		if (a.credits > b.credits) {

			return false;

		}

		return true;

	}

};

int main() {

	// priority_queue<customer, vector<customer>, ageComparator> m;
	priority_queue<customer, vector<customer>, creditComparator> m;

	m.push(customer("yash", 20, 1000));
	m.push(customer("labani", 18, 200));
	m.push(customer("chirag", 19, 4000));
	m.push(customer("himanshu", 17, 2400));
	m.push(customer("jatish", 21, 100));

	cout << m.size() << endl;

	while (!m.empty()) {
		customer c = m.top();
		m.pop();
		cout << c.name << " " << c.age << " " << c.credits << endl;
	}

	cout << endl;

	cout << m.size() << endl;

	return 0;
}