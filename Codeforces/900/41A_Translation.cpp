#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    reverse(s.begin(), s.end()); // reverse first string

    if (s == t)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}