#include <bits/stdc++.h>
using namespace std;

void Pattern1(int n){
    for ( int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<< j<< " ";
        }
        cout<< endl;
    }
}
int main(){
    int t ;
    cin>> t; // t is the integer user input 
    for(int i =0; i<t; i++){
        int n ;
        cin>> n;
        Pattern1(n);
    }
    return 0;
}
