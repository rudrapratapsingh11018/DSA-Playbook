//1.Write a program to check whether a given number is postive , Negative or Zero 
/*
#include <iostream>
using namespace std ;

int main () {
    int number ;
    cout<< "Enter number :";
    cin>> number;

    if (number > 0){
        cout<<number <<" is Positive"<<endl;
    }
    if ( number < 0) {
        cout<< number<<" is Negative" << endl;
    }
    if(number ==0) {
        cout<< number <<" is Zero" << endl;
    }

    return 0 ;
}
*/

//2.Write a program to determine whether a given year is a Leap Year or Not a Leap Year.
/*
#include <iostream>
using namespace std ;

int main () {
   int year ;
   cout << "Enter year" ;
   cin>> year;
   
   if ((  year % 400 == 0) || (year % 4 ==0 &&  year %100 !=0)) {
    
    cout<< year << "Leap Year "<< endl;
   }
   else{
    cout<< year <<"Not Leap Year " << endl;
   }
   return 0 ;

}

*/
//3. Write a program to check whether a student has passed or failed based on the passing marks off 40
/*
#include <iostream> 
using namespace std ;

int main() {
    int marks ;
    cout<< "Enter the marks of Student ";
    cin>>marks;

    if ( marks >= 40) {
        cout<< "Student is passed with "<<marks<<" marks!"<<endl;
    }
    else {
        cout <<" student is Failed "<<endl;
    }

return 0;
}

*/
//4. Write a program to calculate the grade of a student based on the entered marks using an if...else if ladder.
/*
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 95)
        cout << "Grade S";
    else if (marks >= 90)
        cout << "Grade A";
    else if (marks >= 80)
        cout << "Grade B";
    else if (marks >= 70)
        cout << "Grade C";
    else if (marks >= 60)
        cout << "Grade D";
    else
        cout << "Fail";

    return 0;
}
*/
//5. Write a program to find the largest among three numbers entered by the user.
/*
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        cout << "Largest = " << a;
    else if (b >= a && b >= c)
        cout << "Largest = " << b;
    else
        cout << "Largest = " << c;

    return 0;
}
*/

//6.Write a program to check whether a person is eligible to vote based on their age.
/*
#include <iostream>
using namespace std;
int main() {
    int age ;
    int YOB;
    cout<<"Enter Age :";
    cin>> age;
    cout<<" Enter YOB";
    cin>> YOB;
    if (( age >= 18) || (YOB >= 2008)){
        cout<<"You are Eligible to VOTE !"<<endl;
    }
    else {
        cout<<"You Cannot VOTE";
    }
    return 0;
}
*/
//7.Write a program to classify a character as an uppercase letter, lowercase letter, digit, or special character.
/*
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
        cout << "Uppercase Letter";
    else if (ch >= 'a' && ch <= 'z')
        cout << "Lowercase Letter";
    else if (ch >= '0' && ch <= '9')
        cout << "Digit";
    else
        cout << "Special Character";

    return 0;
}
*/

//8. Write a menu-driven simple calculator using the switch statement to perform addition,
//subtraction, multiplication, and division.
#include <iostream>
using namespace std;

int main() {
    int a, b, choice;

    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch(choice) {
        case 1:
            cout << "Sum = " << a + b;
            break;

        case 2:
            cout << "Difference = " << a - b;
            break;

        case 3:
            cout << "Product = " << a * b;
            break;

        case 4:
            if(b != 0)
                cout << "Quotient = " << a / b;
            else
                cout << "Division by zero is not possible.";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}

//9. Write a menu-driven program to display the day of the week based on a number (1–7) using the switch statement.
#include <iostream>
using namespace std;

int main() {
    int day;

    cout << "Enter day number (1-7): ";
    cin >> day;

    switch(day) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
        default: cout << "Invalid Day";
    }

    return 0;
}

//10. Write a menu-driven restaurant billing system that calculates the total bill based on the
//selected food item and quantity.
#include <iostream>
using namespace std;

int main() {
    int choice, qty;
    float total = 0;

    cout << "----- MENU -----\n";
    cout << "1. Burger      Rs.120\n";
    cout << "2. Pizza       Rs.250\n";
    cout << "3. Sandwich    Rs.80\n";

    cout << "Enter item number: ";
    cin >> choice;

    cout << "Enter quantity: ";
    cin >> qty;

    switch(choice) {
        case 1:
            total = qty * 120;
            break;
        case 2:
            total = qty * 250;
            break;
        case 3:
            total = qty * 80;
            break;
        default:
            cout << "Invalid Item";
            return 0;
    }

    cout << "Total Bill = Rs." << total;

    return 0;
}

//11. Write a program to determine the type of triangle (Equilateral, Isosceles, or Scalene) based
//on the lengths of its sides.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if(a == b && b == c)
        cout << "Equilateral Triangle";
    else if(a == b || b == c || a == c)
        cout << "Isosceles Triangle";
    else
        cout << "Scalene Triangle";

    return 0;
}
//12. Write a program to calculate the electricity bill based on different unit consumption slabs.
#include <iostream>
using namespace std;

int main() {
    int units;
    float bill;

    cout << "Enter units consumed: ";
    cin >> units;

    if(units <= 100)
        bill = units * 1.5;
    else if(units <= 200)
        bill = 100 * 1.5 + (units - 100) * 2.5;
    else
        bill = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4;

    cout << "Electricity Bill = Rs." << bill;

    return 0;
}

//13. Write a program to check whether a given character is a vowel or a consonant.
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    ch = tolower(ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        cout << "Vowel";
    else
        cout << "Consonant";

    return 0;
}

//14. Write a program to determine whether a number is even or odd using the ternary operator.
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << (num % 2 == 0 ? "Even" : "Odd");

    return 0;
}
//15. Write a program to find the maximum of two numbers using the ternary operator.
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Maximum = " << (a > b ? a : b);

    return 0;
}

//16. Write a program to check whether a student is eligible for a scholarship based on
//attendance and marks using nested if statements.
#include <iostream>
using namespace std;

int main() {
    int attendance, marks;

    cout << "Enter attendance percentage: ";
    cin >> attendance;

    cout << "Enter marks: ";
    cin >> marks;

    if(attendance >= 75) {
        if(marks >= 80)
            cout << "Eligible for Scholarship";
        else
            cout << "Not Eligible";
    }
    else
        cout << "Not Eligible";

    return 0;
}

//17. Write a program to calculate the income tax based on different salary slabs using an if...else if ladder.

#include <iostream>
using namespace std;

int main() {
    float salary, tax = 0;

    cout << "Enter annual salary: ";
    cin >> salary;

    if(salary <= 250000)
        tax = 0;
    else if(salary <= 500000)
        tax = (salary - 250000) * 0.05;
    else if(salary <= 1000000)
        tax = 12500 + (salary - 500000) * 0.20;
    else
        tax = 112500 + (salary - 1000000) * 0.30;

    cout << "Income Tax = Rs." << tax;

    return 0;
}
//18.  Write a program to implement an ATM menu using the switch statement with options such
//as Balance Inquiry, Deposit, Withdraw, and Exit.

#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "1. Balance Inquiry\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Exit\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Balance = Rs.5000";
            break;
        case 2:
            cout << "Amount Deposited";
            break;
        case 3:
            cout << "Amount Withdrawn";
            break;
        case 4:
            cout << "Thank You!";
            break;
        default:
            cout << "Invalid Choice";
    }

    return 0;
}

//19. Write a program to determine the season based on the entered month number using the switch statement.
#include <iostream>
using namespace std;

int main() {
    int month;

    cout << "Enter month number (1-12): ";
    cin >> month;

    switch(month) {
        case 12:
        case 1:
        case 2:
            cout << "Winter";
            break;

        case 3:
        case 4:
        case 5:
            cout << "Spring";
            break;

        case 6:
        case 7:
        case 8:
            cout << "Summer";
            break;

        case 9:
        case 10:
        case 11:
            cout << "Autumn";
            break;

        default:
            cout << "Invalid Month";
    }

    return 0;
}

//20. Write a program to assign an employee performance rating (Excellent, Good, Average, Poor) based on the employee&#39;s performance score.
#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter performance score (0-100): ";
    cin >> score;

    if(score >= 85)
        cout << "Excellent";
    else if(score >= 70)
        cout << "Good";
    else if(score >= 50)
        cout << "Average";
    else
        cout << "Poor";

    return 0;
}