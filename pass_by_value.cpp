#include<iostream>
using namespace std;

//call bu value
void swap(int x,int y)//formal parameters
{
    cout<<x<<" "<<y<<endl; // x=10,y=20

    int temp=x;
    x=y;
    y=temp;
    cout<<x<<" "<<y<<endl; // x=20,y=100
}
int main()
{
    int x=10,y=20;
    swap(x,y);//actual parameters
    cout<<x<<" "<<y<<endl;//x=10,y=20



    return 0;
}