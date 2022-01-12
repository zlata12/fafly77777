/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <math.h>
 
using namespace std;
 
int main(void)
{
    int A;
    cout << "A:";
    cin >> A;
 
    A = abs (A);
 
    cout << (A%10==A/1000 & A%100/10 == A%1000/100) << endl;
 
    return 0;
}