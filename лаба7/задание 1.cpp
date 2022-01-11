/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main(){
	const double pi=3.14;
	double a_g,a_r;
	cout << "Vvedite znacheniye ugla v gradusakh: ";
	cin >> a_g;
	// 180 gradusov = pi => 1 gradus = pi/180 gradusov => n gradusov = n*pi/180 gradusov.
	a_r = a_g*pi/180;
	cout << "Znacheniye ugla v radianakh: " << a_r << "." << endl;
	return 0;
}
