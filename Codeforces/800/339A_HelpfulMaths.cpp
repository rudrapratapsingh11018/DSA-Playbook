/*  Problem Description

given a mathematical expression containing only the numbers:
1, 2, 3

The numbers are separated by +.
task is to rearrange the numbers in non-decreasing order and print the resulting expression.

Example
Input: 3+2+1
Output: 1+2+3

Another example:
Input: 2+1+3+1
Output: 1+1+2+3
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<char> nums;

    for(char c : s) {
        if(c != '+') {
            nums.push_back(c);
        }
    }

    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size(); i++) {
        if(i > 0)
            cout << "+";

        cout << nums[i];
    }

    return 0;
}