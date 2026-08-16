#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> before(n), after(n);

    bool changed = false;

    for (int i = 0; i < n; i++) {
        cin >> before[i] >> after[i];

        if (before[i] != after[i]) {
            changed = true;
        }
    }

    if (changed) {
        cout << "rated";
        return 0;
    }

    for (int i = 1; i < n; i++) {
        if (after[i] > after[i - 1]) {
            cout << "unrated";
            return 0;
        }
    }

    cout << "maybe";

    return 0;
}