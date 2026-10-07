#include <iostream>
#include <set>
using namespace std;

int main() {
    int a, b, c, d;

    // Step 1: input 4 colors
    cin >> a >> b >> c >> d;

    // Step 2: use set to store unique values
    set<int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);

    // Step 3: total duplicates = 4 - unique elements
    int duplicates = 4 - s.size();

    // Step 4: print result
    cout << duplicates << endl;

    return 0;
}