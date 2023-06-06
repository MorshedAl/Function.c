#include<iostream>
using namespace std;
    
int & fun(int &x)
    {
    	return x;
    }
    
int main()
    {
	    int a=10;
	    fun(a)=25;//here, function left side,this the benefit
	    
	    cout<<a<<endl;
	    
    }






