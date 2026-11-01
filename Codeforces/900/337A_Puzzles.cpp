
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> puzzles(m);

    for (int i = 0; i < m; i++) {
        cin >> puzzles[i];
    }

    sort(puzzles.begin(), puzzles.end());

    int minimum = INT_MAX;

    // Check every group of n consecutive sorted boxes
    for (int i = 0; i + n <= m; i++) {
        int difference = puzzles[i + n - 1] - puzzles[i];
        minimum = min(minimum, difference);
    }

    cout << minimum << '\n';

    return 0;
}
