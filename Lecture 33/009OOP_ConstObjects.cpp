#include<iostream>

using namespace std;

class customer {

public :

	string name;
	int age;
	char gender;
	double credits;

	customer(string n, int a, char g, double c) {
		cout << "\ninside the parameterised constructor of the \'customer\' class\n" << endl;
		name = n;
		age = a;
		gender = g;
		credits = c;
	}

	string getName() const {
		return name;
	}

	void setName(string n) {
		name = n;
	}

	int getAge() const {
		return age;
	}

	void setAge(int a) {
		age = a;
	}

	char getGender() const {
		return gender;
	}

	void setGender(char g) {
		gender = g;
	}

	double getCredits() const {
		return credits;
	}

	void setCredits(double c) {
		credits = c;
	}

	void print() const {
		cout << "name = " << name << endl;
		cout << "age = " << age << endl;
		cout << "gender = " << gender << endl;
		cout << "credits = " << credits << endl << endl;
	}
};



int main() {

	const customer c("Ramanujan", 32, 'M', 1729);

	// cout << "name = " << c.name << endl;
	// cout << "age = " << c.age << endl;
	// cout << "gender = " << c.gender << endl;
	// cout << "credits = " << c.credits << endl << endl;

	c.print();

	customer c2("Aryabhata", 74, 'M', 0);

	c2.print(); // const member functions can be called on non-const objects as well

	return 0;
}