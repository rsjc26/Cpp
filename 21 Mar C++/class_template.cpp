#include<iostream>
using namespace std;

template<class T1, class T2>
class sample{
    T1 a; T2 b;
    public: void getdate(){
        cout<<"Enter A & B"<<endl;
        cin>>a>>b;
    }
    
    void display(){
        cout<<"The values: "<<endl;
        cout<<"a: "<<a<<"b: "<<b<<endl;
    }
};  //end class

int main(){
    sample<int, int>s1;
    sample<int, double>s2;
    sample<double, double>s3;
    cout<<"Integer data: "<<endl;
    s1.getdate();
    s1.display();
    
    cout<<"Int an double data: "<<endl;
    s2.getdate();
    s2.display();
    
    cout<<"Double amd double data: "<<endl;
    s3.getdate();
    s3.display();
    
    return 0;
}
