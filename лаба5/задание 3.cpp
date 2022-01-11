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
	double a,b,c,ac,bc,p;
	cout << "Vvedite koordinatu a: ";
	cin >> a;
	cout << "Vvedite koordinatu b: ";
	cin >> b;
	cout << "Vvedite koordinatu c: ";
	cin >> c;
	ac = abs(a-c);
	bc = abs(b-c);
	p = ac*bc;
	cout << "Dlina AC: " << ac << endl;
	cout << "Dlina BC: " << bc << endl;
	cout << "Proizvedenie dlin AC i BC: " << p;
	return 0;
}
