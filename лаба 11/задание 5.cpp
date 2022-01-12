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
 
 cout << "Введите число a: " << endl;
  cin >> a;
 if ((a < 0) and (a % 2 == 0))
{
cout<< "Число отрицательное, четное" << endl ;
}
if ((a > 0) and (a % 2 == 0))
{
cout << "Число положительное, четное" << endl;
}
if ((a < 0) and (a % 2 != 0))
{
cout<< "Число отрицательное, нечетное" << endl;
}
if ((a > 0) and (a % 2 != 0))
{
cout <<"Число положительно, нечетное" << endl;
}
if (a == 0)
{
cout<< "Число нулевое"<< endl;
}
cout << endl << endl;
 
 system("pause");
 return 0;
}



 