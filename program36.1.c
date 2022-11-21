//Write a recursive program which display below pattern.

//	Output : * 	 *	 *	 *	 *

#include<stdio.h>
/*
void DisplayI()
{
	int iCnt = 0;
	
	while(iCnt < 5)
	{
		printf("*\t");
		iCnt++;
	}
}
*/
void DisplayR()
{
	static int iCnt = 0;
	
	if(iCnt < 5)
	{
		printf("*\t");
		iCnt++;
		DisplayR();			//recursive
	}
}

int main()
{
	DisplayR();
	
	return 0;
}