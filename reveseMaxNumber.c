//Accepet N and form user and perform Maximun of N numbers

#include<stdio.h>
#include<stdlib.h>

int Maximun(int Arr[], int iLength)
{
	int iMax = 0;
	int iCnt = 0;
	
	for(iCnt=0; iCnt<iLength; iCnt++)
	{
		if(iMax > Arr[iCnt])
		{
			iMax = Arr[iCnt];
		}
	}
	return iMax;
}
int main()
{
	int iSize = 0;
	int iRet = 0;
	int iCnt = 0;
	int *ptr = NULL;
	
	printf("Enter the number of element: \n");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(sizeof(int)*iSize);
	
	printf("Enter the value\n");
	for(iCnt=0; iCnt<iSize; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Maximun(ptr, iSize);
	
	printf("Maximun number is : %d\n",iRet);
	free(ptr);
	
	return 0;
}
