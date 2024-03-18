/*

Implementation of the TRIE data structure to store strings.

Motivation :

Given an array of N strings, and an array of Q queries,
check for each query if it is present in the array or not.

*/

#include<iostream>
#include<unordered_map>

using namespace std;

class node {

	public :

		char ch;
		bool terminal;
		unordered_map<char, node*> childMap;

		node(char ch) {
			this->ch = ch;
			this->terminal = false;
		}

};

class trie {
	node* root;

	public :

		trie() {
			root = new node('\0');
		}

		void insert(string str) {
			// todo ...
		}

		bool search(string str) {
			// todo ...
		}
};

int main() {

	string words[] = {"code", "coder", "coding", "block", "blocks", "news"};

	trie t;
	for(string word : words) {
		t.insert(word);
	}

    string queries[] = {"code", "coding", "blocked", "block", "news", "new"};

    for(string query : queries) {
    	t.search(query) ? cout << query << " is present" << endl :
    	                  cout << query << " is absent" << endl;
    }

    cout << endl;

	return 0;
}