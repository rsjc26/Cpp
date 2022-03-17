#include<iostream>
#include<fstream>
using namespace std;

int main()
{
fstream fin,fout;
fin.open("file.txt");
fout.open("file1.txt",ios :: app);
char ch;

while(!fin.eof())
{
fin.get(ch);
fout<<ch;
}
cout<<"Copy done!"<<endl;
fin.close();
fout.close();

return 0;
}
