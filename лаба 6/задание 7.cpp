/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main(){
	double A,x,y;
	cout << "Vvedite znacheniye peremennoy A: ";
	cin >> A;
	x = A*A;
	cout << "A v stepeni 2 ravno " << x << "." << endl;
	y = x*A;
	cout << "A v stepeni 3 ravno " << y << "." << endl;
	x = x*y;
	cout << "A v stepeni 5 ravno " << x << "." << endl;
	y = x;
	x = y*y;
	cout << "A v stepeni 10 ravno " << x << "." << endl;
	x = x*y;
	cout << "A v stepeni 15 ravno " << x << "." << endl;
	return 0;
}