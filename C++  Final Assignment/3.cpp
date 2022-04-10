//Set-1
//Question:6 
/*The grade of a student can be based on the following criteria:
Attendance must be more than 50%
Tests scores must be more than .70
Total score must be more than 5600 (just go with this number)
The grades are awarded as follows:
Grade is 10: if all conditions are met
Grade is 9: if conditions 1 and 2 are met
Grade is 8: if conditions 3 and 3 are met
Grade is 7: if conditions 1 and 3 are met
Grade is 6: if only one condition is met
Grade is 5: if none of the conditions are met
Write a cpp program to display the grades, based on the scores students secured in individual criteria.
Ex: input 53, 0.6, 5602 res: 10
Input 45, 0, 4500 res: 6*/


#include<stdio.h>

int Grade(int a, float test, int total)          
{
	if(a > 50 && test > 0.70 && total > 5600)         // Grade 10
	{
		return 10;
	}
	else if(a > 50 && test > 0.70 && total < 5600)    // Grade 9
	{
		return 9;
	}
	else if(a < 50 && test > 0.70 && total > 5600)    // Grade 8
	{
		return 8;
	}
	else if(a > 50 && test < 0.70 && total > 5600)    // Grade 7
	{
		return 7;
	}
	else if(a > 50 || test > 0.70 || total > 5600)    // Grade 6
	{
		return 6;
	}
	else
	{
		return 5;
	}
}

int main()
{
	int attendance = 0;
	int total = 0;
	int result = 0;                  
	float test;

	printf("Enter the Attendance: ");                 
	scanf("%d",&attendance);                          
	printf("Tests Scores : ");
	scanf("%f",&test);
	printf("Total score : ");
	scanf("%d",&total);
	
	

	result = Grade(attendance, test, total);             
	printf("Grade: %d\n", result);	

	return 0;
}
