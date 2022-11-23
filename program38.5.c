//Write a recursive program which accept number from user and return its product of digits.

// Input : 523

// Output : 30		( 5	* 2	* 3)

#include<stdio.h>

int MultR(int iNo)
{
	static int Digit = 1;
	static int Sum = 1;
	
	if(iNo > 0)
	{
		Digit = iNo % 10;
		Sum = Sum * Digit;
		iNo = iNo / 10;
		MultR(iNo);
	}
	return Sum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = MultR(iValue);
	printf("%d",iRet);

	return 0;
}

	

