/*

    Given k sorted arrays, merge them and print the sorted output.

    k = 3
    Input : {
                {1, 3, 5, 7}, 
                {2, 4, 6, 8}, 
                {0, 9, 10, 11}
            }

    Output: 0 1 2 3 4 5 6 7 8 9 10 11 

*/

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main() {

    vector<vector<int>> inp = {{1, 3, 5, 7}, 
                               {2, 4, 6, 8}, 
                               {0, 9, 10, 11}};

    int k = inp.size();

    vector<int> out;

    return 0;
}