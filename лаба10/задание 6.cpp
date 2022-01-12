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
 
 if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
 cout << "Истинно";
 }
 else {
 cout << "Ложь"; 
 }
}