//Write a program which accept number from user and display its digits on reverse order.

#include<stdio.h>
 
int DisplayDigit(int iNo)
{
	int iDigit = 0;
	int iRev = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = (iNo % 10);
		printf("%d\n",iDigit);
		
		iNo = iNo / 10;
	}
	return iRev;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	iRet = DisplayDigit(iValue);
	
	return 0;
}