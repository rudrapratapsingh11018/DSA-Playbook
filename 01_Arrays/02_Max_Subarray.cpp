// Problem: Maximum Subarray
// Link: https://leetcode.com/problems/maximum-subarray/
// Approach: Kadane’s Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)

// Key Learning:
// At each step, decide whether to extend the current subarray
// or start a new subarray from current element.

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int currentSum = nums[0];
    int maxSum = nums[0];

    for(int i = 1; i < nums.size(); i++) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << "Maximum Subarray Sum: " << maxSubArray(nums);
    return 0;
}
