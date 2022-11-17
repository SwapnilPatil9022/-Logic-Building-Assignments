// Write a program which accept one number from user and off 7th and 10th bit of that number. Return modified number.

//   Input : 577
//	Output : 1

#include<stdio.h>
int OffBit(unsigned int uValue)
{
    uValue^=1<<6;
    return uValue ^ 1<<9;
}
int main()
{
    unsigned int uNo=0;

    printf("Enter The Number => ");
    scanf("%d",&uNo);

    printf("%d",OffBit(uNo));

    return 0;
}