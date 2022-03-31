#include <iostream>
using namespace std;

template<class X> void Swap (X &a, X &b)
{
    X temp;
    temp = a;
    a =b;
    b = temp;
    cout<<"Inside template Swap.\n";
}

//overwrites the generic version o fSwap for int.

void Swap(int &a, int &b)
{
    int temp;
    temp = a; 
    a=b;
    b = temp;
    cout<<"Inside int specialization \n";
    
}

int main()
{
   int i=10, j=20;
   double x= 10.1, y=23.3;
   char a='x', b='z';
   cout<<"Original i,j: "<<i<<' '<<j<<'\n'; //called explicity Swap()
   cout<<"Original x,y: "<<x<<' '<<y<<'\n';//called generic Swap()
   cout<<"Original a,b: "<<a<<' '<<b<<'\n';
   Swap(i,j);   
   Swap(x,y);
   Swap(a,b);
   cout<<"Swapped i,j: "<<i<<' '<<j<<'\n';
   cout<<"Swapped x,y: "<<x<<' '<<y<<'\n';
   cout<<"Swapped a,b: "<<a<<' '<<b<<'\n';
   return 0;
   
}
