// Problem: Reverse String
// Approach: Two Pointer (In-place)
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std ;

void reverseString( vector<char> & s){
    int left =0;
    int right = s.size() -1 ;

    while (left < right-1) {
        swap(s[left] , s[right]); 
        left++;
        right--;
    }
}

int  main(){
    vector <char> s = {'r','u','d','r','a'};

    reverseString(s);

    for (char c : s) {
        cout<<c;
    }
        return 0;
    
}

/* Method 2 using String instead of vector<char>

int main(){
string  s = "rudra";

int left  = 0; 
int right = s.length() -1 ;

while ( left < right){
        swap ( s[left] , s[right]);
        left++;
        right--;
        }
cout <<s;

return 0;
}



*/