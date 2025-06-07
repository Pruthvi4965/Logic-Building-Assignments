/*
Accept Character from user and check whether it is alphabet or not
(A-Z a-z).

Input : F
Output : TRUE

Input : &
Output : FALSE
*/

#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    // Apply condition to check whether it is alphabet or not.

    BOOL chk = FALSE;

    if (((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')))
    {
        chk = TRUE;
    }
    else
    {
        chk = FALSE;
    }
    return chk;
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter the character : ");
    scanf("%c", &cValue);
    bRet = ChkAlpha(cValue);
    if (bRet == TRUE)
    {
        printf("It is an alphabet character\n");
    }
    else
    {
        printf("It is not an alphabet character\n");
    }
    return 0;
}