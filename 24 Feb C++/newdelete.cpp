//code for delete

#include <iostream>
using namespace std;

class A {
    public :
    int i,j,k,l,m;
    A(){
        cout<<"Inside const"<<endl;
        i = 0;
        j = 10;
    }
    ~A()
    {
        cout<<"Inside the Des"<<endl;
    }
};

int main()
{
    //declaration of variables
    
    int *ptr1,*ptr2, sum;
    A *a2, *a3;
    
    ptr1 = new int; *ptr1 =5;
    ptr2 = new int; *ptr2 = 1;
    sum = *ptr1 + *ptr2;
    cout<<"Sum is: "<<sum<<endl;
    
    a2 = new A;
    
    cout <<"\nSizeof(*ptr1) : "<<sizeof(*ptr1)<<endl;
    cout <<"\nSizeof(ptr1) : "<<sizeof(ptr1)<<endl;
    
    cout <<"\nSizeof(*ptr2) : "<<sizeof(*a2)<<endl;
    cout <<"\nSizeof(ptr2) : "<<sizeof(a2)<<endl;
    
    int *arr = new int [5];
    a3 = new A [4];
    
    delete ptr1;
    delete ptr2;
    delete arr;
    delete [] a3;
    
    return 0;
    
    
    
    
    
    
}
