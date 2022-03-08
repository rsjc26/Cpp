#include<iostream>
using namespace std;

class person		
{
	public:
	int age=29;
}; 

class student		
{
	public:
	int marks=89;
	
	void display()
	{
		cout << "Marks: "<<marks<<endl;
	}
};

class ITstud : public person, public student	
	{public:
	int rank=2;
};


int main()
{
	ITstud a;
		
	cout << a.age << " " << " " << a.marks <<endl;
	a.display();
	
	return 0;
}
