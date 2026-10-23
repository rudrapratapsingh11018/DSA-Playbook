#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int previous, current;
    cin >> previous;

    int length = 1, maximum = 1;

    for (int i = 1; i < n; i++) {
        cin >> current;

        if (current >= previous) {
            length++;
        } else {
            length = 1;
        }

        maximum = max(maximum, length);
        previous = current;
    }

    cout << maximum << '\n';

    return 0;
}
