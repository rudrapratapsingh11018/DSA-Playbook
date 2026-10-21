
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long total = 0;
    int current = 1;

    for (int i = 0; i < m; i++) {
        int target;
        cin >> target;

        if (target >= current)
            total += target - current;
        else
            total += n - current + target; // Go through house n and wrap to 1

        current = target; // Update Xenia's position
    }

    cout << total << '\n';
    return 0;
}
