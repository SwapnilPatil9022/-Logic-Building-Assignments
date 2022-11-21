//Write a recursive program which display below pattern.

//	Output : 5	4	3	2	1

#include<stdio.h>
/*
void DisplayI()
{
	int iCnt = 5;
	
	while(iCnt >= 5)
	{
		printf("%d\t",iCnt);
		iCnt--;
	}
}
*/
void DisplayR()
{
	static int iCnt = 5;
	
	if(iCnt >= 1)
	{
		printf("%d\t",iCnt);
		iCnt--;
		DisplayR();			//recursive
	}
}

int main()
{
	DisplayR();
	
	return 0;
}