/*
write a program which accept number from user and if number is less than 50 print small
if it is greated than 50 and less tan 100 then print medium,if it is greater than 100 print
large

Input: 75
Output: Medium

*/

#include <stdio.h>

void Number(int iNo)
{
    if (iNo >= 100)
    {
        printf("large");
    }
    else if ((iNo >= 50) && (iNo < 100))
    {
        printf("medium");
    }
    else if (iNo < 50)
    {
        printf("small");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);
    Number(iValue);

    return 0;
}