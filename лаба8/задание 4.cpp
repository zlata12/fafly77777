/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main(){
	int n, f, s, n_new;
	cout << "Vvedite chislo N: ";
	cin >> n;
	f = int(n/10);
	s = n%10;
	n_new = s*10+f;
	cout << "Chislo, poluchennoe v rezul'tate perestanovki cifr iskhodnogo chisla: " << n_new;
	return 0;
}
