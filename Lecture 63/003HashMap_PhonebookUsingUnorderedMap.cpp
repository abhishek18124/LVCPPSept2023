/*

	Implement a phonebook storing mapping between person's name and
	their phone numbers using an unordered_map.

*/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main() {

	unordered_map<string, vector<string>> contactMap;

	// key (name of the person : string)
	// value (phone numbers corr. to the person : vector<string>)

	cout << "size = " << contactMap.size() << endl;

	contactMap["Yash"].push_back("0123");
	contactMap["Yash"].push_back("1234");
	contactMap["Yash"].push_back("9876");

	contactMap["Chirag"].push_back("5555");
	contactMap["Chirag"].push_back("4444");

	contactMap["Aryan"].push_back("3333");

	cout << "size = " << contactMap.size() << endl;

	for (pair<string, vector<string>> contactPair : contactMap) {
		string contactName = contactPair.first;
		vector<string> phoneNumbers = contactPair.second;
		cout << contactName << " : ";
		for (string num : phoneNumbers) {
			cout << num << " ";
		}
		cout << endl;
	}


	return 0;
}