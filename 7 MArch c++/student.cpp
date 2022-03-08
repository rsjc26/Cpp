/*Create a class student that stores roll_no, name. Create a class test that stores marks
obtained in five subjects. Class result derived from student and test contains the total
marks and percentage obtained in test. Input and display information of a student.*/

#include <iostream>
using namespace std;


class Student
{
    public:
        int roll;
};
 
class Test:public Student
{
    public:
        int marks1,marks2,marks3,marks4,marks5;
        Test(int m1,int m2,int m3,int m4,int m5): marks1(m1),marks2(m2),marks3(m3),marks4(m4),marks5(m5) {}  
        void show()
        {
            cout<<"The marks are : "<<marks1<<" & "<<marks2<<" & "<<marks3<<" & "<<marks4<<" & "<<marks5<<endl;
        }
};
 
 
class Result:public Test
{
    public:
    Result(int r,int m1,int m2,int m3,int m4,int m5) : Test(m1,m2,m3,m4,m5)
    {
        roll = r;   
    }
    void show()
    {
        int Total;
        float Percentage;
        cout<<"Roll No : "<<roll<<endl;
        Test::show();
        Total=(marks1+marks2+marks3+marks4+marks5);
        cout<<"Total Marks : "<<Total<<endl;
        Percentage=(float(Total)/500)*100;
        cout<<"Percentage : "<<Percentage<<endl;
    }
};
 
int main()
{   
    Result *r = new Result(2,100,100,100,95,99);
    r->show();
    return 0;   
}
