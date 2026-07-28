//You are given a 5×5 matrix with exactly one 1 and rest 0s.
// You can swap adjacent rows/columns Find minimum moves to bring 1 to the center (position 3,3)


#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, pos_i, pos_j;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> x;
            if (x == 1) {
                pos_i = i;
                pos_j = j;
            }
        }
    }

    int moves = abs(pos_i - 3) + abs(pos_j - 3);
    cout << moves;

    return 0;
}