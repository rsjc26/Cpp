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
       
       //overload the - operator
       /* void operator --()
        {
            real--;
            img--;
        }*/
       
       //pre Complex operator --
       Complex operator -- ()
       {
           Complex temp;
           temp.real = --real;
           temp.img = --img;
           return temp;
       }
       
        //post complex operator (--)
         Complex operator -- (int)
       {
           Complex temp;
           temp.real = real--;
           temp.img = img--;
           return temp;
       }
        

      Complex operator++()
      
       {
           Complex temp;
           temp.real = real++;
           temp.img = img++;
           return temp;
       }
       
};


int main()
{
    Complex c1(1,1), c2(5,5);
    c1.display();
    c2.display();
  
    Complex c3;
    c3.display();
    --c3;
     c3.display();
    
    //c2 = --c3;
    c2.display();
    
    c2 = --c3;
    c2.display();
    c2--;
    c2.display();
    
   // c2 = ++c3;
   // c2.display();
    
    return 0;
}




