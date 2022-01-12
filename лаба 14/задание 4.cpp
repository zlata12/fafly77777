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
    float p;
    cout << "P:";
    cin >> p;
    int k = 1;
    float s = 1000;
    while (s <= 1100) {
        ++k;
        s += s * p / 100;
    }
    cout<<"k:"<<k<<endl<<"nS:"<< s;
    return 0;
}