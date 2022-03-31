//Name: Roshni  
/*
#include<iostream>
using namespace std;
#include<Algorithm>
#include<string.h>

int main()
{
string arr[50];
string arr[50];

int i;
cout<<"Enter your string";
cin>>arr[10];


for(i=0;i.size();i++)
{
str.legth()

}


*/


#include <iostream>
#include<map>
using namespace std;

class String
{
    public:
    
    int string(string l)
    {
        int i=0,j=0,k=0;
    
    map<int, int> v;
    while (k < l.length() and j < l.length())
    {
        if(v.find(l[k])==v.end())
        {
            v[l[k]]=k;
        }
        
        else
        {
            if(v[l[k]] >= j)
            {
                j=v[l[k]]+1;
            }
        }
        
        i=max(i,k-j+1);
        v[l[k]]=k;
        k +=1;
    }

    return k;
    
    }
};


int main()
{
    string l;
    cout<<"Enter the string : ";
    cin>>l;
}

