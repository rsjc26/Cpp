#include<iostream>
using namespace std;

template<class T1>
void sum (T1 a, T1 b, T1 c)
{
    cout<<"sum: "<<a+b+c<<endl;
}

template<class T1, class T2>
void sum (T1 a, T2 b, T1 c)
{
    cout<<"sum: "<<a+b+c<<endl;
}

void sum (int a, int b, int c)
{
    cout<<"Sum "<<a+b+c<<endl;
}

//Driver program
int main()
{
   int a,b;
   float x,y,z;
   cout<<"Enter two integers"<<endl;
   cin>>a>>b;
   cout<<"Enter three double: "<<endl;
   cin>>x>>y>>z;
   sum(x,y,z);
   sum(a,b);
   sum(a,x,b);
    return 0;
}
