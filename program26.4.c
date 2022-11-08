//Write a program which accept string from user and accept one character. Return index of first occurrence that character.

//Input  :  "Marvellous Multi OS"
//		 :	M
			
//Output :  0

//Input  :  "Marvellos Multi OS"
//		 :	W
			
//Output : -1

//Input  :  "Marvellos Multi OS"
//		 :	e
			
//Output :  4

#include<stdio.h>
#include<conio.h>
#include<string.h>

int LastChar(char *Str,char ch)
{
    int len = 0;
    while (*Str != '\0')
    {
        len++;
        *Str++;
    }

    while (Str != 0)
    {
        if (ch == *Str)
        {
            return len;
        }
        *Str--;
        if (len > 0)
        {
            len--;
        }
    }
}

int main()
{
    char cArr[20] = "";
    char cValue = '\0';
    int iRet = 0;

    printf("\n Enter String : ");
    scanf("%[^'\n']s",cArr);

    printf("\n Enter the Character : ");
    //scanf("%c",&cValue);
    cValue = _getche();
    printf("\n");

    iRet = LastChar(cArr, cValue);

    printf("\n Given character Location is = %d.\n", iRet);
   
   _getch();
    return 0;
}