
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(2 * n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i + n] = a[i]; // Repeat array to handle circular days
    }

    int current = 0;
    int maximum = 0;

    for (int i = 0; i < 2 * n; i++) {
        if (a[i] == 1) {
            current++;
            maximum = max(maximum, current);
        } else {
            current = 0;
        }

        // A rest period cannot exceed n days
        current = min(current, n);
        maximum = min(maximum, n);
    }

    cout << maximum << '\n';

    return 0;
}
