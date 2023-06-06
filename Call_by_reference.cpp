#include<iostream>
using namespace std;
/*
//call bu reference:

 syntex is as like as call by value,
 only difference is used '&' in formal parameter,nothing else.
 but works as like as call by address.

-in this method,swap() isn’t create safferately at stack memory.
 just create  nick_name of variables(in stack memory)
 and copy function/inline function (in main function).


- in this method,don’t use complex anything (like loop) in swap function.
 because here just create nick name of actual parameters only.
so extra anything will create hassle.



*/
void swap(int &a,int &b)//formal parameters
{
    cout<<a<<" "<<b<<endl; // a=10,b=20

    int temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl; // a=20,b=100
}
int main()
{
    int x=10,y=20;
    swap(x,y);//actual parameters

    cout<<x<<" "<<y<<endl;//x=10,y=20



    return 0;
}
