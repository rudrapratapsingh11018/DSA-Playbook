/* Problem Description
given two strings:
s
t

Checking  if t is the reverse of s
 Example Input:code     edoc
Output: YES
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    reverse(s.begin(), s.end());

    if(s == t)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}