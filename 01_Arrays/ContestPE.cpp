#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    vector<bool> printed(n + 1, false);
    stack<int> memory;
    
    for (int i = 0; i < n; i++) {
        char cmd = s[i];
        int doc_id = i + 1; // Document index matches the 1-based step index
        
        if (cmd == '1') {
            memory.push(doc_id);
        } else if (cmd == '2') {
            if (!memory.empty()) {
                int top_doc = memory.top();
                memory.pop();
                printed[top_doc] = true;
            }
            // Note: doc_id is NOT printed and NOT placed in memory. It is lost.
        } else if (cmd == '3') {
            printed[doc_id] = true;
        }
    }
    
    // Collect all documents that were never printed
    vector<int> not_printed;
    for (int i = 1; i <= n; i++) {
        if (!printed[i]) {
            not_printed.push_back(i);
        }
    }
    
    // Output matches exactly what Codeforces expects
    cout << not_printed.size() << "\n";
    for (size_t i = 0; i < not_printed.size(); i++) {
        cout << not_printed[i] << (i + 1 == not_printed.size() ? "" : " ");
    }
    cout << "\n";
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