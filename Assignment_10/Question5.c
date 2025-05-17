/*
Write a program which accept number from user and return difference betwen summation of even digits and summation of odd digits

Input: 2395
Output: -15      (2-17)

Input: 1018
Output: 6        (8-2)

Input: 8440
Output: 16       (16-0)

*/

#include <stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSumEvn = 0;
    int iSumOd = 0;
    int iDiff = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if ((iDigit % 2) == 0)
        {
            iSumEvn = iSumEvn + iDigit;
        }

        if ((iDigit % 2) != 0)
        {
            iSumOd = iSumOd + iDigit;
        }

        iNo = iNo / 10;
    }
    iDiff = iSumEvn - iSumOd;
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number :");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);
    printf("difference betwen summation of even digits and summation of odd digits is %d", iRet);
    return 0;
}