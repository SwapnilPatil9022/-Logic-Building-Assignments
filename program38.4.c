//Write a recursive program which accept number from user and return its factorial.

// Input : 5

// Output : 120

#include<stdio.h>

int FactR(int iNo)
{
	static int iCnt = 1;
	static int iSum = 1;
	
	if(iCnt <= iNo)
	{
		iSum = iSum * iCnt;
		iCnt++;
		FactR(iNo);
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = FactR(iValue);
	printf("%d",iRet);

	return 0;
}

	

