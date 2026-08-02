#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int l = 0, r = n - 1; // two pointers
    int s = 0, d = 0;     // scores
    bool turn = true;     // true = Sereja, false = Dima

    while (l <= r) {
        int pick;

        // pick maximum from ends
        if (a[l] > a[r]) {
            pick = a[l];
            l++;
        } else {
            pick = a[r];
            r--;
        }

        // assign score based on turn
        if (turn)
            s += pick;
        else
            d += pick;

        turn = !turn; // switch turn
    }

    cout << s << " " << d;

    return 0;
}