#include<iostream>
using namespace std;

//call bu address

void swap(int *a,int *b)//formal parameters
{
    cout<<*a<<" "<<*b<<endl; // a=10,b=20

    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<*a<<" "<<*b<<endl; // a=20,b=100
}
int main()
{
    int x=10,y=20;
    swap(&x,&y);//actual parameters
    
    cout<<x<<" "<<y<<endl;//x=10,y=20



    return 0;
}