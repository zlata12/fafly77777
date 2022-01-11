/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

******************************************************************************/
#include <iostream>
using namespace std;
int main(){
	double A,X,Y,price1,price2;
	cout << "Vvedite znacheniye peremennoy X: ";
	cin >> X;
	cout << "Vvedite znacheniye peremennoy A: ";
	cin >> A;
	cout << "Vvedite znacheniye peremennoy Y: ";
	cin >> Y;
	price1=A/X;
	price2=Y*price1;
	cout << "Cena: " << price1 << endl;
	cout << "Stoimoste: " << price2 << endl;
	return 0;
}