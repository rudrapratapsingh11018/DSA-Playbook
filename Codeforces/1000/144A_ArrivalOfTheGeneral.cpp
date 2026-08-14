#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int max_val = *max_element(a.begin(), a.end());
    int min_val = *min_element(a.begin(), a.end());

    int max_index, min_index;

    // leftmost max
    for(int i = 0; i < n; i++) {
        if(a[i] == max_val) {
            max_index = i;
            break;
        }
    }

    // rightmost min
    for(int i = n-1; i >= 0; i--) {
        if(a[i] == min_val) {
            min_index = i;
            break;
        }
    }

    int swaps = max_index + (n - 1 - min_index);

    if(max_index > min_index) swaps--;

    cout << swaps;

    return 0;
}