//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// 28.2 Write a program which accept string from user and copy that characters of that String into another string by removing all white spaces.
///
///         Input : “Marvel lous Pyth on”
///        Output : “MarvellousPython”
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void StrRevCpy(char* str ,char* dest)
{
    while(*str != '\0')
    {
        if(*str != ' ')
        {
            *dest=*str;
            dest++;
        }
        str++;
    }
    *dest='\0';
    return;
}
int main()
{
    char Str[30]="\0";
    char Dest[30]="\0";

    printf("Enter The String => ");
    scanf("%[^\n]s",Str);

    StrRevCpy(Str,Dest);

    printf("%s",Dest);

    return 0;
}