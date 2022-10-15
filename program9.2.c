//Accept N number from user and return difference between frequency of even number and odd numbers.

//Input		N: 	7
	//Elements : 85		66  	3	 80		93		88		90
	
//Output :  1 (4-3)

#include<stdio.h>
#include<stdlib.h>

int Frequncy(int Arr[], int iLength)
{
	int iCnt=0,iDig=0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iDig++;
        }
        else
        {
            iDig--;
        }
    }
    return iDig;
}

int main()
{
	int iSize = 0, iRet = 0, iCnt = 0;
	int *p = NULL;
	
	printf("Enter number of elements => ");
	scanf("%d",&iSize);
	
	p = (int *)malloc(iSize *sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter elements",iRet);
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("\nEnter element : %d =>",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet = Frequncy(p,iSize);
	
	printf("Result is=> %d",iRet);
	
	free(p);
	
	return 0;
}