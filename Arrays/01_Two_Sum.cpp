// Problem: Two Sum
// Link: https://leetcode.com/problems/two-sum/
// Approach: Hash Map
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;

    for(int i = 0; i < nums.size(); i++) {
        int diff = target - nums[i];

        if(mp.find(diff) != mp.end()) {
            return {mp[diff], i};
        }

        mp[nums[i]] = i;
    }

    return {};
}