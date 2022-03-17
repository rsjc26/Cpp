//Swaping the Template Number

#include <iostream>
using namespace std;
template <typename T,typename U>
void swap(T &num1, U &num2)
{
U temp;
temp = num1;
num1 = num2;
num2 = temp;
}

int main()
{
    int num1 =10;float num2 =11.5; 
    cout<<"The swap is "<<num1<<endl;
     cout<<"The swap is "<<num2<<endl;

return 0;
}

