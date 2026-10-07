#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// Returns the sign of x
long long sgn(long long x) {
    if (x > 0) return 1;
    if (x < 0) return -1;
    return 0;
}

// O(1) mathematical calculation to find minimum operations required
long long get_min_ops(long long a, long long b, long long c, long long target) {
    long long current_sum = a + b + c;
    if (current_sum >= target) return 0;
    
    long long needed = target - current_sum;
    long long ops = 0;
    
    // Simulate up to 5 steps to reach state stabilization
    for (int step = 0; step < 5; step++) {
        if (a + b + c >= target) return ops;
        
        long long d1 = sgn(a - b);
        long long d2 = sgn(a - c);
        long long d3 = sgn(b - c);
        
        long long choice1 = d1;
        long long choice2 = d2;
        long long choice3 = d3;
        
        long long max_gain = max({choice1, choice2, choice3});
        if (max_gain <= 0) return 2e18; // Sum cannot be increased further
        
        if (max_gain == choice1) {
            a += d1;
        } else if (max_gain == choice2) {
            b += d2;
        } else {
            a += d3;
        }
        ops++;
    }
    
    // If target still not reached, look at the stabilized rate of increase
    if (a + b + c < target) {
        long long d1 = sgn(a - b);
        long long d2 = sgn(a - c);
        long long d3 = sgn(b - c);
        long long max_gain = max({d1, d2, d3});
        
        if (max_gain <= 0) return 2e18;
        
        long long remaining_needed = target - (a + b + c);
        long long extra_ops = (remaining_needed + max_gain - 1) / max_gain;
        
        // Check for potential overflow before adding
        if (extra_ops > 2e18 - ops) return 2e18;
        ops += extra_ops;
    }
    
    return ops;
}

void solve() {
    long long n, k;
    cin >> n >> k;
    
    vector<long long> a(n), b(n), c(n);
    long long min_initial_sum = 4e18;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];
        min_initial_sum = min(min_initial_sum, a[i] + b[i] + c[i]);
    }
    
    // Binary search boundaries
    long long low = min_initial_sum;
    long long high = 4e18; 
    long long ans = low;
    
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long total_ops = 0;
        bool possible = true;
        
        for (int i = 0; i < n; i++) {
            long long ops_needed = get_min_ops(a[i], b[i], c[i], mid);
            if (ops_needed > k || total_ops > k - ops_needed) {
                possible = false;
                break;
            }
            total_ops += ops_needed;
        }
        
        if (possible && total_ops <= k) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    cout << ans << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}