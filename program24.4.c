//Write a program whith accept string from user and return difference between frequency of small character and frequency of capital characters.

//Input  : "MarvellouS"

//Output : TRUE

//Input  : "Demo"

//Output : TRUE

//Input  : "xyz"

//Output : FALSE


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
	while(*str != 0)
	{
		if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u'))
		{
			return TRUE;
		}
		str++;
	}
	return FALSE;
}
int main()
{
	char arr[20];
	BOOL bRet = FALSE;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",arr);
	
	bRet = ChkVowel(arr);
	if(bRet == TRUE)
	{
		printf("TRUE : Containce Vowel");
	}
	else
	{
		printf(" FALSE : Ther is no Vowel");
	}
	
	return 0;
}
