/*
Write a program which accept number from user and count frequency of 4 in it

input:2342
output: 1

input: 2233
Output: 0

*/

#include <stdio.h>

int CountFour(int iNo)
{
   int iTimes = 0;
   int iDigit = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit == 4)
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
    iRet = CountFour(iVal);

    printf("number of four is %d",iRet);
    return 0;
}