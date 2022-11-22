//Write a recursive program which display below pattern.

// Input : 5

//	Output : *	*	*	*	*

#include<stdio.h>

void Display(int iNo)
{
	static int iCnt = 1;
	
	if(iCnt <= iNo)
	{
		printf("*\t");
		iCnt++;
		Display(iNo);		//recursive
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}