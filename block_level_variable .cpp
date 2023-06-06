#include<iostream>
using namespace std;
int x=20;

int main()
{

    int x=50;
    {
        int x=300;
        cout<<x<<endl; //300
    }
   
     cout<<x<<endl; //50

    cout<<::x<<endl; //20





    return 0;
}