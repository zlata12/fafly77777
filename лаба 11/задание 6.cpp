/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{

 int a;
 
 cout << "'a' в диапозоне: 1-999" << endl;
 cout << "a = "; cin >> a;
 
 if (a % 2 == 0);
 else cout << "не";
 cout << "четное ";
 if (a / 100 > 0 && a / 100 < 10) cout << "трехзначное ";
 else if (a / 10 > 0 && a / 10 < 10) cout << "двухзначное ";
 else if (a / 10 == 0) cout << "однозначное ";
 cout << "число!!!";
 
 cout << endl << endl;
 
 system("pause");
 return 0;
}