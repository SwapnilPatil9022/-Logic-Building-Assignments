//Write a recursive program which display below pattern.

// Input : 6

//	Output :  A	 B	C	D	E	F

#include<stdio.h>

void Display(int iNo)
{
	static int i = 0;
	static char ch = 'A';
	
	if(i < iNo)				//Using Reccurssion
	{
		printf("%c\t",ch);
		ch++;
		i++;
		Display(iNo);
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
