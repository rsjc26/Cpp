//Derived Class Construct Program

#include <iostream>
using namespace std;


class Base
{
    int x;
    public:
    Base()
    {
        cout<<"\nBase default Constructor";
    }
    
};

class Derived : public Base{
    int jy;
    public:
    Derived()
    {
        cout<<"\nDerived default Constructor";
    }
    
    Derived(int i)
    {
        cout<<"\nDerived parameterized Constructor";
    }
    
};

int main()
{
Base b;
Derived d1;
Derived d2(10);
}
