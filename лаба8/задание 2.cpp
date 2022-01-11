/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout << "Vvedite A: ";
	cin >> a;
	cout << "Vvedite B: ";
	cin >> b;
	cout << "Kolichestvo otrezkov dlinoy B v otrezke dlinoy A: " << int(a/b);
	return 0;
}