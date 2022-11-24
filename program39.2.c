//Write a recursive program which accept number from user and return Largest digits.

// Input : 87983

// Output : 9

#include<stdio.h>

int Maximun(int iNo)
{
	static int larg = 0;
	static int idigit = 0;
	
	if(iNo > 0)
	{
		idigit = iNo % 10;
		
		if(larg < idigit)
		{
			larg = idigit;
		}
		iNo = iNo / 10;
		Maximun(iNo);
	}
	return larg;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter a number of elements\n");
	scanf("%d",&iValue);
	
	iRet = Maximun(iValue);
	printf("Maximun number is: %d\n",iRet);
	
	return 0;
}