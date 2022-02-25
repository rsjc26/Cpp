#include<iostream>
using namespace std;

class func2;
class func1
{
   int real, img;
   
   public:
   //deafult constructor
   func1()
   {
       real = 0;
       img = 0;
   }
   
   //para constructor
       func1(int x, int y)
       {
           real = x;
           img = y;
       }
      
       //display func
       void display()
       {
           cout <<"The real part: "<< real << "and img part: "<< img<<endl<<endl;
       }
       
       //op overloading using friend function
       friend func1 operator + (func1 a, func2 b);
};

//Function 2
class func2
{
   int real, img;
   
   public:
   //deafult constructor
   func2()
   {
       real = 0;
       img = 0;
   }
   
   //para constructor
       func2(int x, int y)
       {
           real = x;
           img = y;
       }
      
       //display func
       void display()
       {
           cout <<"The real part: "<< real << "and img part: "<< img<<endl;
       }
       
       //op overloading using friend function
       friend func1 operator + (func1 a, func2 b);
};



//Operator overloading function

func1 operator +(func1 a,func2 b){
    func1 temp;
    temp.real = a.real + b.real;
    temp.img = a.img + b.img;
    return temp;
}

int main()
{
    func1 a1(1,4),b1;
    func2 a2(5,8);
    b1=a1+a2;
    b1.display();
    return 0;
}




