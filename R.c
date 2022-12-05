//Write a program which accept number from user and display its multiplication of factors.

#include<stdio.h>

int MultFact(int iNo)
{
	int iCnt = 0, Mult = 0;
	
	while(iCnt>0)
	{
		Mult=iNo%10;
		printf("%d",Mult);
		iNo = iNo/10;
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







