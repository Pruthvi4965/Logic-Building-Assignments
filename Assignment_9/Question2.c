/*

Write a program which accept number from user and check whether it contain 0 or not

Input: 2395
Output: there is no zero

Input: 1018
Output: it contain zero

Input: -1018
Output: it contain zero

*/

#include <stdio.h>
#include <stdbool.h>

#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        
        if (iDigit == 0)
        {
          return TRUE;
        }
        else
        {
            return FALSE;
        }

      
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);
    if (bRet == TRUE)
    {
        printf("it contain zero");
    }
    else
    {
        printf("there is no zero");
    }
  
    return 0;
}