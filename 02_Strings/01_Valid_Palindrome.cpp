// Problem: Valid Palindrome
// Approach: Two Pointer
// Time Complexity: O(n)
// Space Complexity: O(1)

// Key Learning:
// Ignore non-alphanumeric characters and compare lowercase letters

#include <bits/stdc++.h> // standard libraries
using namespace std ;

bool isPalindrome ( string s ) {
    int left =0 ; //pointer to start from begining 
    int right= s.length() -1 ; // pointer starting from end 

    // loop until both pointer meet 
    while( left <right ) {
//skip non-alphanumeric characters from left ,eg:- space, comma , symbols
    while ( left < right && !isalnum(s[left])){
        left++;
    } 

   while ( left < right && !isalnum(s[right])){
       right--;
   }


// to compare charcters => convert to lowercase
// L=> to handle case-insensitive comaprison
if( tolower(s[left]) != tolower(s[right])){
    return false; // NOt pallindrome
}
left++; // move towards centre
right--; // ``
}
return true ; // Is pallindrome
}


int main(){
    string s;

    cout<<"Word/String ?";
    getline(cin, s);

    if( isPalindrome(s)){
        cout<<"Pallindrome";
    } else{
        cout<< "Not Pallindrome";
    }
    return 0; // successful execution indication
}