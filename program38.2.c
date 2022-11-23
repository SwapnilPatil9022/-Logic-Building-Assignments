//Write a recursive program which accept number and return summation of its digits.

// Input : 879

// Output : 24

#include<stdio.h>

int SumR(int iNo)
{
	static int iDigit = 1;
	static int iSum = 0;
	
	if(iNo > 0)
	{
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo / 10;
		SumR(iNo);
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = SumR(iValue);
	
	printf("%d",iRet);
	
	return 0;	
}

	

