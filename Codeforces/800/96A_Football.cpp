//Given a string of 0s and 1s, determine if there are 7 or more consecutive identical characters. 
//Print "YES" if such a sequence exists; otherwise, print "NO".
#include <iostream>
#include <string>
using namespace std;


int main() {
    string s ;
    cin>> s;

    int count = 1;
    for (int i = 1; i< s.length() ; i++) {
        if( s[i] == s[i-1]) {
            count ++;
            if ( count >= 7) {
                cout<<"yes" ;
                return 0;
            }
        }
        else{
            count = 1;
        }
    }
    cout<<"NO";
    return 0;
}