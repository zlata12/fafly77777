/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
# include <iostream>
# include <cmath>
 
using namespace std;
 
int main ()
 
{

 
  int N;
  int K= 0;
  int S= 0;
  cout << "Введите целое число N (>1): ";
  cin >> N;
  while(S <= N) {
   ++K;
   S += K;   
  }
  cout << "Наименьшее из целых чисел K, для которых сумма 1 + 2 + ... + K будет больше или равна N:   " << "K= " << K << endl;
  system ("pause");
  return 0;
}