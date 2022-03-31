#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<char>v(10);  //create a vector of length 10
    vector<char>::iterator p; //create an iterator
    
    int i;
    p=v.begin();  //assign element to vector value
    i=0;
    while(p !=v.end())
    {
        *p = i + 'a';
         p++;
         i++;
    } //end while
    
    cout<<"Original Contents:\n";
    p=v.begin();
    while(p !=v.end())
    {
       cout<<*p<<" ";
       p++;
    } //end while
   
    cout<<"\nModified Content:\n";
    p=v.begin();
    while(p !=v.end())
    {
       *p = toupper(*p);
       cout<<*p<<" ";
       p++;
       
    }
    
}
        
    

    
    
    
    
