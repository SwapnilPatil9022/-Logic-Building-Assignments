//Write a recursive program which display below pattern.

//	Output : 1	2	3	4	5

#include<stdio.h>
/*
void DisplayI()
{
	int iCnt = 1;
	
	while(iCnt <= 5)
	{
		printf("%d\t",iCnt);
		iCnt++;
	}
}
*/
void DisplayR()
{
	static int iCnt = 1;
	
	if(iCnt <= 5)
	{
		printf("%d\t",iCnt);
		iCnt++;
		DisplayR();			//recursive
	}
}

int main()
{
	DisplayR();
	
	return 0;
}