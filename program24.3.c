//Write a program whith accept string from user and return difference between frequency of small character and frequency of capital characters.

//Input  : "MarvellouS"

//Output : 6	(8-2)

#include<stdio.h>

int Difference(char *str)
{
	int iCnt = 0;
	int Capital = 0;
	int Small = 0;
	
	while(*str != '\0')
	{
		if(*str >= 'A'&& *str <= 'Z')
		{
			Capital++;
		}
		else if(*str >= 'a'&& *str <= 'z')
		{
			Small++;
		}
		str++;
	}
	return(Small - Capital);
}
int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	iRet = Difference(arr);
	printf("%d",iRet);
	
	return 0;
}