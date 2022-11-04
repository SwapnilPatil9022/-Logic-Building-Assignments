//Accept character from user and display it's ASCHII value in Decimal,Octal,Hexadecimal format. 

// Input  : A
// Output : Decimal		 65	
// Output : Octal   	 0101
// Output : Hexadecimal  0X41

#include<stdio.h>
#include<conio.h>

void Display(char ch)
{ 
    printf("\n The Character is %c Display ASCII Value \n\n\t Decimal = %d. \n\n\t Octal is = 0%o. \n\n\t Hexadecimal = 0X%x",ch,ch,ch,ch);
}
int main()
{
	char cValue = '\0';
	
	printf("Enter the Character\n");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}