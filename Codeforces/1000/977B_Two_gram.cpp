#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> freq;

    for (int i = 0; i < n - 1; i++) {
        string sub = s.substr(i, 2);
        freq[sub]++;
    }

    string ans;
    int maxi = 0;

    for (auto it : freq) {
        if (it.second > maxi) {
            maxi = it.second;
            ans = it.first;
        }
    }

    cout << ans << endl;

    return 0;
}