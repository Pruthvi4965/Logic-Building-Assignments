/*
Write a program which returns difference between Even factorial and odd factorial of given number.

Input: 5
Output: -7       (8-15)

Input: -5
Output: -7       (8-15)

Input: 10
Output: 2885     (3840-945)

*/

#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvn = 1;
    int iOdd = 1;
    int iDeff = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            iEvn = iEvn * iCnt;
        }

        if ((iCnt % 2) != 0)
        {
            iOdd = iOdd * iCnt;
        }
    }
    iDeff = iEvn - iOdd;
    return iDeff;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);
    return 0;
}