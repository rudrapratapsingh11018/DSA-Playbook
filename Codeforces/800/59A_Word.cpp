/* Problem Description
given a string s.
 If uppercase letters > lowercase letters
 convert whole string to UPPERCASE
 Else
 convert whole string to lowercase
Example

Input:HoUse
Output:house

Input:ViP
Output:VIP
*/
#include <bits/stdc++.h>
using namespace std ;

int main(){
    string s;
    cin>>s;
   int upper =0, lower=0;

   for(char c : s) {
    if( isupper(c)){
       upper++;
    }
    else{
        lower++;
    }
   }

   if ( upper>lower) {
       cout<<"More UPPER"<<endl;
       for( char &c: s) c= toupper(c);
    }
    else{
        cout<<"More lower"<<endl;;
        for(char &c :s ) c = tolower(c);
    }
    cout<<"upper"<<upper<<endl;
    cout<<"lower"<<lower<<endl;
   cout<<s;
return 0;
}