//Write a program which acccept number form user and print even factors of that number.

#include<stdio.h>

void DisplayFactors(int iNo)
{
	int i = 0;
	
	if(iNo <= 0)
	{
		iNo = -iNo;
	}	
	for(i=1; i<iNo; i++)
		if(iNo % i == 0 && i % 2 == 0)
	{
		printf("%d\n",i);
	}
}
int main()
{
	int iValue = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	DisplayFactors(iValue);

	return 0;
}