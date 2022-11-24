//Write a recursive program which accept number from user and count number of small characters.

// Input : HElloWOrlD

// Output : 5

#include<stdio.h>

int Small(char *str)
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		if((*str > 'a') && (*str <= 'z'))
		{
			iCnt++;
		}
		str++;
		Small(str);
	}
	return iCnt;
}

int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter string: \n");
	scanf("%[^'\n']s",arr);
	
	iRet = Small(arr);
	printf("Small character are :%d\n",iRet);
	
	return 0;
}