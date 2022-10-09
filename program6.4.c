//Write a program which accept number from user and count frequency of 4 in it

//input: 2395
//output : 0

//input : 1018
//output : 0

//input :9440
//output : 2

//input: 922432
//output : 1

#include<stdio.h>

int CountFour(int iNo)
{
	int iCnt = 0;
	int iCount = 0;
	
	while(iNo > 0)
	{
		iCount = iNo % 10;
		if(iCount == 4)
		iCnt++;
		{
			iNo = iNo / 10;
		}
	}
	return iCnt;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet = CountFour(iValue);
	
	printf("%d",iRet);

	return 0;
}