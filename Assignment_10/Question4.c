/*
Write a program which accept number from user and return multiplication of all digits.

Input: 2395
Output: 270

Input:1018
Output: 8

*/

#include<stdio.h>

int MultiDigits(int iNo)
{
int iDigit = 0;
int iMult = 1;

while(iNo != 0 )
{
iDigit = iNo % 10 ; 
iNo = iNo /10;

iMult = iMult * iDigit;
}

return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:");
    scanf("%d", &iValue);

    iRet = MultiDigits(iValue);

    printf("multiplication of all digits is : %d\n", iRet);
    return 0 ;
}