/*You are given n statements, each representing an operation on a variable X, initially equal to 0.

Each statement is one of the following:

X++ or ++X → increases X by 1
X-- or --X → decreases X by 1
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0;
    string s;

    while (n--) {
        cin >> s;

        if (s[1] == '+') {
            x++;
        } else {
            x--;
        }
    }

    cout << x;

    return 0;
}