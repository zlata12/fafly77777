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
    	double A1,B1,C1,A2,B2,C2,D,x,y;              

         cout <<"Vvedite znachenie A1, :"<<endl;             
         cin>>A1;
         cout <<"Vvedite znachenie B1, :"<<endl;             
         cin>>B1;                     
         cout <<"Vvedite znachenie C1, :"<<endl;             
         cin>>C1;                     
         cout <<"Vvedite znachenie A2, :"<<endl;             
         cin>>A2;                     
         cout <<"Vvedite znachenie B2, :"<<endl;             
         cin>>B2;                     
         cout <<"Vvedite znachenie C2, :"<<endl;             
         cin>>C2;                     
        D=A1*B2 - A2*B1;
 	cout<<"x = :"<<C1*B2-C2*B1<<endl;
 	cout<<"y = :"<<A1*C2-A2*C1<<endl;
 }
