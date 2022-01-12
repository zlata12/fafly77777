/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>            
#include <string>       
#include <math.h>           

using namespace std;                
int main()                
{
   	int N,sec;              
     cout <<"Введите количество секунд N:"<<endl;             
     cin>>N;                     
    sec  = N / 60;     
	cout<<"Количество секунд, прошедших с начала последней минуты:"<<sec <<endl;
	return 0;
}
