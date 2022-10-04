//Accept one character from user and convert of that character.
//a to z = 97 to 122
//A to Z = 65 to 90

//input:A
//output:a

#include<stdio.h>
#include<conio.h>

void DisplayConvert(char ch)
{	
	if(ch >= 'A' && ch <= 'Z')
	{
		 ch = ch+32;
		 printf("Value Is %c",ch);
	}
	else if(ch >= 'a' && ch <= 'z')
	{
		ch = ch - 32;
		 printf("Value Is %c",ch);
	}
	
}
int main()
{
	int cValue = '\0';
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	DisplayConvert(cValue);
	
	return 0;
}