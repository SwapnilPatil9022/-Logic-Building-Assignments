//Write a program which accept number for user and display its factors in decresing order.
//input : 12
//output: 6 4 3 2 1 

//input : 13
//output: 1

//input : 10
//output: 5 2 1

#include<stdio.h>

void FactRev(int iNo)
{
	int iCnt = 0;
	
	for(iCnt=iNo; iCnt>=1; iCnt--)
	{
		if((iNo%iCnt) == 0)
		{
			printf("%d",iCnt);
		}
	}
}
int main()
{
	int iValue = 0;
	
	printf("Enter the number:");
	scanf("%d",&iValue);
	
	FactRev(iValue);
	
	return 0;
}