//Accept N numbers from user and accept one another number as NO ,return frequency of NO form it.c
//        Input :  N  : 6
//                 No : 66
//     Elements :  85  66  3  66  93  88
//       Output :  2

//        Input :  N  :  6
//                 No :  12
//     Elements :  85  11  3  15  11  111
//       Output :  0

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
    int i = 0,Cnt = 0;

    for(i = 0;i < iLength;i++)
    {
        if(Arr[i]==iNo)
        {
            Cnt++;
        }
    }
    return Cnt;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0,iValue = 0;
    int *P = NULL;

    printf("\n Enter Number Of N Elements : ");
    scanf("%d",&iSize);

    printf("\n Enter Number : ");
    scanf("%d",&iValue);

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
	
    iRet = Frequency(P,iSize,iValue);

    printf("\n Frequency Of Number is = %d\n",iRet);
 
    free(P);
	return 0;
}