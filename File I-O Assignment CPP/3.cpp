//Question-3: Count the number of words that start with 'e'?

#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main()
{
	ifstream input;
	string s;
	int count=0;
	
	
	input.open("hello.txt");		//open the file

	if(!input)
	{
		cout << "The file doesn't exists." << endl;
	}

	else
	{
		while(input >> s)		//read a char from file and save it to 's'
		{
			if(s[0] == 'e' || s[0] == 'E')//check the number of words that start with 'e'
			{
				count++;			//count no. of words
			}			
		}
		
		cout << "Total no. of words starting with 'e' --> " << count << endl;
		
		
	}
	
	input.close();			
	
	return 0;
}
