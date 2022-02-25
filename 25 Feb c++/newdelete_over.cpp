//code new delete overloading

#include <iostream>
using namespace std;

class location{
    int lon,lat;
   
    public:
    location(){
        cout << "Inside the default const\n";
        lon = 0;
        lat = 0;
    }
    
    location(int x,int y){
        cout << "Inside the param const\n";
        lon = x;
        lat = y;
    }
    
    void display(){
        cout<<"The location is=> Long: "<<lon<<" Lat: "<<lat<<endl;
    }
    
    //overloading
    
    void * operator new(size_t byte){
        void *ptr;
        ptr = malloc(byte);
        if(ptr==NULL)
        
        cout<<"No Memory allocated\n";
        return ptr;
    }
    //overloading 'delete' operator
    void operator delete(void *ptr)
    {
        cout<<"Inside the overloaded\n";
        free(ptr);
    }
    
};

class demo
{
    int j=22;
    public: 
    demo()
    {
        cout<<"Inside demo default\n" ;
    }
    
};

 
  int main()
  {
      location loc1, loc2(30,30);
      loc1.display();
      loc2.display();
      
      location *loc = new location;
      loc->display();
      delete loc;
      
      int *pt = new int;
      *pt = 100;
      cout<<"-------------------\n";
      
      demo *d1 = new demo;
      delete d1;
      
      return 0;
    }  

