/*
Write a program witch accept number from user and count frequency of 2 in it

Input: 2334
Output: 1

Input: 1018
Output: 0

INput : 92232
Output: 3
*/

#include <stdio.h>

int CountTwo(int iNo)
{
   int iTimes = 0;
   int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit == 2)
        {
            iTimes++;
        }
    }
   
    return iTimes;
}

int main()
{
    int iVal = 0;
    int iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iVal);
    iRet = CountTwo(iVal);

    printf("number of two is %d",iRet);
    return 0;
}