#include<iostream>
#include<fstream>
using namespace std;

int main()
{
ifstream input; string str;
input.open("file.txt");
if(!input)
cout<<"file did not open"<<endl;

else{
//while(input>>str)
while(getline(input,str))
count++
{
cout<<str<<endl;
}
}
}

