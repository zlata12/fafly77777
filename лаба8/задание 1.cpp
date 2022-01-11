/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main(){
	int b, kb;
	cout << "Vvedite B: ";
	cin >> b;
	kb = int(b/1024);
	cout << "Kolichestvo polnyikh kilobaytov: " << kb;
	return 0;
}
