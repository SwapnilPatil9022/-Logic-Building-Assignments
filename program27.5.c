////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///27.5 Write a program which accept 2 string from user and concat secound string after first string.
///		(Implement strcat() functon).
///
///      Input : “Marvellous Infosystems”
///			   : "Logic Building"
///
///     Output :  "Marvellous Infosystems Logic Building"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

void StrcatX(char* src, char* dest)
{
    while (*src != '\0')   ///Traverse Frist String Till End
    {
        src++;
    }
    *src = ' ';
    src++;
    while (*dest != '\0')   /// Copy Content Of Destination in Source
    {
        *src = *dest;
        dest++;
        src++;
    }
    *src = '\0';
    return;
}

int main()
{
    char arr[60] = "Marvellous Infosystems";  
    char brr[30] = " Logic Building";   

    StrcatX(arr,brr);
	
	printf("\n Concat String is = %s\n",arr);		//"Marvellous Infosystems Logic Building"

    return 0;
} 