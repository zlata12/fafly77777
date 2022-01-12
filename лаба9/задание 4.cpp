/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
 
int main() {
 int A, B, C;
 int R1, R2, K;
 cout << "A:";
 cin >> A;
 cout << "B:";
 cin >> B;
 cout << "C:";
 cin >> C;
 
 R1 = A * B;
 R2 = C * C;
 
 K = R1 / R2;
 cout << "Количество квадратов:" << K;
}