/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include <iostream> 
using namespace std;


int Quarter(float x, float y)
{
    if (x > 0 and y > 0)
    {
        return 1;
    }
    else if (x < 0 and y > 0)
    {
        return 2;
    }
    else if (x < 0 and y < 0)
    {
        return 3;
    }
    else
    {
        return 4;
    }
}


int main()

{
    int i;
    for (int i = 1; i <=3; i++){
    float x1, y1;
    cout << "x1:" << endl;
    cin >> x1;
    cout << "y1:" << endl;
    cin >> y1;
    cout <<"Quarter number="<< Quarter(x1,y1)<< endl;
}
    return 0;
}