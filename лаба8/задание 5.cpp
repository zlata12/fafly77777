/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main(){
	int a,res;
	cout << "Vvedite  trexznachnoe chislo : ";
	cin >> a;
    res = (a mod 10)*100 + (a div 10);
	cout << "Chislo, poluchennoe v rezul'tate perestanovki cifr : " << res;
	return 0;
}
