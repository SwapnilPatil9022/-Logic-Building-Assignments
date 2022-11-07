//Write a program which accept string from user and Display only digits from thet string.

//Input : "MarvellouS"
//Output : 0

//Input :  "MarvellouS Infosystems"
//Output :  1

//Input :  "MarvellouS Infosystems by Piyush Manohar Khairnar"
//Output :  5

#include<stdio.h>

int CountWhite(char *str)
{
	 int Cnt = 0;
	 
    while(*str != '\0')
    {
        if(*str == ' ')				//(*str == 9 || *str == 32)   //OR // TAB == 9 || SPACE == 32
        {
            Cnt++;
        }
        *str++;
    }
    return Cnt;
}

int main()
{
	char arr[50];
	int iRet = 0;
	
	printf("Enetr string\n");
	scanf("%[^'\n']s",arr);
	
	iRet = CountWhite(arr);
	
	printf("%d",iRet);
	
	return 0;
}