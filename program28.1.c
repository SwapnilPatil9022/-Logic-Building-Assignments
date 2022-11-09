////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///28.1 Write a program which accept string from user and copy that character of that string into another string in revers order.\
///
///      Input : “Marvellous Python”
///
///     Output :  "nohtyP suollevraM"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

int StrLen(char* str)
{
    int len = 0;
    for (len = 0; str[len] != '\0'; len++);
    return len;
}

void StrCpyRevX(char* src, char* dest)
{
	 int len = 0;
    len = StrLen(src);
    src = src + (len - 1);
    while (len > 0)
    {
        *dest = *src;
        dest++;
        src--;
        len--;
    }
    *dest = '\0';
    return;
}
	   
int main()
{
    char arr[60] = "Marvellous Python";  
    char brr[30];   	//Empty string

	printf("\n Enter String : ");
    scanf("%[^\n]s", arr);
	
    StrCpyRevX(arr,brr);
	
	printf("\n Reves String is = %s\n",brr);		// nohtyP suollevraM

    return 0;
} 