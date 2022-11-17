//Write a program which accept one number from user and toggle 7th and 10th bit of that number. Return modified number.

//   Input : 137
//	Output : 713

#include<stdio.h>
unsigned int ToggleBit(unsigned int uNo)
{
    return 1<<9^(uNo^1<<6);
}
int main()
{
    unsigned int uValue=0;

    printf("Enter The Number => ");
    scanf("%d",&uValue);

    printf("%d",ToggleBit(uValue));

    return 0;
}