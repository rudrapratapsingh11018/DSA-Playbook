// #include <iostream> 
// using namespace std ;

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
// int main() {
//     int units;
//     float bill;

//     cout << "Enter units consumed: ";
//     cin >> units;

//     if(units <= 100)
//         bill = units * 4;
//     else if(units <= 200)
//         bill = 100 * 4 + (units - 100) * 6;
//     else
//         bill = 100 * 4 + 100 * 6 + (units - 200) * 8;

//     cout << "Electricity Bill = Rs." << bill;

//     return 0;
// }

// #include <iostream>
// using  namespace std;
// string color = "Red";
// string * myPtr =  &color;
// int main(){
//       cout<<"value : " << color<<endl;
//       cout<<"Address : " << myPtr<<endl;
// return 0;
// }

// #include <iostream>
// using  namespace std;
// int Roll =11019;
// int * ptrRoll = &Roll;
// int main(){ 
//      cout<< "Value old : "<<Roll<<endl;
//      int ptrRoll =11018;
//      cout<<"Value New : " <<ptrRoll<<endl;
// return 0;
// }

// #include <iostream>
// using namespace std;
// void swap ( int *xptr, int *yptr){
//   int temp = *xptr;
//   *xptr = *yptr;
//   *yptr = temp;
// }

// int  main(){
//   int x;
//   cout<<"x :";
//   cin>>x;
//   int y;
//   cout<<"y :";
//   cin>>y;
//   cout<<endl;
//   swap(&x, &y);
//   cout<<"x :"<< x<<endl;
//   cout<<"y :"<<y<< endl;

//   return 0;
// }
//
//5. Perform arithmetic operations on two numbers using pointers. 
// #include <iostream>
// using namespace std;
// void Arithmatic(int*xptr, int*yptr){

//   int choice ;
//   cout<<" Choose serial of Operator you want to use"<<endl;
//   cout<<"1. ADD"<<endl;
//   cout<<"2. SUB"<<endl;
//   cout<<"3. MULT"<<endl;
//   cout<<"4. DIV"<<endl;
//   cin>>choice;
//   switch (choice){
//   case 1:
//         cout<< (*xptr + *yptr) <<endl;
//         break;
//   case 2:
//         cout<< (*xptr - *yptr) <<endl;
//         break;
//   case 3:
//         cout<< (*xptr * *yptr) <<endl;
//         break;
//   case 4:
//         cout<< (*xptr / *yptr) <<endl;
//          break;
//   default:
//          cout<<"Invalid Choice";
// }
// }
// int main(){
//   int a ;
//   cout<<"a:";
//   cin>>a;
//   int b =100;
//   cout<<"b :";
//   cin>>b;
//   Arithmatic(&a,&b);
// return 0;
// }

// #include <iostream>
// using namespace std;

// void display(int *ptr, int size) {
//     for (int i = 0; i < size; i++) {
//         cout << *(ptr + i) << " ";
//     }
// }

// int main() {
//     int n;

//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];   // array declaration

//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Array elements are: ";
//     display(arr, n);   // passing base address

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void calculate(int *ptr, int size) {
//     int sum = 0;
//     float avg;

//     for (int i = 0; i < size; i++) {
//         sum += *(ptr + i);   // pointer arithmetic
//     }

//     avg = (float)sum / size;
// //
// 7. Find the sum and average of array elements using pointers.  

//     cout << "Sum = " << sum << endl;
//     cout << "Average = " << avg << endl;
// }

// int main() {
//     int n;

//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     calculate(arr, n);   // pass base address

//     return 0;
// }
//8. Find the maximum and minimum elements of an array using pointers.
// #include <iostream>
// using namespace std;

// void findMaxMin(int *ptr, int size) {
//     int max = *ptr;
//     int min = *ptr;

//     for (int i = 1; i < size; i++) {
//         if (*(ptr + i) > max) {
//             max = *(ptr + i);
//         }
//         if (*(ptr + i) < min) {
//             min = *(ptr + i);
//         }
//     }

//     cout << "Maximum = " << max << endl;
//     cout << "Minimum = " << min << endl;
// }

// int main() {
//     int n;

//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     findMaxMin(arr, n);   // pass base address

//     return 0;
// }

//
// 9. Count even and odd elements in an array using pointers.  


// #include <iostream>
// using namespace std;

// void countEvenOdd(int *ptr, int size) {
//     int even = 0, odd = 0;

//     for (int i = 0; i < size; i++) {
//         if (*(ptr + i) % 2 == 0)
//             even++;
//         else
//             odd++;
//     }

//     cout << "Even elements = " << even << endl;
//     cout << "Odd elements = " << odd << endl;
// }

// int main() {
//     int n;

//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     countEvenOdd(arr, n);   // pass base address

//     return 0;
// }

//10.Search for an element in an array using pointers.
// #include <iostream>
// using namespace std;

// void searchElement(int *ptr, int size, int key) {
//     bool found = false;

//     for (int i = 0; i < size; i++) {
//         if (*(ptr + i) == key) {
//             cout << "Element found at index " << i << endl;
//             found = true;
//             break;
//         }
//     }

//     if (!found) {
//         cout << "Element not found";
//     }
// }

// int main() {
//     int n, key;

//     cout << "Enter size of array: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter element to search: ";
//     cin >> key;

//     searchElement(arr, n, key);   // pass base address

//     return 0;
// }

// template <class T>
// class Record{
//   private:
//      T data;
//   public:
//   Record(T d) : data(d){}
//   void display(){
//     cout<< "Record Data: "<<data<<endl;
//   }
// };

// int main(){
//   Record<string> studentRecord("Rudra Pratap Singh-25BCE11018") ;
//   Record<int> bookId( 11018);
//   studentRecord.display();
//   bookId.display();

// return 0;
// }
#include <bits/stdc++.h>
using namespace std;

// template <typename T> 
// T findMax( T x, T y) {
//   return (x>y)? x:y;
// }

// int main(){
//   cout<<"Maximum ?" << findMax<int>( 10, 8)<<endl;
//   cout<<"Maximum"<<findMax<float> (2854354985.33, 42364864.870)<<endl;
//   return 0;
// }

// template < typename T>
// class Container {
//   protected :
//   T item;

//   public :
//   Container ( T i ) : item( i) {} 
//   virtual void show() = 0;

// };

// class Electronics : public Container <string> {
//   public:
//   Electronics (string name ) : Container<string> ( name) {}

//   void show() override {
//     cout<< "Electronic Product : "<<item <<endl;
//   }
// };

// class Groceries : public Container <string > {

//   public :
//   Groceries ( string name ) : Container<string > (name) {}

//   void show () override {
//     cout<< "Groceries product " <<item <<endl;
//   }
// };


// class Furniture : public Container<string> {
//   public :
//   Furniture ( string name) : Container<string> (name) {}

//   void show() override {
//     cout<< "Furniture Product "<<item<<endl;
//   }
// };


// int main() {
//   Electronics laptop ( "Acer Aspire Lite ");
//   Groceries egg( "Brown Egg 2x30 ");
//   Furniture sofa( "Red Velvet cousin");

//   laptop.show();
//   egg.show();
//   sofa.show();
// }


// int main() {

// list <string> addmision;
// addmision. push_back("Vishal 25BAI10287");
// addmision. push_back("Rishi 25BAI11072");
// addmision. push_front("Management Quota : Rudra 25BCE11018");// special fast insertion

// cout<<"Admission Queue: ";

// for( const string&A : addmision){

//   cout<<A<<"|";
// }
// return 0;
// }

// int main(){
//   vector <int > Regno = {23,11,65,78,44,22,33,22,22,33,23,45,78,45,88};

//   // sorting 

//   sort(Regno.begin(), Regno.end() );

//   int c = count( Regno.begin(), Regno.end(),22);

//   for( int r : Regno) {
//     cout<<r<<"|";
//   }
//  cout<<endl;
//   cout<<"Regno 22 appears "<<c<< "times!"<<endl;
//  return 0;

// }
 

// int main(){
//   vector <double> marks = { 67.00 , 68.00,68.00, 81.00,79.00};
//   double sum =0 ;

//   // using the standard iterator traversal 

//   for ( vector<double> :: iterator i = marks.begin(); i!= marks.end(); i++) {
//       sum += *i;
//       cout<< *i << "+";
//   }
//   cout<<endl;

//   cout <<"Total : "<<sum <<endl;

//   return 0;
// }



// int  main(){

//   vector <int > marks = { 99, 100, 99, 94, 88} ;
//   int sum =0;

//   // standard iterator traversal  

//   for( vector<int> :: iterator i = marks.begin(); i != marks.end(); i++) {
//     sum += * i;
//     cout<< *i << " ";
//   }
//   cout<<endl;

//   cout<<"Total : "<<sum<<endl;
// double Percentage = sum/5;
// cout<<Percentage <<" %"<<endl;
// return 0;
// }


int main() {

  queue<string> complaints ;
  complaints.push("Server Overlaod / Busy !!");


  set<int> uniqueID = { 11018, 10287, 10138, 11072, 10287};


  map<int , string> customerDB;
  customerDB[10287] = "Vishal Malviya";

  cout<<"Handling Compaints:"<<complaints.front() <<endl;//FIFO
  cout<<"Total unique IDs :"<<uniqueID.size()<<endl;
  cout<<"customer 10287 :"<<customerDB[10287]<<endl;
return 0;
}