//Write a program whith accept string from user and Dispaly it in revers order.

//Input  : "MarvellouS"

//Output : "SuollevraM"

#include<stdio.h>
#include<conio.h>

int StrLength(char *Str)
{
    int iCnt = 0;
    while(Str[iCnt] != '\0')
    {
        iCnt++;
    }
    return iCnt;
}

void Reverse(char *cArr,char *cDest)
{
    int iLength = StrLength(cArr);
    cArr = cArr + (iLength - 1);
    while(iLength > 0)
    {
        *cDest = *cArr;
        *cDest++;
        *cArr--;
        iLength--;
    }
    *cDest = '\0';
}

int main()
{
    char cArr[20] = "";
    char cDest[20] = "";
    int iRet = 0;

	printf("\n Enter String : ");
    scanf("%[^\n]",&cArr);

	Reverse(cArr,cDest);
	
	printf("\n Reverse String is = %s.\n",cDest);
   
    _getch();
    return 0;
}