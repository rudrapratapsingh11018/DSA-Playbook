#include <iostream> 
using namespace std ;

/*
int main(){
    int a = 20 ;
    int b = 6;

    cout<<"A == B ="<<( a==b) << endl;
    cout<<"A>= B ="<<( a>=b) << endl;
    cout<<"A!= B ="<< (a!=b )<< endl;
    cout<<"A < B ="<<( a<b )<< endl;
    cout<<"A =< B ="<< (a<=b )<< endl;
    
  return 0;  
} 
*/

/*
int main () {
  int a = 10 ;
  cout<< "a++ " << a++ << endl;
  cout<< "++a " << ++a << endl;
  cout<< "a-- " << a-- << endl;
  cout<< "--a " << --a << endl;

  return 0;
}
  */

  /*
int main() {
  int a,b;
  cout<<"enter a"<<endl;
  cin>>a;
  cout<<"enter b" <<endl;25
  cin>>b;

  if(a > b) {
    cout<< a <<" is Largest !"<< endl;
  }
  else{
    cout<< b <<" is largest"<< endl;
  }
  return 0;
}
*/

int main () {
   int a,b;
  cout<<"enter a = ";
  cin>>a;
  cout<<"enter b = " ;
  cin>>b;
  
  int largest = (a > b) ? a : b;
  int smallest = (a < b) ? a : b;
 if ( a == largest) return a ;
 if ( a == smallest) return b; 
cout << "Largest = " << largest;
cout<< "smallest = " << smallest;
return 0;
}