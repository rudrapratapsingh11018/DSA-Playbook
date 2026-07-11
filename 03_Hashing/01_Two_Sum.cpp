// Problem: Two Sum (Hashing)
// Approach: Hash Map
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp; // value -> index

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        // check if complement exists
        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i};
        }

        // store current element
        mp[nums[i]] = i;
    }

    return {}; // no solution
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    cout << result[0] << " " << result[1];

    return 0;
}