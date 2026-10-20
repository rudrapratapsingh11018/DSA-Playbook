/* 
h → e: \(|5-8|=3)
e → l: \(|12-5|=7)
l → l: \(|12-12|=0)
l → o: \(|15-12|=3)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string keyboard, word;
    cin >> keyboard >> word;

    int pos[26];

    // Store each letter's position on the keyboard.
    for (int i = 0; i < 26; i++)
        pos[keyboard[i] - 'a'] = i;

    int time = 0;

    // Add movement between consecutive letters.
    for (int i = 1; i < word.size(); i++)
        time += abs(pos[word[i] - 'a'] - pos[word[i - 1] - 'a']);

    cout << time;
    return 0;
}