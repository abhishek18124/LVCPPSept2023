/*

Given an infinite stream of non-negative integers, design an algorithm to output the
top-K integers every time you encounter -1.

Example : Input = 4, 1, 2, -1, 3, -1 7 0 1 2 -1 8 -1 . . . ; K = 3
          Output = 1 2 4
                   2 3 4
                   3 4 7
                   4 7 8
                   . . .

*/

#include<iostream>
#include<queue>

#define mh priority_queue<int, vector<int>, greater<int>>

using namespace std;

void print(mh minHeap) { // minHeap is passed by value
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;
}

int main() {

    int k;
    cin >> k;

    mh minHeap;

    // assume first-k elements of the stream do not contain -1

    int val;

    for (int i = 1; i <= k; i++) {
        cin >> val;
        minHeap.push(val);
    }

    while (true) {
        cin >> val;
        if (val == -1) {
            // print the contents of the minHeap
            print(minHeap);
        } else {
            // check if 'val' needs to be tracked in the minHeap
            if (val > minHeap.top()) {
                minHeap.pop();
                minHeap.push(val);
            }
        }
    }

    return 0;
}