//Write a recursive program which accept string from user and count white spaces.

// Input : HE llo WOr ID

// Output : 3

#include<stdio.h>

int WhiteSpace(char *str)
{
	static int iCnt = 0;
	if(*str != 0)
	{
		if(*str == ' ')
		{
			iCnt++;
		}
		str++;
		WhiteSpace(str);
	}
	return iCnt;
}

int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter a string\n");
	scanf("%[^'\n']s",arr);
	
	iRet = WhiteSpace(arr);
	printf("%d",iRet);
	
	return 0;
}