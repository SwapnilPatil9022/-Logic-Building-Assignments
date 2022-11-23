//Write a recursive program which accept string from user and count number of character.

// Input : Hello

// Output : 5			

#include<stdio.h>

int StrlenXR(char *str)
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		iCnt++;
		str++;
		StrlenXR(str);
	}
	return iCnt;
}

int main()
{
	int iRet = 0;
	char arr[20];
	
	printf("Enter number\n");
	scanf("%s",arr);
	
	iRet = StrlenXR(arr);
	
	printf("%d",iRet);
	
	return 0;
}

	

