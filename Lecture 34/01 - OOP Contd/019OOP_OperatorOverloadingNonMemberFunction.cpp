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

	void print() {
		cout << "name = " << name << endl;
		cout << "age = " << age << endl;
		cout << "gender = " << gender << endl;
		cout << "credits = " << credits << endl << endl;
	}

};

// void operator<<(ostream& cout, const customer& c) {
// 	cout << c.name << " " << c.age << " " << c.gender << " " << c.credits << endl;
// }


ostream& operator<<(ostream& cout, const customer& c) {
	cout << c.name << " " << c.age << " " << c.gender << " " << c.credits << endl;
	return cout;
}

int main() {

	customer c1("Ramanujan", 32, 'M', 1729);
	customer c2("Aryabhata", 74, 'M', 0);

	// cout << c1; // operator<<(cout, c1)
	// cout << c2; // operator<<(cout, c2)

	cout << c1 << c2;

	// cout << 10 << 3.14;

	return 0;

}