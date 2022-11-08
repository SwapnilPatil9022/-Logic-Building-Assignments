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

int FirstChar(char *Str, char ch)
{
    int iCnt = 0;
    while (*Str != '\0')
    {
        if (*Str == ch)
        {
            return iCnt;
        }
        *Str++;
        iCnt++;
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

    iRet = FirstChar(cArr, cValue);

    printf("\n Given character Of Frequency is = %d.\n", iRet);
   
   _getch();
    return 0;
}