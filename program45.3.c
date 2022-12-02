//Write a program which accept matrix from user and return Largest number of that elements.

// Input : 3	2	5	9
//		   4	3	2	2
//		   8	4	1	5
//		   3	9	7	5
		   
// Input : 9
// Output : Number is present 2 time

#include<stdio.h>
#include<conio.h>

void CountMax(int Arr[4][4],int iRow,int jCol, int iNo)
{
	
	for(iRow = 0; iRow < 4; iRow++)
	{
		for(jCol = 0; jCol < 4; jCol++)
		{
			if(Arr[iRow][jCol] > iNo)
				iNo = Arr[iRow][jCol];
		}
	}
	printf("Largest number is : %d\n",iNo);
	printf("-------------------------------\n");
}
int main()
{
	int Brr[4][4];
	int i = 0,j = 0,n = 0;
	
	printf("\nEnter the elements of matrix\n");
	printf("------------------------------\n");
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			scanf("%d",&Brr[i][j]);
		}
	}

	scanf("%d",&n);
	printf("------------------------------\n");
	
	CountMax(Brr,i,j,n);
	
	return 0;
}