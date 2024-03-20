#include<iostream>
#include<vector>

using namespace std;

// recursive implementation

int helper(vector<int>& nums, int n, int i) {

    // base case

    // todo ...

    // recursive case

    // find the maximum amount of money you can rob given a sequence of n-i houses [i...n-1] w/o alerting the police

    // todo ...

}

int rob(vector<int>& nums) {

    int n = nums.size();

    return helper(nums, n, 0);

}

int main() {

    vector<int> nums = {100, 50, 400, 200, 100};

    cout << rob(nums) << endl;

    return 0;
}