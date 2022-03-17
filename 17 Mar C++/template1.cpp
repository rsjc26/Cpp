#include<iostream>
using namespace std;

//template<typename T,typename U>

template <typename T>
T sum(T x, T y)
{
T s =x + y;
return s;
}

int main()
{
int a=3 ,b =7,c;
double A=5.9 ,B = 9.6,C;
c= sum(a,b);
cout <<"Sum of int : "<< c << endl;
C= sum(A,B);
cout <<"Sum of double : "<< C << endl;
return 0;
}
