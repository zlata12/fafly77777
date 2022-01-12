/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
 
int main() {
 int a, b,c;
 cout << "1числo:";
 cin >> a;
 cout << "2числo:";
 cin >> b;
 if (a != b) {
 if (a > b) {
 c = a + b;
 a = c - b;
 b = c - b;
 }
 else {
 c = a + b;
 b = c - a;
 a = c - a;
 }
 cout << "a:" << a << ' ' << "b:" << b;
 }
 else {
 a = b = 0;
 cout << "a:" << a << ' ' << "b:" << b;
 }
}