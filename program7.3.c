//Write a program which accept number from user and return the count of digits in between 3 and 7.

//Input :2395
//Output :1

//Input :1018
//Output :0

//Input :4521
//Output :2

//Input :9022
//Output :0

#include<stdio.h>

int CountRange(int iNo)
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
		if((iCount > 3)&&(iCount > 7)== 0)
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
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CountRange(iValue);
	
	printf("%d",iRet);

	return 0;
}