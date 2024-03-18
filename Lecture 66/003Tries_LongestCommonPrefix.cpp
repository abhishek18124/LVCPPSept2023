#include<iostream>
#include<unordered_map>

using namespace std;


class node {

public :

	char ch;
	bool terminal;
	unordered_map<char, node*> childMap;
	int freq;

	node(char ch) {
		this->ch = ch;
		this->terminal = false;
		this->freq = 0;
	}

};

class trie {
	node* root;
	int n; // to track no. of words inserted in the trie

public :

	trie() {
		root = new node('#');
		n = 0;
	}

	// time : O(len(str))

	void insert(string str) {

		node* cur = root;
		for (char ch : str) {
			if (cur->childMap.find(ch) == cur->childMap.end()) {
				// cur node does not have a child node whose value is equal to ch
				node* n = new node(ch);
				cur->childMap[ch] = n;
			}
			cur = cur->childMap[ch];
			cur->freq++;
		}
		cur->terminal = true;
		n++;

	}

	string longestCommonPrefix(string str) {

		node* cur = root;
		string lcPrefix = "";

		for (char ch : str) {
			cur = cur->childMap[ch];
			if (cur->freq != n) {
				break;
			}
			lcPrefix += ch;
		}

		return lcPrefix;

	}

};


int main() {

	string words[] = {"flys", "fly"};

	trie t;
	for (string word : words) {
		t.insert(word);
	}

	cout << t.longestCommonPrefix(words[0]) << endl;

	return 0;
}