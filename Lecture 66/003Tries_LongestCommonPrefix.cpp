#include<iostream>
#include<unordered_map>

using namespace std;

int main() {

	string words[] = {"flow", "floor", "fly"};

	trie t;
	for(string word : words) {
		t.insert(word);
	}

	return 0;
}