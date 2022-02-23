//friend function

#include <iostream>
using namespace std;

class A
{
    public:
    
    int n1=10;
    friend void newfunc(A);
    void fun1(A obj)
    {
        cout << "It is a Public Function" <<endl;
        cout << obj.n1 << endl;
        cout << obj.n2 << endl;
        cout << obj.n3 << endl;
    }
    
    private:
    
    int n2=20;
    
    void fun2(A obj)
    {
        cout << "This function  is private" << endl;
        cout << obj.n1 << endl;
        cout << obj.n2 << endl;
        cout << obj.n3 << endl;
    }
    
    protected:
    
    int n3=30;
   /* void func3(A obj)
    
    {
        cout << "The function is Protected" << endl;
        cout << obj.n1 <<endl;
        cout << obj.n2 <<endl;
        cout << obj.n3 <<endl;
        
    }*/
    
};

void newfunc(A obj)
{
    cout << "It is a friend function" <<endl;
    cout << obj.n1 <<endl;
    cout << obj.n2 <<endl;
    cout << obj.n3 <<endl;
}

class B
{
    protected:
    void fun11(A obj)
    {
        cout <<"It is protected function" <<endl;
        cout << obj.n1 <<endl;
        //cout << obj.n2 <<endl;
        //cout << obj.n3 <<endl;
    }
};

int main()
{
    B obj;
    A obj1;
    newfunc(obj1);
    
        /*cout << obj.n1 <<endl;
        cout << obj.n2 <<endl;
        cout << obj.n3 <<endl;
        obj.fun2(obj1);
        obj.fun3(obj1);*/
        
return 0;
}

