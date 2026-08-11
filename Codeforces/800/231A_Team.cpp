/* Problem Description

There are 3 friends solving problems:

Each gives input: 0 (not sure) or 1 (sure)

 For each problem:

If at least 2 friends are sure (sum ≥ 2) → they solve it

must count:

how many problems they will solve*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    for(int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        if(a + b + c >= 2) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}