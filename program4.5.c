//Write a program which accept number from user and return differecne between summation of all its 
//factors and non factors.

//input : 12
//output: -34 	(16-50)

//input : 10
//output: -29 	(8-37)

#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt = 0;
	int iFSum = 0;
	int iNFSum = 0;
	
	for(iCnt=1; iCnt<iNo; iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			iFSum = iFSum + iCnt;
		}
		if((iNo % iCnt) != 0)
		{
			iNFSum = iNFSum + iCnt;
		}
	}
	return iFSum - iNFSum;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number :\n");
	scanf("%d",&iValue);
	
	iRet = FactDiff(iValue);
	printf("%d",iRet);
	
	return 0;
}

