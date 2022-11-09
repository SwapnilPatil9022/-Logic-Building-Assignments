////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///27.4 Write a program which accept string from user and copy Small character that string into another string.
///
///      Input : “Marvellous multi OS”
///
///     Output :  "arvellous multi"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'a') && (*src <= 'z'))
		{
			*dest = *src;
			 dest++;
		}
		src++;
	}
	*dest = '\0';
	return;
}

int main()
{
	char arr[30] = "Marvellous multi OS";
	char brr[30];	//Empty string
	
	StrCpySmall(arr,brr);
	
	printf("%s",brr);	// MMOS
	
	return 0;
}