/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main(){
	double A,x;
	cout << "Vvedite znacheniye peremennoy A: ";
	cin >> A;
	x = A*A;
	cout << "A v stepeni 2 ravno " << x << "." << endl;
	x = x*x;
	cout << "A v stepeni 4 ravno " << x << "." << endl;
	x = x*x;
	cout << "A v stepeni 8 ravno " << x << "." << endl;
	return 0;
}
