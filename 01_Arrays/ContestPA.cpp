#include <iostream>

using namespace std;

void solve() {
    long long x0, y0, r;
    cin >> x0 >> y0 >> r;
    
    // Moving exactly R units up gives a valid integer coordinate
    long long ans_x = x0;
    long long ans_y = y0 + r;
    
    cout << ans_x << " " << ans_y << "\n";
}

int main() {
    // Fast I/O optimized for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}