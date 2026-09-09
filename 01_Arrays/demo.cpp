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