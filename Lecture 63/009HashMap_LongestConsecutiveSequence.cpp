/*
	https://leetcode.com/problems/longest-consecutive-sequence/
*/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:

	// time : 2n steps ~ O(n)
	// space: O(n) due startMap

	int longestConsecutive(vector<int>& nums) {

		unordered_map<int, bool> startMap;
		int n = nums.size();

		// n steps

		for (int i = 0; i < n; i++) {

			if (startMap.find(nums[i] - 1) == startMap.end()) {

				// you've not yet seen nums[i]-1 therefore for now, nums[i] can be starting point of a consecutive sequence

				startMap[nums[i]] = true;

			} else {

				// since we've already seen nums[i]-1 therefore nums[i] cannot be the starting point for a sequence of consecutive elements

				startMap[nums[i]] = false;

			}

			if (startMap.find(nums[i] + 1) != startMap.end()) {

				// you've seen nums[i] + 1 previously therefore it can never be the starting point of a sequence of consecutive elements

				startMap[nums[i] + 1] = false;

			}

		}

		// for (pair<int, bool> p : startMap) {
		// 	cout << p.first << " " << p.second << endl;
		// }

		// cout << endl;

		// n steps

		int maxSoFar = 0;

		for (pair<int, bool> p : startMap) {

			int key = p.first;
			bool canStart = p.second;

			if (canStart == true) {

				// there exists a sequence of consecutive elements that starts with key

				int cnt = 0;

				while (startMap.find(key) != startMap.end()) {
					cnt++;
					key++;
				}

				maxSoFar = max(maxSoFar, cnt);

			}

		}

		return maxSoFar;




	}
};

int main() {

	Solution s;

	vector<int> nums = {0, 1, 4, 5, 6, 11, 12, 13, 14};

	cout << s.longestConsecutive(nums) << endl;

}
