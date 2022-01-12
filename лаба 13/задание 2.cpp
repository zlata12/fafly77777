/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
 
using namespace std;
 
int main (){
  int N;
  double p = 1;
  cout << "N = ";
  cin >> N;
  for (int i = 1; i<=N; i++) {
    p = p*(1+0.1*i);
  }
  cout << "Result = " << p;
  return 0;
}