//Accept character from user. If character is small display its corresponding capital character, and if it small then display its corresponding capital. In othere cases display as it is.

// Input  : Q
// Output : q

// Input  : m
// Output : M

// Input  : 4
// Output : 4

// Input  : %
// Output : %

#include<stdio.h>
#include<conio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')   ///OR /// if(ch >= 65 && ch <= 90)
    {
        ch = ch + 32;
        printf("\n Given Character Small case is = %c.\n",ch);
    }
    else
    {
        if(ch >= 'a' && ch <= 'z')   ///OR /// if(ch >= 97 && ch <= 122)
        {
            ch = ch - 32;
            printf("\n Given Character Upper Case is = %c.\n",ch);
        }
        else
        {
            printf("\n Given Character is Not Character is = %c.\n",ch);
        }
    }
    return;
}
int main()
{
	char cValue = '\0';
	
	printf("Enter the Character\n");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}