/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

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
	x = C;
	C = A;
	y = B;
	B = x;
	A = y;
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	cout << "C: " << C << endl;
	return 0;
}
