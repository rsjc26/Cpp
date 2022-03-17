#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream fp; char buf[100];
    int pos;
    fp.open("file.txt", ios::out|ios::ate);
    cout<<"Writing to a file"<<endl;
    fp<<"\nLine one"<<endl;
    fp<<"\nLine two"<<endl;
    pos = fp.tellp();
    cout<<"Current position: "<<pos<<endl;
    fp.seekp(-7,ios::cur);
    fp<<endl<<"\nrandom data\n";
    fp.seekp(7,ios::beg);
    
    fp<<"\nhello world";
    fp.close();
    cout<<"Done Writing"<<endl;
    fp.open("file.txt");
    cout<<"Reading the file"<<endl;
    fp.seekg(0);
    while(fp.getline(buf, 100))
    cout<<buf<<endl;
    pos = fp.tellg();
    cout<<"Pos Pointer is at: "<<pos<<endl;
    return 0;
}


