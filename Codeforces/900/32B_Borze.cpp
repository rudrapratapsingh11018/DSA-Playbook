#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Step 1: traverse string
    for (int i = 0; i < s.length(); i++) {

        if (s[i] == '.') {
            // Case "." → 0
            cout << 0;
        } 
        else {
            // Case "-" → check next character
            if (s[i + 1] == '.') {
                cout << 1;  // "-."
            } else {
                cout << 2;  // "--"
            }
            i++; // skip next character (already used)
        }
    }

    return 0;
}