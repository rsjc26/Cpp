#include <iostream>
using namespace std;

int sum(int l, int w=10, int h=20)
{
return (l+w+h);
}

int main()
{
 cout << "Sum is: "<< sum(5)<<endl;
 cout << "Sum is: "<< sum(5,15)<<endl;
 cout << "Sum is: "<< sum(5,15,25)<<endl;
 return 0;
 
}


