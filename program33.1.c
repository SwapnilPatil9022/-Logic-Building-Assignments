//Write a program which accept one number from user and count number of ON (1) bits in it without using % and / operator.

// Input : 11
//Output : 3

#include<stdio.h>
typedef unsigned int UINT;

UINT CountOne(UINT uNo)
{
    int Cnt=0,j=0;

    for(int i=0;j=j+(2^i)<=uNo;i++)
    {
        if(uNo & 1<<i)
        {
            Cnt++;
        }
    }

    return Cnt;
}
int main()
{
    UINT uValue=0;

    printf("Enter The Number => ");
    scanf("%d",&uValue);

    printf("%d",CountOne(uValue));

    return 0;
}