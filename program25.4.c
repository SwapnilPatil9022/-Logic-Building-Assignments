//Write a program which accept string from user and Display only digits from thet string.

//Input : "marve89llous121"

//Output : 89121

//Input :  "Demo"

//Output :

#include<stdio.h>

void DisplayDigit(char *str)
{
	 while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }
        *str++;
    }
    printf("\n");
    return;
}

int main()
{
	char arr[20];
	
	printf("Enetr string\n");
	scanf("%[^'\n']s",arr);
	
	DisplayDigit(arr);
	
	return 0;
}