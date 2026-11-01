
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int total = 0;
        int ones = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];

            if (a[i] == 1)
                ones++;
        }

        if (ones == n) {
            cout << -1 << '\n';
        } else {
            cout << total - (n - 1) << '\n';
        }
    }

    return 0;
}
