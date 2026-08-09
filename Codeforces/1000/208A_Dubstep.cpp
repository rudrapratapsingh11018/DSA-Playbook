/* Description

I am given a string representing a song remix.

 The word "WUB" is inserted between original words multiple times.

My task:

Remove all "WUB"
Restore original words separated by single space

Example
Input:
WUBWUBABCWUB

Output:
ABC
Input:
WUBHELLOWUBWORLDWUB

Output:
HELLO WORLD*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";

    for (int i = 0; i < s.length(); ) {
        // check for "WUB"
        if (i + 2 < s.length() && s.substr(i, 3) == "WUB") {
            // add space only if last char is not space
            if (!result.empty() && result.back() != ' ')
                result += ' ';
            i += 3;
        } else {
            result += s[i];
            i++;
        }
    }

    // remove trailing space if any
    if (!result.empty() && result.back() == ' ')
        result.pop_back();

    cout << result;
    return 0;
}