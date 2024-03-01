
#include<iostream>
#include<queue>

using namespace std;

string reorganise(string str) {

    int freq[26] = {0};

    for (char ch : str) {
        freq[ch - 'a']++;
    }

    priority_queue<pair<int, char>> maxHeap;

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            maxHeap.push({freq[i], i + 'a'});
        }
    }

    // while (!maxHeap.empty()) {
    //     pair<int, char> p = maxHeap.top();
    //     maxHeap.pop();
    //     cout << p.first << " " << p.second << endl;
    // }

    string out = "";

    while (!maxHeap.empty()) {

        if (maxHeap.size() == 1) {

            pair<int, char> maxPair = maxHeap.top();
            maxHeap.pop();

            if (maxPair.first == 1) {
                out += maxPair.second;
            } else {
                out = "";
            }

        } else {

            pair<int, char> firstMaxPair = maxHeap.top();
            maxHeap.pop();

            pair<int, char> secondMaxPair = maxHeap.top();
            maxHeap.pop();

            out += firstMaxPair.second;
            firstMaxPair.first--;

            out += secondMaxPair.second;
            secondMaxPair.first--;

            if (firstMaxPair.first > 0) {
                maxHeap.push(firstMaxPair);
            }

            if (secondMaxPair.first > 0) {
                maxHeap.push(secondMaxPair);
            }

        }

    }

    return out;

}

int main() {

    string str = "aaaabbc";

    cout << reorganise(str) << endl;

    return 0;
}