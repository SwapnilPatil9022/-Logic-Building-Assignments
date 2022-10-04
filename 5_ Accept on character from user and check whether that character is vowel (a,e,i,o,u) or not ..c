// Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not .
// Input : E Output : TRUE
// Input : d Output : FALSE

typedef int BOOL ;
# define TRUE 1
# define FALSE 0
BOOL ChkVowel( char CValue)
{
     if(CValue == 'a'||CValue == 'e'||CValue == 'i'||CValue =='o'||CValue=='u'||CValue == 'A'||CValue == 'E'||CValue == 'I'||CValue =='O'||CValue=='U')
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

     printf("\n Enter character = ");
     scanf("%c",&cValue);

     bRet =ChkVowel(cValue );

     if (bRet == TRUE)
     {
        printf(" \n It is Vowel . \n");
     }
     else
     {
        printf("\n It is not Vowel .\n");
     }
     return 0;
}