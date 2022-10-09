//Write a program which accepet numebr from user and check whether it containce 0 int it or not.

//Input:2395
//Output : There is no zero

//Input:1018
//Output : It contains zero

//Input:9000
//Output : It containcs zero

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

bool ChkZero(int iNo)
{
	int iCnt = 0;
	int iDigit = 0;

	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit == 0)
        {
            return TRUE;
        }
		iNo = iNo / 10;
	}
}
int main()
{
	int iValue = 0;
	bool bRet = FALSE;

	printf("Enter numebr\n");
	scanf("%d",&iValue);

	bRet = ChkZero(iValue);
	if(bRet == TRUE )
	{
		printf("it containce zero");
	}
	else
	{
		printf("There is no zero");
	}

	return  0;
}
