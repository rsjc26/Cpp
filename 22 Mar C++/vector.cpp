#include<iostream>
using namespace std;
#include<vector>

int main()
{
    vector<char>v(10);  //create a vector of length 10
    int i;
    
    //display original size of v
    cout<<"Size = "<<v.size()<<endl;
    
    //assign the elements of the vector some values
    for(i=0;i<10;i++)
    v[i]=i+'a';
    cout<<"Current Contents: \n";
    
    for(i=0;i<v.size();i++)
    cout<<"\n\n";
    
cout<<"Expanding vector\n";
for(i=0;i<10;i++)
v.push_back(i+10+'a');
cout<<"Size now = "<<v.size()<<endl;
cout<<"Current contents: \n";
for(i=0;i<v.size();i++)
cout<<v[i]<<" "<<endl;

for(i=0;i<v.size();i++)
v[i]=toupper(v[i]);
cout<<"Modified contents:\n";

for(i=0; i<v.size(); i++)
cout<<v[i]<<" ";
cout<<endl;
}
