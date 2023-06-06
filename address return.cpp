#include<iostream>
using namespace std;

//address return

/*
-function can take the address and return the address.

-heap এ memory allocation হলে address রিটার্ন করা যায়
 কারণ, delete/free() না করা পর্যন্ত heap এ memory allocation 
 স্থায়ী থাকে।

- stack এ memory allocation করলে, return করার সাথে সাথে 
পুরো function ভ্যানিশ হয়ে যায় বলে, এটা নিয়ে বাইরে কাজ করা যায় না।
তথা address রিটার্ন করা যায় না।
*/

int* fun()
{
    //memory allocation at heap

    int *p=new int[5];

    for(int i=0; i<5; i++)
    {
        p[i]=i*3;

    }


    cout<<p<<endl;
    return p;
}





int main()
{

    int *ptr= fun();
    cout<<ptr<<endl;//same address of p.

    //print
    for(int i=0; i<5; i++)
    {
        cout<<ptr[i]<<" ";
    }


    return 0;
}



