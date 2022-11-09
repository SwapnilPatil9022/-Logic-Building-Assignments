//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///Statements 31.2 Write a program which accept string from user and copy that character of that string into another string by converting all Capital character into a Small case. 
///
///         Input : "MARVELLOUS PYTHIN 2"
///        Output : “marvellous python 2”
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void StrRevCpy(char* str ,char* dest)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str<= 'Z')
        {
            *dest=*str+32;
            dest++;
            str++;
            continue;
        }
        *dest=*str;
        dest++;
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