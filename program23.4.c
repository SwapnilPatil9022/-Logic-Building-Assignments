//Accept character from user and check whether it is spacial symbol or not(!,@,#,$,%,^,&,*).

// Input  : %
// Output : TRUE	

// Input  : d
// Output : FALSE


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpacial(char ch)
{
	if((ch == '!')||(ch == '@')||(ch == '#')||(ch == '$')||(ch == '%')||(ch == '^')||(ch == '&')||(ch == '*'))
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
	
	printf("Enter the Character\n");
	scanf("%c",&cValue);
	
	bRet = ChkSpacial(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is special character\n");
	}
	else
	{
		printf("It is not a special character\n");
	}
	return 0;
}