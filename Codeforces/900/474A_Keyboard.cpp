#include <iostream>
using namespace std;

int main() {
    char dir;
    cin >> dir;

    string s;
    cin >> s;

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    // Step 1: process each character
    for (char c : s) {

        // Step 2: find index in keyboard
        int pos = keyboard.find(c);

        // Step 3: shift based on direction
        if (dir == 'R') {
            cout << keyboard[pos - 1]; // move left
        } else {
            cout << keyboard[pos + 1]; // move right
        }
    }

    return 0;
}