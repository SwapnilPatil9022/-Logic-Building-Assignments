//Accept number of rows and number of columns from user and display below pattern.

//Input: iRow = 4 		iCol= 4

//Output :  *	*	*	*
//			*	*	*
//			*	*	
//			*	

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
	int i = 0;
	int j = 0;
	
	for(i = iRow; i >= 1; i--)
	{	  //     1                2            3
		for(j = 1;   j <= i;   j++)		
		{
				printf("*\t");
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