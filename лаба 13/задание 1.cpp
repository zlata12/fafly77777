/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
 
using namespace std;
 
int main()
{
   float c, m;
   cout << "Vvedite stoimost 1 kg konfet:";
   cin >> c;
   cout << "Stoimost konfet" << endl;
   for  (m = 0.1; m < 1.1;  m += 0.1)
        cout << m << " kg = " <<  c*m << endl;
   return 0;
}