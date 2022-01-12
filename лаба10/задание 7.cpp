/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
 
int main() {
 
 int a, b, c;
 cout << "A:";
 cin >> a;
 cout << "B:";
 cin >> b;
 cout << "C:";
 cin >> c;
 
 if ( (a+b) > c && (a+c) > b && (b+c) > a) {
 cout << "Истинно";
 }
 else {
 cout << "Ложь"; 
 }
}