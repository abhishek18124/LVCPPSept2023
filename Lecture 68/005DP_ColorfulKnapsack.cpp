#include <iostream>
#include<climits>
#include <unordered_map>
#include <map>

using namespace std;

unordered_map<int, vector<int>> cmap; // to store a mapping b/w a color and object weights of that color

int helper(int w[], int c[], int n, int m, int x, int i) {

    // base case

    // todo ...

    // recursive case

    // make a decision for the ith color

}

int colorfulKnapsack(int w[], int c[], int n, int m, int x) {

    // todo ...

}

int main() {

    int w[] = {2, 3, 4, 2, 4, 5, 2, 3};
    int c[] = {1, 1, 1, 2, 2, 2, 3, 3};

    int n = 8;
    int m = 3;

    int x = 13;

    cout << colorfulKnapsack(w, c, n, m, x) << endl;

    return 0;

}