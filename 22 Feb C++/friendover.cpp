#include <iostream>
using namespace std;

class Complex
{
   int real, img;
   
   public:
   //deafult constructor
   Complex()
   {
       
   }
   
   //para constructor
       Complex(int x, int y)
       {
           real = x;
           img = y;
       }
       
       friend void operator + (Complex c, Complex d);
       friend void operator - (Complex c, Complex d);
        friend void operator * (Complex c, Complex d);
        friend void operator / (Complex c, Complex d);
        friend void operator && (Complex c, Complex d);
         friend void operator || (Complex c, Complex d);
           friend void operator ^ (Complex c, Complex d);
           
      
};
       //overloading
       //add
       void operator+ (Complex c, Complex d)
       {
           Complex temp;
           temp.real = c.real + d.real;
           temp.img = c.img + d.img;
           cout<<"Addition: "<<endl;
           cout<<"Real sum: "<<temp.real<<endl;
           cout<<"Img sum: "<<temp.img<<endl;
     }
     
     //Subtraction
     void operator- (Complex c, Complex d)
       {
           Complex temp;
           temp.real = c.real - d.real;
           temp.img = c.img - d.img;
           cout<<"\nSubtraction: "<<endl;
           cout<<"Real sum: "<<temp.real<<endl;
           cout<<"Img sum: "<<temp.img<<endl;
     }
    
    //Multiplication
    void operator* (Complex c, Complex d)
       {
           Complex temp;
           temp.real = c.real * d.real;
           temp.img = c.img * d.img;
            cout<<"\nMultiplication: "<<endl;
           cout<<"Real sum: "<<temp.real<<endl;
           cout<<"Img sum: "<<temp.img<<endl;
     }
     
     //Division
    void operator/ (Complex c, Complex d)
       {
           Complex temp;
           temp.real = c.real / d.real;
           temp.img = c.img / d.img;
           cout<<"\nDivision: "<<endl;
           cout<<"Real sum: "<<temp.real<<endl;
           cout<<"Img sum: "<<temp.img<<endl;
     }
     
      //AND Operator
    void operator&& (Complex c, Complex d)
       {
           Complex temp;
           temp.real = c.real && d.real;
           temp.img = c.img && d.img;
           cout<<"\nAND: "<<endl;
           cout<<"Real sum: "<<temp.real<<endl;
           cout<<"Img sum: "<<temp.img<<endl;
     }
     
     void operator|| (Complex c, Complex d)
       {
           Complex temp;
           temp.real = c.real || d.real;
           temp.img = c.img || d.img;
           cout<<"\nOr: "<<endl;
           cout<<"Real sum: "<<temp.real<<endl;
           cout<<"Img sum: "<<temp.img<<endl;
     }
     
      void operator^ (Complex c, Complex d)
       {
           Complex temp;
           temp.real = c.real ^ d.real;
           temp.img = c.img ^ d.img;
           cout<<"\nEx-or: "<<endl;
           cout<<"Real sum: "<<temp.real<<endl;
           cout<<"Img sum: "<<temp.img<<endl;
     }
     
int main()
{
    Complex c1(40,20), d1(10,10);
    c1+d1;
    c1-d1;
    c1*d1;
    c1/d1;
   c1&&d1;
   c1||d1;
   c1^d1;
   
    return 0;
}


