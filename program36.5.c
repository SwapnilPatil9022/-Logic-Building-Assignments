//Write a recursive program which display below pattern.

//	Output : a	b	c	d	e	f

#include<stdio.h>
/*
void DisplayI()
{
	static char ch = 'a';
	int iCnt = 1;
	
	while(iCnt <= 6)
	{
		printf("%c\t",iCnt);
		ch++;
		iCnt++;
	}
}
*/
void DisplayR()
{
	static int iCnt = 1;
	static char ch = 'a';
	
	if(iCnt <= 6)
	{
		printf("%c\t",ch);
		iCnt++;
		ch++;
		DisplayR();
	}
}
int main()
{
	DisplayR();
	
	return 0;
}