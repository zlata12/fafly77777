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
    int a, b;
    cout<<"A:";
    cin>>a;
    cout << "B:";
    cin >> b;
 
    int i, i2;
    for (i = a; i <= b; ++i) {
        for (i2 = 1; i2 <= i; ++i2)
            cout << i <<" ";
    }
 
    return 0;
}