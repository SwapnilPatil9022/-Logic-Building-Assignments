////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///27.3 Write a program which accept string from user and copy Capital character that string into another string.
///
///      Input : “Marvellous Multi OS”
///
///     Output :  "MMOS"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
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
	char arr[30] = "Marvellous Multi OS";
	char brr[30];	//Empty string
	
	StrCpyCap(arr,brr);
	
	printf("%s",brr);	// MMOS
	
	return 0;
}