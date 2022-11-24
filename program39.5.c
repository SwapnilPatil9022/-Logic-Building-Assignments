//Write a recursive program which accept number from user and return Smallest digits.

// Input : 523

// Output : 325

#include<stdio.h>

int ReverseR(int iNo)
{
	if(iNo != 0)
	{
		printf("%d\t",iNo % 10);
		iNo = iNo / 10;
		ReverseR(iNo);
	}
	
}

int main()
{
	int iValue = 0;
	int iret = 0;
	
	printf("Enter a number of elements\n");
	scanf("%d",&iValue);
	
	ReverseR(iValue);
	return 0;
}