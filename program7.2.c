//Write a program which accept number from user and return the count of odd digits.

//Input :2395
//Output :3

//Input :1018
//Output :2

//Input :-1018
//Output :2

//Input :8462
//Output :0

#include<stdio.h>

int CountOdd(int iNo)
{
	int iCnt = 0;
	int iCount = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo != 0)
	{
		iCount = iNo % 10;
		if((iCount % 2)!= 0)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}		
	return iCnt;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number ");
	scanf("%d",&iValue);
	
	iRet = CountOdd(iValue);
	printf("%d",iRet);
	
	return 0;
}