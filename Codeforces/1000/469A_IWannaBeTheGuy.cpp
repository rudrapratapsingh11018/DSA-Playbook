/* 
Problem: 469A – I Wanna Be the Guy
Short Description

There are n levels in a game.
Two players (Little X and Little Y) have each completed some levels.

Your task is to check:

Can they together complete all levels from 1 to n?
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // total levels

    bool visited[105] = {false};  
    // visited[i] = whether level i is passed

    int p, x;

    // Step 1: Levels passed by first player
    cin >> p;
    for(int i = 0; i < p; i++) {
        cin >> x;
        visited[x] = true;  // mark level as completed
    }

    int q;

    // Step 2: Levels passed by second player
    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> x;
        visited[x] = true;  // mark level as completed
    }

    // Step 3: Check if all levels are covered
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            cout << "Oh, my keyboard!";
            return 0;  // early exit if any level missing
        }
    }

    // Step 4: All levels covered
    cout << "I become the guy.";
}