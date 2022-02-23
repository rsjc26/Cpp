#include <iostream>
using namespace std;

int fun(int i);
int fun(int i, int j);
int fun(int i, int j, int k);


int main()
{
 cout << "Calling fun(10): "<< fun(10)<<endl;
 cout << "Calling fun(10,20): "<< fun(10,20)<<endl;
 cout << "Calling fun(10,20,30): "<< fun(10,20,30)<<endl;
 return 0;
}

int fun(int i)
{
return i;
}

int fun(int i, int j)
{
return i+j;
}

int fun(int i, int j, int k)
{
return i+j+k;
}


