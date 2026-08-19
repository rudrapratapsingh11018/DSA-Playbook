/*Problem Description

There are n participants with scores.
A participant advances if:
score ≥ k-th participant's score AND score > 0
Count how many participants qualify.

 Example

Input:
8 5
10 9 8 7 7 7 5 5
Output:6
 k-th score = 7
 Count all ≥ 7 and > 0 → 6 participants */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; // n ,k is integer 

    vector<int> a(n); // a is array with n elemnets
    for(int i = 0; i < n; i++) {
        cin >> a[i]; // input array a with element i
    }

    int cutoff = a[k-1]; // array a with element k-1
    int count = 0;//parameter count initial = 0

    for(int i = 0; i < n; i++) {
        if(a[i] >= cutoff && a[i] > 0) {
            count++;
        }
    }

    cout << count;

    return 0;
}