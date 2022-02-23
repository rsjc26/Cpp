// Constructor

#include <iostream>
using namespace std;

class democonst
{
    public: int i=0, j=0, k=0;
//constructor
            
            democonst()
            {//function name = class name,no return
            cout << "Inside the Constructor\n" << endl;
            j=0;
            k=5;
            }//end of default const
            
//param const
            
            democonst(int x,int y,int z)
            {
            cout << "Inside the Para Constructor\n" << endl;
            i=x;
            j=y;
            k=z;
            }//end of param const
};

int main()
{
    democonst demo1, demo2(5,5,5);
    cout << "values of demo1 members:" << demo1.i << " " << demo1.j << " " << demo1.k << endl;
    cout << "values of demo2 members:" << demo2.i << " " << demo2.j << " " << demo2.k << endl;
    
    return 0;
}



