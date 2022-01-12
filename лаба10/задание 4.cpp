/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
 
int main() {
 setlocale(LC_ALL, "Russian");
 
 int A;
 cout << "A:";
 cin >> A;
 
 
 if ((A/100) > (A % 100 / 10) && (A % 100 / 10) > (A % 10) || (A / 100) < (A % 100 / 10) && (A % 100 / 10) < (A % 10)) {
 cout << "Истинно";
 }
 else {
 cout << "Ложь"; 
 }
}