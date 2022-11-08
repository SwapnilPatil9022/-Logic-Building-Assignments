//Write a program which accept string from user and revers that string in place.

//Input  :  "abcd"	
//Output :  "dcba"
 
//Input  :  "abba"	
//Output :  "abba"

#include<stdio.h>

void StrRevX(char *str)
{
	char *start = str;
	char *end = str;
	char temp;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
}

int main()
{
    char arr[20];
    
    printf("\n Enter String : ");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("\n Modified string is %s",arr);
   
    return 0;
}