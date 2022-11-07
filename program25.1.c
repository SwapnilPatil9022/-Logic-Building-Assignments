//Write a program which accept string from user and convert it into lower case.

//Input : "Marvellous Multi OS"

//Output : "marvellous multi os"

#include<stdio.h>

void strlwrX(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'A')&&(*str <= 'Z'))
		{
			*str = *str + 32;
		}
		str++;
	}
}

int main()
{
	char arr[20];
	
	printf("Enetr string\n");
	scanf("%[^'\n']s",arr);
	
	strlwrX(arr);
	
	printf("Modified string is :  %s",arr);
	
	return 0;
}