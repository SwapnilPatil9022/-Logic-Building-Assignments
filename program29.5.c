//Write a program which checks whether first and last bit is On or OFF. First bit means bit number 1 and last bit means bit number.

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    int i=1;
    if(iNo & 1 && iNo>>31 & 1)
    {
        return TRUE;
    }
    return FALSE;
}
int main()
{
    UINT iValue=0;
    BOOL bRet=0;

    printf("Enter The Number => ");
    scanf("%d",&iValue);

    bRet=ChkBit(iValue);

    (bRet==TRUE)?printf("7th, 8th And 9th Bit Is ON"):printf("7th, 8th And 9th Bit Is OFF");

    return 0;
}