//Write a recursive program which display below pattern.

//	Output : A	B	C	D	E	F

#include<stdio.h>
/*
void DisplayI()
{
	static char ch = 'A';
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
	static char ch = 'A';
	
	if(iCnt <= 6)
	{
		printf("%c\t",ch);
		ch++;
		iCnt++;
		DisplayR();			//recursive
	}
}

int main()
{
	DisplayR();
	
	return 0;
}