//You are given a username (a string of lowercase letters).
//Your task is to determine whether the user is male or female based on the number of distinct characters in the username.

#include <bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin>>s;

    set<char> st;
    for (char c : s) {
        st.insert(c);
    }

    if (st.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}