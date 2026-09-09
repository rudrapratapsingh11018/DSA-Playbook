/* 
# Problem Description

The police department of a city is trying to maintain law and order. However, the number of available police officers changes over time.
I'm given a sequence of events. Each event is represented by an integer:

If the integer is positive, it means that many police officers are recruited.
If the integer is -1, it means a crime has occurred.

Each crime requires exactly one police officer to handle it.

If there is at least one available police officer, the crime will be handled and one officer is used.
If there are no available officers at that moment, the crime goes untreated.

Your task is to count how many crimes go untreated.

Input Format
The first line contains an integer n — the number of events.
The second line contains n integers representing the events.
Output Format
Print a single integer — the number of untreated crimes.
Constraints
1 ≤ n ≤ 100000
Each event value is either:
a positive integer (number of recruits), or
-1 (a crime)
*/

#include <bits/stdc++.h>
using namespace std ;

int main() {
    int n ;
    cin>>n ;

    int police = 0; // police is available
    int untreated = 0; // crimes is not handleled

    for( int i = 0 ; i<n ; i++) {
        int x ;
        cin>>x;
       if( x > 0) {
        // cout <<" Criminal is Untreated / Free"<<endl;
       police +=x; // recuite officer 
       }
       else  {
        // cout<< "Criminal is Punished / Treated !"<<endl;
        if( police> 0) {
        police --; // handling the crime
       }
       else{
        // cout<<"No Record or Crime"<<endl;
         untreated++ ; // no police is avilable
       }
    }
}
    cout<< untreated;
    return 0;
}
