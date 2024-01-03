#include<iostream>

using namespace std;

class customer {

public :

	string name;
	int age;
	char gender;
	double credits;

};

// void print(customer c) {
// 	cout << "name = " << c.name << endl;
// 	cout << "age = " << c.age << endl;
// 	cout << "gender = " << c.gender << endl;
// 	cout << "credits = " << c.credits << endl << endl;
// }

// void print(customer& c) {
// 	cout << "name = " << c.name << endl;
// 	cout << "age = " << c.age << endl;
// 	cout << "gender = " << c.gender << endl;
// 	cout << "credits = " << c.credits << endl << endl;
// }

void print(const customer& c) {
	cout << "name = " << c.name << endl;
	cout << "age = " << c.age << endl;
	cout << "gender = " << c.gender << endl;
	cout << "credits = " << c.credits << endl << endl;
}

int main() {

	customer c1;

	c1.name = "Ramanujan";
	c1.age = 32;
	c1.gender = 'M';
	c1.credits = 1729;

	print(c1);

	customer c2;

	c2.name = "Aryabhata";
	c2.age = 74;
	c2.gender = 'M';
	c2.credits = 0;

	print(c2);

	return 0;
}