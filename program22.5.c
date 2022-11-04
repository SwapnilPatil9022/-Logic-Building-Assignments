//Accpet division of student from user and depends on the division display exam timing. There are 4 divisions int school as A,B,C,D Exam of division A at 7 AM, B at 8:30, C at 9:20, D at 10:30 AM.
//(Application should be case insensitve)

//Input  : C
//Output : Your exam at 9:20 AM

//Input  : d
//Output : Your exam at 10:30 AM


#include<stdio.h>

void DisplaySchedule(char chDiv)
{
	if(chDiv == 'A')
	{
		printf("Your exam at 7 AM");
	}
	else if(chDiv == 'B')
	{
		printf("Your exam at 8:30 AM");
	}
	else if(chDiv == 'C')
	{
		printf("Your exam at 9:20 AM");
	}
	else if(chDiv == 'D')
	{
		printf("Your exam at 10:30 AM");
	}
	else
	{
		printf("Invalid Division");
	}
}

int main()
{
	char cValue = '\0';
	
	printf("Enter the Division\n");
	scanf("%c",&cValue);
	
	DisplaySchedule(cValue);
	
	return 0;
}
