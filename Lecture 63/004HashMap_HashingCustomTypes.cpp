#include<iostream>
#include<unordered_map>

using namespace std;

class customer {

public :

	string name;
	int age;

	customer(string name, int age) {
		this->name = name;
		this->age = age;
	}

	bool operator==(customer c) const {
		return this->name == c.name and this->age == c.age;
	}

};

class customerHash {

public:

	size_t operator()(customer c) const {

		hash<string> stringHash;
		size_t nameHashVal = stringHash(c.name);

		hash<int> integerHash;
		size_t ageHashVal = integerHash(c.age);

		return nameHashVal ^ ageHashVal;

	}

};

int main() {

	unordered_map<customer, double, customerHash> ratingMap;

	// customer c1("Yash", 19);
	// customer c2("Aryan", 18);
	// customer c3("Chirag", 20);

	// ratingMap[c1] = 4.5;
	// ratingMap[c2] = 3.7;
	// ratingMap[c3] = 2.8;

	ratingMap[customer("Yash", 19)] = 4.5;
	ratingMap[customer("Aryan", 18)] = 3.7;
	ratingMap[customer("Chirag", 20)] = 2.8;

	for (pair<customer, double> p : ratingMap) {
		customer c = p.first;
		double rating = p.second;
		cout << "customer(" << c.name << ", " << c.age << ") = " << rating << endl;
	}

	cout << endl;

	ratingMap[customer("Aryan", 18)] = 4.7;


	for (pair<customer, double> p : ratingMap) {
		customer c = p.first;
		double rating = p.second;
		cout << "customer(" << c.name << ", " << c.age << ") = " << rating << endl;
	}


	return 0;
}