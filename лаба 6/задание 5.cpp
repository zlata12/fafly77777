/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double x,y;
	cout << "Vvedite znacheniye peremennoy x: ";
	cin >> x;
	y = 4*pow(x-3, 6)-7*pow(x-3, 3)+2;
	cout << "Znacheniye funksii ravno " << y << "." << endl;
	return 0;
}
