/* Description
There are n rooms.
Each room has:
p = number of people currently
q = room capacity
A room can accept at least 2 more people if:
q - p ≥ 2
 Counting how many rooms satisfy this.
Example
Input:
3
1 3
2 5
3 6
Checking :Room 1 → 3-1 = 2 
Room 2 → 5-2 = 3 
Room 3 → 6-3 = 3 
Output:3*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    while(n--) {
        int p, q;
        cin >> p >> q;

        if(q - p >= 2) {
            count++;
        }
    }

    cout << count;

    return 0;
}