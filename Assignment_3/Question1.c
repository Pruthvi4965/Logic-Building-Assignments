/*
1.Write a program which accept one number from user and print that number of even numbers on screen.

input: 7        Output: 2 4 6 8 10 12 14
*/

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d",iCnt * 2);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("enter number:");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}
