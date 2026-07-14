#include <iostream>   // for input/output
#include <vector>     // for dynamic array
#include <algorithm>  // for sort
using namespace std;

int main() {
    int n;
    cin >> n;   // number of coins

    vector<int> coins(n);
    int total = 0;

    // Input coins and calculate total sum
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        total += coins[i];
    }

    // Sort in descending order (IMPORTANT)
    sort(coins.begin(), coins.end(), greater<int>());

    int mySum = 0;   // sum of your coins
    int count = 0;   // number of coins taken

    for (int i = 0; i < n; i++) {
        mySum += coins[i];   // take biggest coin
        count++;

        // MOST IMPORTANT CONDITION
        if (mySum > total - mySum) {
            break;
        }
    }

    cout << count << endl;   // output result

    return 0;
}