//Write a pro gram which accept matrix from user and return addition of diagonal elements.

// Input : 3	2	5	9
//		   4	3	2	2
//		   8	4	1	5
//		   3	9	7	5
		   
// Output : 12

#include<stdio.h>
#include<conio.h>

//int Adddaigonal(int Arr[][],int iRow,int iCol)

int main()
{
	int Brr[4][4];
	int i = 0,j = 0,sum = 0;
	
	printf("Enter the elements of matrix \n");
	printf("------------------------------\n");
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("Enter the arr[%d][%d]element : ",i,j);
			scanf("%d",&Brr[i][j]);
			printf("\n");
		}
	}
	printf("The matrix we have\n");
	printf("------------------------------\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%d ",Brr[i][j]);
		}
		printf("\n");
	}
	
	printf("-------------------------------\n");
	printf("The daigonal matrix is : \n \n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(i == j)
			{
				sum = sum + Brr[i][j];
				printf("%d ",Brr[i][j]);
			}
			else
			{
				printf("- ");
			}
		}
		printf("\n");	
	}
	printf("Addition is : %d\n",sum);
	printf("--------------------------------\n");
	
	return 0;
}