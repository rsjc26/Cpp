//Overriding Program

#include <iostream>
using namespace std;


class ABC
{
    public:
    void display(){
        cout<<"This is parent class";
    }
};

class XYZ:public ABC{
    public:
    void display(){
        cout<<"This is child class";
    }
};

int main()
{
XYZ.x;
x.display();
x.ABC.display();
return 0;
}
