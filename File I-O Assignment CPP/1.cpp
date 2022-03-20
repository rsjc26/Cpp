//Question-1: Count the number of time the word 'the' is present in the file?

#include <iostream>
#include <fstream>
#include<string.h>

using namespace std;

int main()
{

	ifstream input;
	string str;
	int count = 0;
	string k = "the" ;
	
	//open the file
	input.open("hello.txt");				
	
	if(!input) //in case file not found
	{
		cout << "File not found." << endl;
	}
	
	else
	{
		while(input >> str) 	//read char by char
		{
						
			if (str == k)		//check for string == 'the'
			{
				count++;
			}
		}
		
		cout << "\nTotal no of 'the' in the file  --> " << count << endl;
	}
	
	input.close();			//closing the file
	
	return 0;
}
