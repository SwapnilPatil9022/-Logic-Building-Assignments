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
	int temp = 0;
	
	for(iRow = 0; iRow < 4; iRow++)
	{
		temp = Arr[0][iRow];
		Arr[0][iRow] = Arr[2][iRow];
		Arr[2][iRow] = temp;
	}
	printf("After swapping row number is :\n");
	printf("-------------------------------\n");
	
	for(jCol = 0; jCol < 4; jCol++)
	{
		for(jCol = 0;jCol < 4; jCol++)
		{
			printf("%d",Arr[iRow][jCol]);
		}
	}
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