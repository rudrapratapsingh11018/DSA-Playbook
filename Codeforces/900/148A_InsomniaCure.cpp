/* 
Description : Dragon gets damaged every k, l, m, n-th hit. Count total damaged dragons till d.

Example  :Input : 1 2 3 4 12   Output :12
          Input: 2 3 4 5 24   Output :17
*/

#include <iostream>
using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int count = 0;

    for(int i = 1; i <= d; i++) {
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            count++;
        }
    }

    cout << count;
}