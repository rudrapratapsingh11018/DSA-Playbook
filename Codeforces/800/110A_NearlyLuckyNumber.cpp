/* Description

A number is called lucky if it contains only:

4 and 7

given a number n (as string).

Count how many digits are 4 or 7

checking :

If this count itself is lucky (only 4 or 7) → print "YES"
Else → "NO"
 Example

Input:

40047

Count of lucky digits = 4
 4 is lucky → output:

YES
 Approach
Converting  number to string
Count digits:
if digit == '4' or '7'
Checking if count consists of only 4 and 7 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    int count = 0;

    for(char c : n) {
        if(c == '4' || c == '7') {
            count++;
        }
    }

    string s = to_string(count);

    bool lucky = true;

    for(char c : s) {
        if(c != '4' && c != '7') {
            lucky = false;
            break;
        }
    }

    if(lucky && count > 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}