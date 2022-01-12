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
    float a;
    cout<<"A:";
    cin>>a;
 
    int n;
    cout<<"N:";
    cin>>n;
 
 
    float a2 = 1, rez = 1;
    int i;
 
    for (i = 2; i <= n; ++i)
    {
        a2 *= a;
        rez += a2;
    }
    cout<<rez;
}