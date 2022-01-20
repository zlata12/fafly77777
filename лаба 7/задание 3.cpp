/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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