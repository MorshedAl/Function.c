# include<iostream>
using namespace std;
/*
int maxx()
{
    return 0;
}


int maxx(int a)
{
    return a;
}


int maxx(int a,int b)
{
    return a>b?a:b;
}


int maxx(int a,int b,int c)
{
    return a>b && a>c?a:b>a && b>c?b:c;
}



উপরের 4টি overloaded function কে,
নিচে default function ব্যবহার করে, একটি function মাধ্যমে
কাজ সেরে ফেলা হবে।
এটাই dafult value র ম্যাজিক!
(একাধিক overloaded function into combined one function)

remind it:

~template function e 'default value' ব্যবহার করা যায় না

~default value always ডানপাশের দিক থেকে হবে।


*/

int maxx(int a=0,int b=0,int c=0)
{

    return a>b && a>c?a:b>c && b>c?b:c;

}







int main() {
    cout<<maxx()<<endl;
    cout<<maxx(10)<<endl;
    cout<<maxx(10,20)<<endl;
    cout<<maxx(10,20,15)<<endl;
    return 0;
}










