// Accept N Numbers From User And Return Frequency Of 11 Form It.
//        Input :  N  : 6
//     Elements :  85  66  3  15  93  88
//       Output :  0

//        Input :  N  :  6
//     Elements :  85  11  3  15  11  111
//       Output :  2

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int i = 0,Cnt = 0;
    while(i<iLength)
    {
        if(Arr[i]==11)
        {
            Cnt++;
        }
        i++;
    }
    return Cnt++;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *P = NULL;

    printf("\n Enter Number Of N Elements : ");
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
   
    iRet = Frequency(P,iSize);

    printf("\n Return Frequency Number Of 11 is = %d\n",iRet);
 
    free(P);

    return 0;
}