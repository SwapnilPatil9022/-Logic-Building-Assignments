//Write a recursive program which accept number from user and return Smallest digits.

// Input : 87983

// Output : 3

#include<stdio.h>

int Minimum(int iNo)
{
	 int small = iNo % 10;
	 int idigit = 0;
	
	while(iNo > 0)
	{
		idigit = iNo % 10;
		
		if(small > idigit)
		{
			small = idigit;
		}
		iNo = iNo / 10;
	}
	return idigit;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter a number of elements :\n");
	scanf("%d",&iValue);
	
	iRet = Minimum(iValue);
	printf("Minimum number is: %d\n",iRet);
	
	return 0;
}