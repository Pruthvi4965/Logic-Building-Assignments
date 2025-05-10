// 5. Accept number from user and check whether number is even or odd.

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("the number is even");
        return TRUE;
    }
    else
    {
        printf("number is odd");
        return FALSE;
    }

}


int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("enter the number:");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

   return 0;

}