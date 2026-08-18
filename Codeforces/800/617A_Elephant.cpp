/*  Problem Description

An elephant wants to reach position x starting from 0.

 It can move:1, 2, 3, 4, or 5 steps at a time

Find minimum number of moves to reach x.
Key Idea (VERY IMPORTANT)
Always take the maximum step (5)
So:
moves = ceil(x / 5)
 Example
Input:12
Output:3
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    int moves = (x + 4) / 5; // ceil(x/5)

    cout << moves;

    return 0;
}