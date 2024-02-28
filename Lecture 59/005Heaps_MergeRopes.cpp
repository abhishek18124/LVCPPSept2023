/*

    There are given n ropes of different lengths, we need to connect these ropes into one rope.
    The cost to connect two ropes is equal to the sum of their lengths. We need to connect the
    ropes with minimum cost.

    Example :

    Input : {4, 3, 2, 6}
    Output: 29

*/

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {

    vector<int> ropeLengths = {4, 3, 2, 6};

    priority_queue<int, vector<int>, greater<int>> minHeap(ropeLengths.begin(), ropeLengths.end());

    // for(int i=0; i<ropeLengths.size(); i++) {
    //     minHeap.push(ropeLengths[i]);
    // }

    // time : O(nlogn)

    int total = 0; // to track the total minimum cost to perform n-1 merge ops

    while (minHeap.size() > 1) {

        int firstMin = minHeap.top();
        minHeap.pop();

        int secondMin = minHeap.top();
        minHeap.pop();

        total += (firstMin + secondMin);
        minHeap.push(firstMin + secondMin);

    }

    cout << total << endl;

    return 0;
}