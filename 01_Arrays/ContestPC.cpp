#include <iostream>
#include <vector>
#include <map>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int num_triads = n - 4;
    if (num_triads <= 1) {
        cout << 0 << "\n";
        return;
    }
    
    vector<long long> v(num_triads);
    map<long long, long long> freq;
    
    // Calculate triad values and count frequencies
    for (int i = 0; i < num_triads; i++) {
        v[i] = a[i] + a[i + 2] - a[i + 4];
        freq[v[i]]++;
    }
    
    // Count total pairs with equal values
    long long ans = 0;
    for (auto const& [val, count] : freq) {
        ans += (count * (count - 1)) / 2;
    }
    
    // Subtract invalid intersecting pairs (where y = x + 2 or y = x + 4)
    for (int i = 0; i < num_triads; i++) {
        if (i + 2 < num_triads && v[i] == v[i + 2]) {
            ans--;
        }
        if (i + 4 < num_triads && v[i] == v[i + 4]) {
            ans--;
        }
    }
    
    cout << ans << "\n";
}

int main() {
    // Fast I/O for performance optimization
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}