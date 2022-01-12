

#include <bits/stdc++.h>
using namespace std;

double PowerA3(double A) {
	return A*A*A;
}

int main() {
	srand((int)time(0));
	double x, y;
	for(int i = 0; i < 5; i++) {
		x = rand() % 20 - 10;
		y = PowerA3(x);
		cout << "A = " << x << " : ";
		cout << "B = A^3 = " << y << endl;
	}
	
	return 0;
}