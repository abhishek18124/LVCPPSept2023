#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

vector<int> nearestSmallerRight(const vector<int>& A, int n) {

   vector<int> v;
   stack<int> s; // to be used as a monotonic stack ( track indices )

   for (int i = n - 1; i >= 0; i--) {

      // find the index of the nearest smaller element to the right of A[i]

      while (!s.empty() and A[s.top()] >= A[i]) {
         s.pop();
      }

      if (s.empty()) {
         // A[i] doesn't have any smaller elements to its right
         v.push_back(n);
      } else {
         // A[s.top()] < A[i]
         v.push_back(s.top());
      }

      s.push(i);

   }

   reverse(v.begin(), v.end());

   return v;

}


int validSubarrays(vector<int>& nums) {

   int n = nums.size();
   vector<int> v = nearestSmallerRight(nums, n);

   int total = 0;

   for (int i = 0; i < v.size(); i++) {

      // find the no. of valid subarrays with nums[i] as the leftmost element

      total += v[i] - i;

   }

   return total;

}

int main() {

   vector<int> nums = {1, 4, 2, 5, 3, 9};

   cout << validSubarrays(nums) << endl;

}