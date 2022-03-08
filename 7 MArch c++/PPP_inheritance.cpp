#include<iostream>
using namespace std;

class A	
{
	private:
	int x=26;
	
	protected:
	int y=19;
	
	public:
	int z=45;
	
	void displayA()
	{
		cout << "Private: " << x << "Protected: " << y << "Public: " << z << endl;
	}
}; 

class B : public A	
{
	public:
	void displayB()
	{
		cout <<"Protected"<< y << "Public" << z << endl;
	}
};

class C : public B
{
	public:
	void displayC()
	{
		z += 1;
		y += 1;
		cout <<"Protected :" << y << "Public : " << z << endl;
	}
};

int main()
{
	B b1;
	C c1;
	A a1;
	
	//accessing inherited class 
	a1.displayA();
	b1.displayB();
	c1.displayC();
	
	return 0;
}
