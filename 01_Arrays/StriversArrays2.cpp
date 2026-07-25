// swapping using two varibales let say l , r
#include <bits/stdc++.h> 
using namespace std;
void ReverseArray(int l, vector<int> &arr, int r ) {
    if ( l>=r) return ;
    swap(arr[l] , arr[r]);
    ReverseArray(l+1 ,arr,r-1); 
}

int main(){
    int n;
    cout<<"n : ";
    cin>>n;

    vector<int> arr(n);
     cout<<"Input Array";
    for( int i =0; i<n;i++) cin>> arr[i];

    ReverseArray(0,arr,n-1);

    for(int x : arr) cout<<x<< " ";
    cout<<endl;
    return 0;
}

