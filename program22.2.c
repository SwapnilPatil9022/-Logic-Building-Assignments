//Accpet character from user and check whether it is Capital or not (A-Z).

//Input  : F
//Output : TRUE

//Input  : d
//Output : FALSE

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
	 if(ch >= 'A' && ch <= 'Z')
	{
        return TRUE;
    }
     else
    {
        return FALSE;
    }
}

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	bRet = ChkCapital(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is Capital character");
	}
	else
	{
		printf("It is not a Capital character");
	}
	
	return 0;
}

