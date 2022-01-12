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
    cout << "A:";
    cin >> a;
    cout << "B:";
    cin >> b;
    while ((a != 0) & (b != 0)) {
        if (a > b) a = a % b;
        else b = b % a;
    }
    cout<< a + b;
    return 0;
}