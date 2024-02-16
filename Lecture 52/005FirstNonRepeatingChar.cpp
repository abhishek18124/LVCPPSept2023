#include<iostream>
#include<queue>
#include<cstring> // for memset

using namespace std;

int main() {

	char ch;

	queue<char> q;

	int freqMap[26];
	memset(freqMap, 0, sizeof(freqMap));

	while (true) {

		cin >> ch;

		freqMap[ch - 'a']++;
		if (freqMap[ch - 'a'] == 1) {
			// ch is non-repeating, track it in the queue
			q.push(ch);
		}

		// find the 1st non-repeating char. in the stream after reading ch

		while (!q.empty() and freqMap[q.front() - 'a'] > 1) {
			// char. at the front of the queue are no longer non-repeating
			q.pop();
		}

		if (q.empty()) {
			// after reading ch, there are no non-repeating char. in the stream
			cout << -1 << " ";
		} else {
			cout << q.front() << " ";
		}

	}

	return 0;
}