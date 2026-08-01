#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // number of phrases

    for (int i = 1; i <= n; i++) {

        // alternate between "I hate" and "I love"
        if (i % 2 == 1)
            cout << "I hate";
        else
            cout << "I love";

        // connect phrases or end sentence
        if (i == n)
            cout << " it";     // last part ends with "it"
        else
            cout << " that ";  // connect with "that"
    }

    return 0;
}