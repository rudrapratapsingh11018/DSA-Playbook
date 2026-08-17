/*   Description

You have a queue of students:

B → Boy
G → Girl

Rule:

if "BG" → becomes "GB"

This happens simultaneously for t seconds.

 Output final queue.

 Example

Input:

5 1
BGGBG

Output:

GBGGB
 Approach (IMPORTANT)
Repeat for t times:
Traverse string
If s[i] == 'B' && s[i+1] == 'G'
swap
skip next index (i++)*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    while(t--) {
        for(int i = 0; i < n - 1; i++) {
            if(s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i++; // skip next
            }
        }
    }

    cout << s;

    return 0;
}