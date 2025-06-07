/*
Accept Character from user and check whether it is digit or not
(0-9).

Input : 7
Output : TRUE

Input : d
Output : FALSE
*/
#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    // Apply condition to check whether it is digit or not.

    BOOL chk = FALSE;
    if ((ch >= '0') && (ch <= '9'))
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
    bRet = ChkDigit(cValue);
    if (bRet == TRUE)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not Digit\n");
    }
    return 0;
}