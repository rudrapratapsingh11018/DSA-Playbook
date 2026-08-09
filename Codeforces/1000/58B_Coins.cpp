/*  Description

You are given an integer n.

 You need to repeatedly:

Print n
Replace n with its largest proper divisor (excluding itself)

 Continue until n = 1

Example =>
Input:
12

Output:
12 6 3 1 
*/

#include <bits/stdc++.h>
using namespace std;

// function to find largest proper divisor
int largest_divisor(int n) {
    for (int i = n / 2; i >= 1; i--) {
        if (n % i == 0)
            return i;
    }
    return 1;
}

int main() {
    int n;
    cin >> n;

    while (n > 1) {
        cout << n << " ";
        n = largest_divisor(n);
    }

    cout << 1;

    return 0;
}


