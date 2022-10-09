//Write a program which accept number from user and count frequency of 2 int it.

//Input:2395
//Output : 1

//Input: 1018
//Output : 0

//Input: 9000
//Output : 0


//Input:922432
//Output : 3

#include<stdio.h>

int CountTwo(int iNo)
{
	int iCnt = 0;
	int iCount = 0;
	
		while(iNo > 0)
	{
		iCount = iNo % 10;
		if(iCount == 2)
		iCnt++;
		{
			iNo = iNo / 10;
		}
	}
	return iCnt;
}
int main()
{
	int iValue = 0;
	int IRet = 0;
	
	printf("Enter number: \n");
	scanf("%d",&iValue);
	
	IRet = CountTwo(iValue);
	
	printf("%d",IRet);
	
	return 0;
}

