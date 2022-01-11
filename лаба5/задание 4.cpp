/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double x1,y1,x2,y2,a,b,p,s;
	cout << "Vvedite koordinatu x1: ";
	cin >> x1;
	cout << "Vvedite koordinatu y1: ";
	cin >> y1;
	cout << "Vvedite koordinatu x2: ";
	cin >> x2;
	cout << "Vvedite koordinatu y2: ";
	cin >> y2;
	a = abs(x1-x2);
	b = abs(y1-y2);
	p = (a+b)*2;
	s = a*b;
	cout << "Perimetr: " << p << endl;
	cout << "Ploshyad': " << s;
	return 0;
}