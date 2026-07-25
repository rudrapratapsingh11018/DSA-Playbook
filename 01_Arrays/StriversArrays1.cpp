//swaping arrays using single variable
/*
#include <bits/stdc++.h>
using namespace std ;
void f( int i , int arr[], int n ) {
    if( i >= n/2) return ;
    swap(arr[i] , arr[n-1-i]);
        f(i+1, arr, n);
    
}
int main(){
freopen ( "input.txt" ,"r", stdin);
freopen ( "output.txt" ,"w",stdout);

int n ;
cin>>n;

int arr[n] ;
for ( int i= 0; i<n ; i++) cin>> arr[i];
f( 0,arr, n) ;

return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

void reverseArray(int i, vector<int>& arr, int n) { // f = reverseArray
    if(i >= n/2) return;
    swap(arr[i], arr[n - i - 1]);
    reverseArray(i + 1, arr, n);
}

int main() {
    int n;
    cout<<"n = ";
    cin >> n;

    vector<int> arr(n);

    // Taking input
    cout<<"Input array (eg: 1 2 3 4 5)";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse array
    reverseArray(0, arr, n);

    // Print output
    for(int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}