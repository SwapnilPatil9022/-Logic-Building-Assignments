//Write a program which accept string from user and accept one character. Check whether that character is persent in string or not.

//Input  :  "Marvellous Multi OS"
//		 :	e
			
//Output : TRUE

//Input  :  "Marvellos Multi OS"
//		 :	w
			
//Output : FALSE

#include<stdio.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Chkchar(char *Str,char ch)
{
    while(*Str != '\0')
    {
        if(*Str == ch)
        {
            return TRUE;
        }
        *Str++;
    }
    return FALSE;
}

int main()
{
    char cArr[20] = "";
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("\n Enter String : ");
    scanf("%[^\n]",&cArr);

    printf("\n Enter the Character : ");
    //scanf("%c",&cValue);
    cValue = getche();
    printf("\n");

	bRet = Chkchar(cArr,cValue);

	if(bRet==TRUE)
    {
        printf("\n TRUE : Given character %c is Found.\n",cValue);
    }
    else
    {
        printf("\n FALSE :Given Character %c is Not Found.\n",cValue);
    }
    _getch();
    return 0;
}
