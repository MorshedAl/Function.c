#include<iostream>
using namespace std;
/*
int maxx(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;

}

float maxx(float x,float y)
{
    if(x>y)
        return x;
    else
        return y;
}
double  maxx(double x,double y)
{
    if(x>y)
        return x;
    else
        return y;
}

*/

/*
//template function 

//template definition

template<class T>  // or template<typename T>

T maxx(T x,T y)
{
    if(x>y)
        return x;
    else
        return y;
}

*/

 template<class T>

 T maxx(T x,T y)
    {
    
    return x>y?x:y;
    
    
    }









int main()
{
    cout<<maxx(5,10)<<endl;
    cout<<maxx(4.6f,8.55f)<<endl;
    cout<<maxx(4.6,8.55)<<endl;

    return 0;
}
