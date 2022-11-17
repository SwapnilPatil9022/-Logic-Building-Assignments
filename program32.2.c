//Write a program which accept one number and position from user and off that bit. Return modified number.

// Input : 10	2
//Output : 8

#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT uNo,UINT Bit)
{
    return uNo & ~(1<<(Bit-1));
}
int main()
{
    UINT uValue=0,uBit=0;

    printf("Enter The Number => ");
    scanf("%d",&uValue);
    printf("Enter The Bit => ");
    scanf("%d",&uBit);

    printf("%d",OffBit(uValue,uBit));

    return 0;
}