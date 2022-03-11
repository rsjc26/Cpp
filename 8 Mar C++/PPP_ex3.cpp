//Public, Protected, Private

#include <iostream>
using namespace std;


class ABC{
    public:
    void setProtMemb(int i)
    {
       m_protMemb = i;
    }
    
    void Display()
    {
        cout<<m_protMemb<<endl;
    }
    
    protected:
    int m_protMemb;
    void Protfunc()
    {
        cout<<"\nAccess allowed\n";
    }
};

class XYZ : private ABC
{
    public:
      void useProtfunc()
      {
      Protfunc();
      }
};


int main()
{
    ABC a; XYZ x;
    a.m_protMemb; //error
    a.setProtMemb(0);  //ok
    a.Display();  //ok
    a.Protfunc();  //error
    x.setProtMemb(); //error
    x.useProtfunc(); //ok
    return 0;
}
