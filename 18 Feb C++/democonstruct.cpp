//demo code for constructor

#include <iostream>
using namespace std;

class A{
    private: int i=10;
    
    public:
    
//default constructor:

    A(){
        cout << "This is default construct, value of i here is: " << i << endl <<endl;
    }
    
//with parameters:

    A (int x, int y)
    {
        
        cout << "This is construct with params" << endl <<endl;
        i=x+y;
        cout << "Value of i is now: "<< i <<endl;
    }
    
// copy constructor:
        
        A(A &ob1){
            
            i=ob1.i;
            cout << "Inside the copy constructor, value of i in this object is some as ob1:" << i << endl <<endl;
        }
};


int main()
{
    A ob;
    A ob1(5,10);
    A ob2(ob1);
    return 0;
}
