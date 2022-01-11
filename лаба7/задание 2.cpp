/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main(){
	const double pi=3.14;
	double a_r,a_g;
	cout << "Vvedite znacheniye ugla v radianakh: ";
	cin >> a_r;
	// 180 gradusov = pi => pi = 180 gradusov => 1 rad = 180 gradusov/pi => n rad = n*180 gradusov/pi.
	a_g = a_r*180/pi;
	cout << "Znacheniye ugla v gradusakh: " << a_g << "." << endl;
	return 0;
}
