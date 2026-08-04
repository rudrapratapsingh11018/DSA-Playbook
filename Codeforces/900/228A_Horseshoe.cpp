#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    int x;

    // insert 4 values into set
    for (int i = 0; i < 4; i++) {
        cin >> x;
        s.insert(x);
    }

    // duplicates = 4 - unique values
    cout << 4 - s.size();

    return 0;
}