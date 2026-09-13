/* 
Description : Each friend gives a gift to someone , we must find who gave give to each persom
Eg:
i/p :4
     2 3 4 1
o/p : 4 1 2 3
*/

// p[105] = input array , taking 105 is safe as most of cf prblm deal with 100 constraints ,I m taking safe side as 100
//  i m creating two arrays (lists of integers) 

//  eg:  p[i] = j
//       friend i gives gift to friend j
//       p[1] = 2
//       p[2] = 3
//       .
//       .
//       p[n] = n+1
//       p[n+1] = n+2
//       .
//       .
      

// similarly , res[105]  : result array ( reversed mapping) 
// res[j] = i
// freind j recieved gift fromm freind i

// Why do we need res[]?
// Because the question asks:For each friend, who gave them a gift?
// But input gives:Who they gave gift to

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // number of friends

    int p[105], res[105];

    // Step 1: Input who each friend gives gift to
    for(int i = 1; i <= n; i++) {
        cin >> p[i];  
        // p[i] = friend i gives gift to p[i]
    }

    // Step 2: Reverse mapping
    // We want: who gave gift to person i
    for(int i = 1; i <= n; i++) {
        res[p[i]] = i;  
        // If i gave gift to p[i], then p[i] received from i
    }

    // Step 3: Output result
    for(int i = 1; i <= n; i++) {
        cout << res[i] << " ";
    }
}