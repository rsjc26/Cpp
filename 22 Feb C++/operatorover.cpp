// code for operator overloading

#include <iostream>
using namespace std;

class Complex
{
   int real, img;
   
   public:
   //deafult constructor
   Complex()
   {
       real = 0;
       img = 0;
   }
   
   //para constructor
       Complex(int x, int y)
       {
           real = x;
           img = y;
       }
      
       //display func
       void display()
       {
           cout <<"The real part: "<< real << "and img part: "<< img<<endl<<endl;
       }
       
       //overloading
       //add
       Complex operator + (Complex ob)
       {
           Complex temp;
           temp.real = real + ob.real;
           temp.img = img + ob.img;
           return temp;
           
       }
      //sub
       Complex operator - (Complex ob)
       {
           Complex temp;
           temp.real = real - ob.real;
           temp.img = img - ob.img;
           return temp;
           
       }      
};

int main()
{
    Complex c1(2,6), c2(8,7);
    c1.display();
    c2.display();
    
    //add
    Complex c3;
    c3 = c1+c2-c1;
  //c3 = c1.operator + (c2)  
    c3.display();
    
   // c3 = c2-c1;
    //c3.display();
           
    return 0;
}




