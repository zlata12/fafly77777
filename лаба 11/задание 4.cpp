/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
 
int main() {
 int x, y;
 cout << "X:";
 cin >> x;
 cout << "Y:";
 cin >> y;
 
 if (x > 0 && y > 0) {
 cout << "Первая четверть";
 }
 else if (x < 0 && y>0) {
 cout << "Вторая четверть";
      }
       else if (x < 0 && y < 0) {
    cout << "Третья четверть";
 }
 else
 cout << "Четвертая четверть";
}