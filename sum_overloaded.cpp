#include<iostream>
using namespace std;
/*
-function overloading is allowed in c++
it means same funtion name but parameter different.
-overloaded function are counted as different functions.

-return_type isn’t considered in f_overloaded.

 allowed:
 int sum(int,int)
 int sum(int,int,int)
 float sum(float,float)
  
 int sum(float,float) //not allowed,
this would be name conflicting/redefinition function/same function 
 

*/
 int sum(int a,int b)
{
 return a+b;
}

int sum(int a,int b,int c)
{
return a+b+c;

}
 
float sum(float x,float y)
{

 return x+y;
}

/*
 // not allowed.

 int sum(float x,float y)
{

 return x+y;
}

*/
int main()
{   int a=10,b=15,c=5;
    float x=4.6, y=5.4;
     
    cout<<sum(a,b)<<endl;
    cout<<sum(a,b,c)<<endl;
    
    cout<<sum(x,y)<<endl;
    
    cout<<sum(x,y)<<endl;
    
    return 0;
}