/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include <iostream>
using namespace std;

float RingS(float R1, float R2) {
float S = 3.14 * (R1 * R1 - R2 * R2);
if (R1 > R2) {
return S;
}
else {
return 0;
}
}

int main() {
for (int i = 1; i <= 3; i++) {
float R1, R2;
cout <<"R1:";
cin >> R1;
cout <<"R2:";
cin >> R2;
cout <<"S"<< i <<"="<< RingS(R1, R2) << endl;
}
return 0;
}

