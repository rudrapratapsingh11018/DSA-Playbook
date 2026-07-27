//Your task is to capitalize only the first letter of the word. All other characters should remain unchanged.
#include <bits/stdc++.h>
using namespace std ;

int main() {
    string s;
    cin>>s;

    s[0] = toupper(s[0]);
    cout<<s;
    return 0;
}