#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
 Global:
  accessible from 'anywhere' and remain till full program finished.

 Static:
  accessible from only 'local' and remain till full program finished.

 summary is,
 মিল:
 global and static variable both value reserved till the full program finished.
  
 অমিল:
 global is accessible from anywhere 
 and static is accessible only from that local function. 

*/

/*

// example by global variable

int g=0;

void fun()
{
    int x=5;

    g++;

    cout<<x<<" "<<g<<endl;

 //here,x destroyed every time, whenever fun() finished.
 //but, g value remain reserved, যেহেতু global

}



int main()
{
    fun(); //5 1
    fun(); //5 2
    fun(); //5 3
    fun(); //5 4

    return 0;
}

*/



// example by static variable

 void fun()
 {   static int g=0;
      int x=5;

        g++;

        cout<<x<<" "<<g<<endl;

}

int main()
{
    fun(); //5 1
    fun(); //5 2
    fun(); //5 3
    fun(); //5 4

    return 0;
}

