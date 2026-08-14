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
 

class Rectangle{
int l , b;
public:
void calculate() {
cin>>l>>b;
}
int area(){
  return l*b;
}
int perimeter (){
  return 2*(l+b);
}


  void display(){
    cout<< area() << perimeter();
  }
};
int main(){
Rectangle r;
r.calculate();
r.display();

return 0;
}
*/
int main() {
    int units;
    float bill;

    cout << "Enter units consumed: ";
    cin >> units;

    if(units <= 100)
        bill = units * 4;
    else if(units <= 200)
        bill = 100 * 4 + (units - 100) * 6;
    else
        bill = 100 * 4 + 100 * 6 + (units - 200) * 8;

    cout << "Electricity Bill = Rs." << bill;

    return 0;
}