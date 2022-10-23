//Accept number of row and number of columnes from user and display below pattern.

//Input :    iRow : 3   ,  iCol : 5

//Output :  5	4	3	2	1
//			5	4	3	2	1
//			5	4	3	2	1

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i = 0;
	int j = 0;
	
	for(i = 5; i > 0; i--)
	{
		for(j = 5; j > 0; j--)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
}
int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter number of Row:");
	scanf("%d",&iValue1);

	printf("Enter number of Columne:");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);

	return 0;
}