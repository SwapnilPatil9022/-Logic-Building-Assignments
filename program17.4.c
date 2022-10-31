//Accept number of rows and number of columns from user and display below pattern.

//Input: iRow = 5		iCol= 5

//Output :  *	*	*	*	*
//			*	*			*
//			*		*		*
//			*			*	*
//			*	*	*	*	*

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i = 0;
	int j = 0;
	
	if((iRow != iCol))
	{
		return;
	}
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iCol; j++)
			if((i == 1) || (i == iRow) || (j == iCol) || (j == 1) || (i == j))
			{
				printf("*\t");
			}
			else 
			{
				printf(" \t");
			}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter the number of rows");
	scanf("%d",&iValue1);
	
	printf("Enter the number of column");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}