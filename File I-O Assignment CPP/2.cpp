// Question-2: Count the number of words that has 'a' in them?

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
		cout << "The file doesnot exists." << endl;
	}

	else
	{
		//count total no. of words
		
		while(input >> s)		//read a char from file and save it to 's'
		{
			int n = s.length();		
			
			for(int i = 0; i < n;i++)		//ckeck wors contain 'a' 
			{
				if(s[i] == 'a' || s[i] == 'A')
				{
					count++;			//count number of words
					break;
				}
			}
			
		}
		
		cout << "Total no. of words having 'a' --> " << count << endl;
		
		
	}
	
	input.close();			
	
	return 0;
}
