//Write a program which accept number from user and convert frequency of such a digits which are less than 6.

//input : 2395
//output :3

//input :1018
//output :3

//input :9440
//output :3

//input :96672
//output :1

#include<stdio.h>

int Count(int iNo)
{
	int iCnt = 0;
	int iCount = 0;
	
	while(iNo > 0)
	{
		iCount = iNo % 10;
		if(iCount < 6)
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
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = Count(iValue);
	
	printf("%d",iRet);

	return 0;
}