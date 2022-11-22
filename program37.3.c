//Write a recursive program which display below pattern.

// Input : 5

//	Output :  5	  4   3   2   1		//.....

#include<stdio.h>

void Display()
{
	static int iCnt = 5;
	
	if(iCnt >= 1)
	{
		printf("%d\t",iCnt);
		iCnt--;
		Display();
	}
}

int main()
{
	Display();
	return 0;
}
