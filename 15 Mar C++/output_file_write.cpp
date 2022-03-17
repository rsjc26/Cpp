#include<iostream>
#include<fstream>
using namespace std;

class student
{
    int roll;
    char name[25];
    float marks;
    
    void getdata()
    {
        cout<<"Enter rollno and name"<<endl;
        cin>>roll>>name;
        cout<<"Marks"<<endl;
        cin>>marks;
    }
    
public: void AddRecord()
{
    fstream f; student stu;
    f.open("student.txt", ios::app|ios::binary);
    stu.getdata();
    
    f.write((char*) &stu, sizeof(stu));
    f.close();
}

    public:
    void display()
    {
        fstream f;
        student s;
        f.open("student.txt",ios::in|ios::binary);
        f.read((char*) &s, sizeof(s));
        cout<<"Roll "<<s.roll<<"Name "<<s.name<<"Marks: "<<s.marks<<endl;
        f.close();
    }
};

int main()
{
    student s;
    char ch='n';
    do
    {
        s.AddRecord();
        cout<<"Want add more?(y/n)"<<endl;
        char temp = getchar();
        ch=getchar();
        s.display();
    }
    while(ch=='y'||ch=='y');
    cout<<"Updated!!!"<<endl;
    
    
}

