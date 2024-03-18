#include<iostream>
#include<unordered_map>

using namespace std;

int main() {

	string words[] = {"code", "coder", "coding", "new", "newon"};

	trie t;
	for(string word : words) {
		t.insert(word);
	}

	// todo ...

	return 0;
}