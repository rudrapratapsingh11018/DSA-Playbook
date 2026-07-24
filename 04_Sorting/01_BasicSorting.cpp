#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr = {2,4,9,7,5,6};
    //for ascending
    cout<< "ascending Order"<<endl;
    sort( arr.begin() , arr.end());
    for( int i =0 ; i <arr.size(); i++){
       
        cout<< arr[i] << " ";

    }
    // for descending
    cout<< "Descending Order"<<endl;
    sort( arr.begin() , arr.end(), greater<int> ());
    for( int i = 0; i<arr.size() ; i++) {
        
        cout<< arr[i] <<" ";
    }
 return 0;
}