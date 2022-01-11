/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main(){
	double A,B,C,x,y;
	cout << "Vvedite znacheniye peremennoy A: ";
	cin >> A;
	cout << "Vvedite znacheniye peremennoy B: ";
	cin >> B;
	cout << "Vvedite znacheniye peremennoy C: ";
	cin >> C;
	x = B;
	B = A;
	y = C;
	C = x;
	A = y;
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	cout << "C: " << C << endl;
	return 0;
}