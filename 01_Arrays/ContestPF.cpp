#include <iostream>
#include <vector>
#include <map>
#include <numeric>

using namespace std;

const int MAX_PRIME = 31622;
vector<int> primes;
vector<bool> is_prime(MAX_PRIME + 1, true);

// Precompute primes up to sqrt(10^9) using Sieve of Eratosthenes
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= MAX_PRIME; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= MAX_PRIME; i += p)
                is_prime[i] = false;
        }
    }
    for (int p = 2; p <= MAX_PRIME; p++) {
        if (is_prime[p]) {
            primes.push_back(p);
        }
    }
}

// Function to find the square-free part of a number
long long get_square_free(long long n) {
    long long ans = 1;
    for (int p : primes) {
        if ((long long)p * p > n) break;
        if (n % p == 0) {
            int count = 0;
            while (n % p == 0) {
                count++;
                n /= p;
            }
            if (count % 2 != 0) {
                ans *= p;
            }
        }
    }
    if (n > 1) {
        ans *= n;
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> sf_a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sf_a[i] = get_square_free(a[i]);
    }
    
    // Track the square-free prefix product parts and count frequencies
    map<long long, long long> prefix_freq;
    long long current_P = 1;
    
    for (int j = 0; j < n; j++) {
        long long g = std::gcd(current_P, sf_a[j]);
        current_P = (current_P * sf_a[j]) / (g * g);
        prefix_freq[current_P]++;
    }
    
    // Count total valid (i, j) pairs
    long long total_capricious = 0;
    for (int i = 0; i < n; i++) {
        if (prefix_freq.count(sf_a[i])) {
            total_capricious += prefix_freq[sf_a[i]];
        }
    }
    
    cout << total_capricious << "\n";
}

int main() {
    // Fast I/O for Competitive Programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sieve();
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}