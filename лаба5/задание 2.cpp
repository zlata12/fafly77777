/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double a,b,c,ac,bc,s;
	cout << "Vvedite koordinatu a: ";
	cin >> a;
	cout << "Vvedite koordinatu b: ";
	cin >> b;
	cout << "Vvedite koordinatu c: ";
	cin >> c;
	ac = abs(a-c);
	bc = abs(b-c);
	s = ac+bc;
	cout << "Dlina AC: " << ac << endl;
	cout << "Dlina BC: " << bc << endl;
	cout << "Summa dlin AC i BC: " << s;
	return 0;
}