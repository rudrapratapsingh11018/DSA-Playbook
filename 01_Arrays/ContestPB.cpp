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
    int current_doc = 1;
    
    for (char cmd : s) {
        if (cmd == '1') {
            memory.push(current_doc);
            current_doc++;
        } else if (cmd == '2') {
            if (!memory.empty()) {
                int top_doc = memory.top();
                memory.pop();
                printed[top_doc] = true;
            }
        } else if (cmd == '3') {
            printed[current_doc] = true;
            current_doc++;
        }
    }
    
    // Collect all documents that were not printed
    vector<int> not_printed;
    for (int i = 1; i <= n; i++) {
        if (!printed[i]) {
            not_printed.push_back(i);
        }
    }
    
    // Output the results
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