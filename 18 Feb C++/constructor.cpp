// Constructor

#include <iostream>
using namespace std;

class democonst
{
    public: int i=0, j=0, k=0;
    public:
            void setval()
            {
                i=100;
                cout << "Inside setvalue(), i= " << i << endl;
            }//end of setval
//constructor
            
            democonst()
            {//function name = class name,no return
            cout << "Inside the Constructor\n" << endl;
            j=0;
            k=5;
            }
};

int main()
{
    democonst demo1, demo2;
    cout << "values of demo1 members:" << demo1.i << " " << demo1.j << " " << demo1.k << endl;
    demo1.setval();
    cout << "values of demo2 members:" << demo2.i << " " << demo2.j << " " << demo2.k << endl;
    demo2.setval();
    
    return 0;
}



