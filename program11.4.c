// Accept N Numbers From User And Display All Such Numbers Which Contains 3 Digits In It.c
//      Input : N        : 6
//              Elements : 8225 665 3 76 953 858
//     Output : 665 953 858

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Digit(int Arr[],int iLength)
{
    int i = 0,Temp = 0,Digit = 0,Cnt = 0;

    for(i = 0;i < iLength; i++)
    {
        Temp = Arr[i];
        Cnt = 0; //ReInitialize Cnt bcz Count Value Increase in Loop
        while(Temp > 0)
        {
            Digit = Temp%10;
            Cnt++;
            Temp /= 10;
        }
        if(Cnt == 3)
        {
            printf("\n Three Digit Element is = %d\n",Arr[i]);
        }
    }
    return;
}

int main()
{
    int iSize = 0,iCnt = 0;
    int *P = NULL;

	printf("\n Enter Number Of Elements : ");
    scanf("%d",&iSize);

    P = (int*)malloc(iSize * sizeof(int));

    if(P == NULL)
    {
        printf("\n Unable To Allocate Memory.");
        return - 1;
    }

   for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter %d Elements : ",iCnt+1);
        scanf("%d",&P[iCnt]);
    }

    Digit(P,iSize);
 
    free(P);
    return 0;
}