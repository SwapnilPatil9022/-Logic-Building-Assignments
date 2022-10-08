//Write a program which accept number from user and display its multiplication of factors.

#include<stdio.h>

int MultFact(int iNo)
{
	int iCnt = 0, Mult = 1;
	
	for(iCnt=1; iCnt<iNo; iCnt++)
	{
		if(iNo%iCnt == 0)
		{
			printf("%d",iCnt);
			Mult = iCnt*Mult;
		}
	}
	return Mult;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number :");
	scanf("%d",&iValue);
	
	iRet = MultFact(iValue);	
	printf("\n\t%d",iRet);
	
	return 0;
}







