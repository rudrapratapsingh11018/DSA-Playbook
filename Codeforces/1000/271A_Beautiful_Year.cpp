// Codeforces 271A  - Beautiful Year
/* Description 

You are given a year y. Your task is to find the next year strictly greater than y such that all four digits 
of the year are distinct (no digit repeats).

Starting from y + 1, keep checking each year:

Extract its digits
Check if all digits are different
The first valid year you find is the answer

Example:
Input: 1987
Check: 1988, 1989, ...
Output: 2013 (first year with all unique digits)
*/


#include <iostream>
using namespace std;

bool distinct(int y) {
    int d1 = y % 10;
    int d2 = (y / 10) % 10;
    int d3 = (y / 100) % 10;
    int d4 = (y / 1000) % 10;

    return (d1 != d2 && d1 != d3 && d1 != d4 && // d1 is different from d2 , d3 , d4 
            d2 != d3 && d2 != d4 && // d2 is different from d3 , d4 
            d3 != d4); // d3 is diffferent form d4
}

int main() {
    int y;
    cin >> y;

    while (true) {
        y++;
        if (distinct(y)) {
            cout << y;
            break;
        }
    }

    return 0;
}
