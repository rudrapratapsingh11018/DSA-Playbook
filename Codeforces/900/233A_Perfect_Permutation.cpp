/* 
Problem: Perfect Permutation
 Description
Given an integer n, create a permutation of numbers 1 to n such that no number stays in its original position (p[i] ≠ i).
If not possible, print -1.
Example
Input:4
Output :2 1 4 3
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n % 2 != 0) {
        cout << -1;
        return 0;
    }

    for (int i = 1; i <= n; i += 2) {
        cout << i + 1 << " " << i << " ";
    }

    return 0;
}