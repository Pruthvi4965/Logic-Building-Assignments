/*
Accept Character from user and check whether it is small case or
not (a-z).

Input : g
Output : TRUE

Input : D
Output : FALSE
*/
#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    // Apply condition to check whether it is small case or not.
    BOOL chk = FALSE;

    if ((ch >= 'a') && (ch <= 'z'))
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
    bRet = ChkSmall(cValue);
    if (bRet == TRUE)
    {
        printf("It is Small case Character\n");
    }
    else
    {
        printf("It is not Small case Character\n");
    }
    return 0;
}