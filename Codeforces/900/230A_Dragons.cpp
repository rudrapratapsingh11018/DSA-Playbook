/*Description

Kirito has an initial strength s and wants to defeat n dragons.

Each dragon has:

x → strength required to defeat it
y → bonus strength gained after defeating it

Rules:

If s > x, Kirito defeats the dragon and gains y strength.
Otherwise, he loses.

Determine whether Kirito can defeat all dragons.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> dragons(n);

    for (int i = 0; i < n; i++) {
        cin >> dragons[i].first >> dragons[i].second;
    }

    // Fight weaker dragons first
    sort(dragons.begin(), dragons.end());

    for (int i = 0; i < n; i++) {
        if (s > dragons[i].first) {
            s += dragons[i].second;
        } else {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}