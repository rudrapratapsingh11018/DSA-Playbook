#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<char> nums;

    // Step 1: extract numbers
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            nums.push_back(s[i]);
        }
    }

    // Step 2: sort numbers
    sort(nums.begin(), nums.end());

    // Step 3: print in required format
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i != nums.size() - 1) {
            cout << "+";
        }
    }

    return 0;
}