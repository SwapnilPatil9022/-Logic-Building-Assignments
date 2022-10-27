//Accept number of row and number of columnes from user and display below pattern.

//Input :    iRow : 4   ,  iCol : 4

//Output :  A	B	C	D
//			A	B	C	D
//			A	B	C	D
//			A	B	C	D

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i= 0;
	int j= 0;
	char k= '\0';
	char s= '\0';
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1,k = 'A',s = 'a'; j <= iCol; j++, k++,s++)
			if(i % 2)
		{
			printf("%c\t",k);
		}
		else
		{
				printf("%c\t",s);
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