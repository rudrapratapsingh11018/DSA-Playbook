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
/*
/
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
*/
/*
 int main(){
  int x;
  cout<<"Enter the choice of department ";
  cin>>x;

  switch(x){
  case 1: cout<<"CSE core ";break;
  case 2: cout<<"AI/ML ";break;
  case 3: cout<<"cyber security ";break;
  case 4: cout<<"cloud computing ";break;
  case 5: cout<<"health information ";break;
  default : cout<<"Not selected!";
}
return 0;
 }
 */

int main(){
  int number = 20;
  int &ref = number;
  int * ptr = &number; /*
  cout<< *ptr <<endl;
  cout<< number<<endl;
  cout<< ptr;
  cout<<&number;
*/
cout<<"Value of Ref = "<<ref;
  if( ptr == &number){
    cout<<"ptr == &number ";
  }
  else{
    cout<<"ptr /= &number";
  }
cout<<endl;
  if( *ptr == number){
    cout<<"*ptr = number";
  }
  else{
    cout<<" *ptr /= number";
  }
  ref = 50;
  cout<<"Updated ref = "<<ref;
return 0;
}
