/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>            
#include <string>       
#include <math.h>           

using namespace std;                
int main ()                
{                
   	double v1,v2,t,s,result;              

        cout <<"Vvedite skorost pervogo avtomobily :"<<endl;             
        cin>>v1;                     
        cout <<" Vvedite skorost vtorogo avtomobily:"<<endl;             
        cin>>v2;             
        cout <<"Vvedite rasstoynie megdy avtomobilymi:"<<endl;             
        cin>>s;             
        cout <<"Vvedite proshedshee vremy:"<<endl;             
        cin>>t;
    result=s+t*(v1+v2);
	cout<<"Rasstoynie"<<result<<endl;                
}
