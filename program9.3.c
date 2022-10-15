//Accept N number from user and check whether that numbers containce 11 in it or not.

//Input		N: 	6
	//Elements : 85		66  	11	 80		93		88
	
//Output :  11 is present

//Input		N: 	6
	//Elements : 85		66  	3	 80		93		88
	
//Output :  11 is absent
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define iSearch 11

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
    int i = 0;

    for(i=0;i<iLength;i++)
    {
        if(Arr[i]==iSearch)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0,iCnt = 0;
    int *P = NULL;
    BOOL bRet = FALSE;

    printf("\n Enter Number Of N Elements : ");
    scanf("%d",&iSize);

    P = (int*)malloc(iSize * sizeof(int));

    if(P==NULL)
    {
        printf("\n Unable To Allocate Memory.");
        return - 1;
    }
 
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("\n Enter %d Elements : ",iCnt+1);
        scanf("%d",&P[iCnt]);
    }
 
	bRet = Check(P,iSize);

    if(bRet == TRUE)
    {
        printf("\n 11 is Present.");
    }
    else
    {
        printf("\n 11 is Absent.");
    }
    printf("\n");
  
    free(P);
	return 0;
}