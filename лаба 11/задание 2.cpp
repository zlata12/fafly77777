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
 cout << "1числo:";
 cin >> a;
 cout << "2числo:";
 cin >> b;
 cout << "3числo:";
 cin >> c;
 
 if (b<=c&&b<=a) {
 cout << a+c;
 }
 else {
 if (a <= c && a <= b) {
 cout << b + c;
 }
 else {
 cout << b + a;
 }
 }
}
 

