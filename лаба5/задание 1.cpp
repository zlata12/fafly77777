/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>            
#include <string>       
#include <math.h>           

using namespace std;                
int main(int argc, char* argv[])                
{                
   	double x1,x2,y1,y2,distance;              

        cout <<"Введите координату x1:"<<endl;             
        cin>>x1;                     
        cout <<"Введите координату y1:"<<endl;             
        cin>>y1;             
        cout <<"Введите координату x2:"<<endl;             
        cin>>x2;             
        cout <<"Введите координату y2:"<<endl;             
        cin>>y2;                              
        distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));      // формула для вычисления расстояния 
	cout<<"Расстояние между двумя точками:"<<distance<<endl;                
}
