//Accept N number from user and display all such elements whitch are multiples of 11.

//Input: 	N: 	6
//		Elements : 85	66	3	55	93	88

//Output:  	66	55	88

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt]%11==0)
		{
			printf("\n%d",Arr[iCnt]);
		}
	}
	return;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter Number Of Elements => ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Failed To Allocate Memory");
        return -1;
    }

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter Element %d => ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Display(p,iSize);

    free(p);
    return 0;
}