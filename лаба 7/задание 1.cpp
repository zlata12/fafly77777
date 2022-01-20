/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
 using namespace std;
 int main(){
 	const double pi=3.14;
 	float n,a;
 	cout << "Vvedite znacheniye ugla v gradusakh: "<<endl;
 	cin >> n;
 	a = n*pi/180;
 	cout << "Znacheniye ugla v radianakh: " << a << "." << endl;
 	return 0;
 }
 
 