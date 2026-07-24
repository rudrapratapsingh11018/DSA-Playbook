//Can we form "hello" from the given string by skipping characters (but keeping order)?

#include <bits/stdc++.h> 
using namespace std ;

int main() {

  string s ;
  cin>> s;
  string target ="hello";
  int j =0;
  for( int i=0; i < s.length() ; i++){
    if(s[i] == target[j] ){
        j++;
    }
    if( j==5) break; // length of target h e l l o is 5 
  }
  if ( j==5 ) {
    cout<< "YES";
  }
  else {
    cout<< "NO";
  }

  return 0;
}
