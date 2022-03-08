#include <iostream>  

using namespace std;  

class A // indicates class A  
{  
public:  
A()  
{  
cout<< "This is Class A\n";  
}  
};  

//Class B is derive from class A
class B: public A 
{  
public:  
B()  
{  
cout<< "This is derive from Class A\n";  
}  
};  


//Class C is derive from class A
class C: public A 
{  
public:  
C()  
{  
cout<< "This is  Class C derived from Class A\n";  
}  
};  



// class D derived from class B and class C
class D: public B, public C
{  
public:  
D()  
{  
cout<< "This is Class D derive from class B and C\n";  
}    
};  

//main function
int main() {  

    D c;  
    return 0;  

}  
