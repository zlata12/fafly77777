/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<math.h>
using namespace std;
 int main ()
{ 
    double g,l;
    cout<<"Введите g:";
    cin>> g;
    cout<<"Введите l:";
    cin>> l;
    cout<<"Сумма:"<<abs(g)+abs(l)<<endl;
    cout<<"Разность:"<<abs(g)-abs(l)<<endl;
    cout<<"Произведение:"<<abs(g)*abs(l)<<endl;
    cout<<"Частное квадратов:"<<abs(g)/abs(l)<<endl;
}

