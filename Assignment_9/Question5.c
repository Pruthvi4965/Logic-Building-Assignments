/*
Write a program which accept number from user and count frequency of such a digits which are less than 6.

input: 2395
output: 3

input: 9440
Output: 3

*/


#include <stdio.h>

int Count(int iNo)
{
   int iTimes = 0;
   int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit <= 6)
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
    iRet = Count(iVal);

    printf(" there are %d number less than six",iRet);
    return 0;
}