/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
 
int main() {
 int A, B,C;
 cout << "A:";
 cin >> A;
 cout << "B:";
 cin >> B;
 cout << "C:";
 cin >> C;
 
 if (A < B && B < C) {
 cout << "Истинно";
 }
 else {
 cout << "Ложь";
 }
}