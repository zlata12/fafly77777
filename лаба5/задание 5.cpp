/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double x1,y1,x2,y2,x3,y3,a,b,c,P,p,S;
	cout << "Vvedit koordinati pervoy vershini (x1, y1): ";
	cin >> x1 >> y1;
	cout << "Vvedit koordinati vtoroy vershini (x2, y2): ";
	cin >> x2 >> y2;
	cout << "Vvedit koordinati tretey vershini (x3, y3): ";
	cin >> x3 >> y3;
	a = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	b = sqrt(pow((x1-x3),2)+pow((y1-y3),2));
	c = sqrt(pow((x2-x3),2)+pow((y2-y3),2));
	P = a+b+c;
	p = P/2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	cout << "Perimetr: " << P << "." << endl;
	cout << "Ploshyad': " << S << "." << endl;
	return 0;
}