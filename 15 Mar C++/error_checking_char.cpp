#include<iostream>
#include<fstream>
using namespace std;

int main()
{
ifstream fin;
fin.open("file.txt");
int count = 0;
char word[100];
if(!fin)
cout<<"File did not open"<<endl;
else
{
while(fin>>words)
count++;
}
cout<<"Total lines: "<<endl;
fin.close();
}
