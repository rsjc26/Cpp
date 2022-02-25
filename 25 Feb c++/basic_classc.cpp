//Basic type to class conversion

#include<iostream>
using namespace std;

class Time{
    int hour, min;
    
    public:
    Time()
    {
        cout<<"default\n";  //default constructor
    }
    
    Time(int x)
    {
        cout<<"para const\n"; //para constructor
        hour = x/60;
        min = x % 60;
    }
    
    //operator overloading
    void operator = (int x)
    {
        cout<<"operator overloaded\n"; //para constructor
        hour = x/60;
        min = x % 60;
    }
    
    
    void display()
    {
        cout<<"Time is :"<< hour << " Hr and "<<min<<  " Min"<<endl;
    }

};

int main()
{
    int j = 96;
    Time t1;
    t1 = j;
    t1.display();
    
    return 0;
}
