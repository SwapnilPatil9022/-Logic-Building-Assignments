////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// Statements 31.2 Write a program which accept string from user and copy that character of that string into another string by converting all small character into a capital case. 
///
///         Input : “Marvellous Python 2”
///        Output : "MARVELLOUS PYTHIN 2"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void StrCpySmall(char* str ,char* dest)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str<= 'z')
        {
            *dest=*str-32;
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

    StrCpySmall(Str,Dest);

    printf("%s",Dest);

    return 0;
}