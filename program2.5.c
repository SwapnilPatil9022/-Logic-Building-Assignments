//Accept number from user and Check whether number is even or odd.

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
	int iCnt = 0;
	
	for(iCnt=1 ; iCnt<= 0 ; iCnt++)
	{
		iCnt++;
	}	
}
int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet = ChkEven(iValue);
	//printf("Result is : \n",&bRet);
	if((iValue % 2) == 0)
	{
		printf("Number is Even\n");
	}
	else
	{
		printf("number is Odd\n");
	}
	return 0;
}